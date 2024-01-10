/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "ParamIds.h"
 
//==============================================================================
HeavyTutorialAudioProcessor::HeavyTutorialAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", AudioChannelSet::stereo(), true)
                     #endif
                       ),
#endif
apvts (*this, nullptr, "Parameters", createParameters())
{
    for (int i=0; i<parameters.size(); i++) {
        apvts.addParameterListener (parameters.at(i), this);
    }
}

HeavyTutorialAudioProcessor::~HeavyTutorialAudioProcessor()
{
    for (int i=0; i<parameters.size(); i++) {
        apvts.removeParameterListener (parameters.at(i), this);
    }}

//==============================================================================
const String HeavyTutorialAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool HeavyTutorialAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool HeavyTutorialAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool HeavyTutorialAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double HeavyTutorialAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int HeavyTutorialAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int HeavyTutorialAudioProcessor::getCurrentProgram()
{
    return 0;
}

void HeavyTutorialAudioProcessor::setCurrentProgram (int index)
{
}

const String HeavyTutorialAudioProcessor::getProgramName (int index)
{
    return {};
}

void HeavyTutorialAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void HeavyTutorialAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
    
    context = hv_Simple_OSC_new(sampleRate);
    
}

void HeavyTutorialAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool HeavyTutorialAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void HeavyTutorialAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
    ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();
    
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear (i, 0, buffer.getNumSamples());
    
    /*
    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        auto* channelData = buffer.getWritePointer (channel);
        for (int sample = 0; sample < buffer.getNumSamples(); ++sample)
        {
            channelData[sample] = channelData[sample] * Decibels::decibelsToGain (mGain);
        }
    }
    */
    
    // Render Heavy Synth Patch
    int bufferOffset = 0;
    int samplesLastSegment = buffer.getNumSamples() - bufferOffset;
    if (samplesLastSegment > 0) {
        renderSynth(buffer, samplesLastSegment, bufferOffset);
    }
    
}

void HeavyTutorialAudioProcessor::renderSynth(juce::AudioBuffer<float>& buffer, int sampleCount, int bufferOffset)
{
    float* outputBuffers[2] = { nullptr, nullptr };
    outputBuffers[0] = buffer.getWritePointer(0) + bufferOffset;
    if (getTotalNumOutputChannels() > 1) {
        outputBuffers[1] = buffer.getWritePointer(1) + bufferOffset;
    }

    //int hv_process(HeavyContextInterface *c, float **inputBuffers, float **outputBuffers, int n);
    hv_process (context,NULL,outputBuffers,buffer.getNumSamples());
}

void HeavyTutorialAudioProcessor::sendFloatToSynth (hv_uint32_t receiverHash, float pitch) {
    
    // C style
    if (context) hv_sendFloatToReceiver (context, receiverHash, pitch);
    
    // C++   ???
    //if (context) context->sendFloatToReceiver (receiverHash, pitch);
}

//==============================================================================
bool HeavyTutorialAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* HeavyTutorialAudioProcessor::createEditor()
{
    //return new GainTutorialAudioProcessorEditor (*this);
    return new GenericAudioProcessorEditor (*this);
}

//==============================================================================
void HeavyTutorialAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    juce::MemoryOutputStream mos (destData, true);
        apvts.state.writeToStream (mos);
}

void HeavyTutorialAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    auto tree = juce::ValueTree::readFromData (data, static_cast<size_t> (sizeInBytes));

       if (tree.isValid())
           apvts.replaceState (tree);

}

void HeavyTutorialAudioProcessor::parameterChanged (const juce::String& parameterID, float newValue)
{
    if (!context) return;
    
    hv_uint32_t hv_hash_param = hv_stringToHash( parameterID.toUTF8() );
    
    sendFloatToSynth (hv_hash_param, newValue);

    // if (parameterID == ParamIDs::Pitch) { sendFloatToSynth (HV_SIMPLE_OSC_PARAM_IN_PITCH, newValue); }
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new HeavyTutorialAudioProcessor();
}




AudioProcessorValueTreeState::ParameterLayout HeavyTutorialAudioProcessor::createParameters()
{
    juce::AudioProcessorValueTreeState::ParameterLayout layout;
    

    layout.add (std::make_unique<juce::AudioParameterFloat> (juce::ParameterID { ParamIDs::Pitch, 1 },
                                                             "Pitch",
                                                             juce::NormalisableRange<float> (0.0f, 1.0f, 0.001f),
                                                             0.5f,
                                                             juce::String(),
                                                             juce::AudioProcessorParameter::genericParameter,
                                                             nullptr,
                                                             nullptr));
    
    layout.add (std::make_unique<juce::AudioParameterFloat> (juce::ParameterID { ParamIDs::Volume, 1 },
                                                             "Volume",
                                                             juce::NormalisableRange<float> (0.0f, 1.0f, 0.001f),
                                                             0.5f,
                                                             juce::String(),
                                                             juce::AudioProcessorParameter::genericParameter,
                                                             nullptr,
                                                             nullptr));
    

    layout.add (std::make_unique<juce::AudioParameterFloat> (juce::ParameterID { ParamIDs::RevGain, 1 },
                                                             "RevGain",
                                                             juce::NormalisableRange<float> (0.0f, 1.0f, 0.001f),
                                                             0.5f,
                                                             juce::String(),
                                                             juce::AudioProcessorParameter::genericParameter,
                                                             nullptr,
                                                             nullptr));
    
    layout.add (std::make_unique<juce::AudioParameterFloat> (juce::ParameterID { ParamIDs::RevFeedback, 1 },
                                                             "RevFeedback",
                                                             juce::NormalisableRange<float> (0.0f, 1.0f, 0.001f),
                                                             0.7f,
                                                             juce::String(),
                                                             juce::AudioProcessorParameter::genericParameter,
                                                             nullptr,
                                                             nullptr));
    
    layout.add (std::make_unique<juce::AudioParameterFloat> (juce::ParameterID { ParamIDs::RevPredelay, 1 },
                                                             "RevPredelay",
                                                             juce::NormalisableRange<float> (0.0f, 1.0f, 0.001f),
                                                             0.1f,
                                                             juce::String(),
                                                             juce::AudioProcessorParameter::genericParameter,
                                                             nullptr,
                                                             nullptr));
    
    

    return layout;
}
