/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include "HeavyFiles/HvHeavy.h"
#include "HeavyFiles/Heavy_Simple_OSC.h"

//==============================================================================
/**
*/
class HeavyTutorialAudioProcessor  : public AudioProcessor,
                                    public juce::AudioProcessorValueTreeState::Listener,
                                    public ValueTree::Listener
{
public:
    //==============================================================================
    HeavyTutorialAudioProcessor();
    ~HeavyTutorialAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioBuffer<float>&, MidiBuffer&) override;
    

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    
    
    void parameterChanged (const juce::String& parameterID, float newValue) override;
    
    HeavyContextInterface *context;
    void sendFloatToSynth (hv_uint32_t receiverHash, float pitch);

private:
    //==============================================================================
    void renderSynth(juce::AudioBuffer<float>& buffer, int sampleCount, int bufferOffset);
    
    AudioProcessorValueTreeState apvts;
    AudioProcessorValueTreeState::ParameterLayout createParameters();
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HeavyTutorialAudioProcessor)
};
