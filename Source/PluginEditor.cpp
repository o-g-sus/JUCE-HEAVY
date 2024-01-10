/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
GainTutorialAudioProcessorEditor::GainTutorialAudioProcessorEditor (HeavyTutorialAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    
    // DUMMY CODE, GENERIC GUI IS USED INSTEAD IN  ::createEditor()
    
    // OSC
    mGainSlider = std::make_unique<juce::Slider>();
    mGainSlider->setSliderStyle (Slider::SliderStyle::LinearVertical);
    mGainSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 50, 20);
    mGainSlider->setRange (0.0f, 1.0f, 0.001f);
    mGainSlider->setValue (0.5f);
    mGainSlider->addListener (this);
    addAndMakeVisible (mGainSlider.get());
    
    mPitchSlider = std::make_unique<juce::Slider>();
    mPitchSlider->setSliderStyle (Slider::SliderStyle::LinearVertical);
    mPitchSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 50, 20);
    mPitchSlider->setRange (0.0f, 1.0f, 0.001f);
    mPitchSlider->setValue (0.5f);
    mPitchSlider->addListener (this);
    addAndMakeVisible (mPitchSlider.get());
    
    // Reverb
    mRevGainSlider = std::make_unique<juce::Slider>();
    mRevGainSlider->setSliderStyle (Slider::SliderStyle::LinearVertical);
    mRevGainSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 50, 20);
    mRevGainSlider->setRange (0.0f, 1.0f, 0.001f);
    mRevGainSlider->setValue (0.5f);
    mRevGainSlider->addListener (this);
    addAndMakeVisible (mRevGainSlider.get());
    
    mRevFeedbackSlider = std::make_unique<juce::Slider>();
    mRevFeedbackSlider->setSliderStyle (Slider::SliderStyle::LinearVertical);
    mRevFeedbackSlider->setTextBoxStyle (Slider::TextBoxBelow, true, 50, 20);
    mRevFeedbackSlider->setRange (0.0f, 1.0f, 0.001f);
    mRevFeedbackSlider->setValue (0.5f);
    mRevFeedbackSlider->addListener (this);
    addAndMakeVisible (mRevFeedbackSlider.get());
    
    mRevPredelaySlider = std::make_unique<juce::Slider>();
    mRevPredelaySlider->setSliderStyle (Slider::SliderStyle::LinearVertical);
    mRevPredelaySlider->setTextBoxStyle (Slider::TextBoxBelow, true, 50, 20);
    mRevPredelaySlider->setRange (0.0f, 1.0f, 0.001f);
    mRevPredelaySlider->setValue (0.5f);
    mRevPredelaySlider->addListener (this);
    addAndMakeVisible (mRevPredelaySlider.get());
    
    // Make slider attachments like that rather and use not sliderValueChanged !!
    
    //sliderAttachment = std::make_unique<juce::AudioProcessorValueTreeState::SliderAttachment>(processor.apvts, attachName, *this);
    // valueLabel = processor.apvts.getParameter(attachName)->getLabel();
    
    setSize (600, 300);
}

GainTutorialAudioProcessorEditor::~GainTutorialAudioProcessorEditor()
{
}

//==============================================================================
void GainTutorialAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void GainTutorialAudioProcessorEditor::resized()
{
    int y = getHeight() / 2 - 75;
    int h = 150;
    int w = 70;
    
    mGainSlider->setBounds   (50, y, w, h);
    mPitchSlider->setBounds  (150, y, w, h);
    
    mRevGainSlider->setBounds (300, y, w, h);
    mRevFeedbackSlider->setBounds   (400, y, w, h);
    mRevPredelaySlider->setBounds   (500, y, w, h);
}


void GainTutorialAudioProcessorEditor::sliderValueChanged (Slider *slider)
{
    
    if (slider == mGainSlider.get())
    {
        processor.sendFloatToSynth (HV_SIMPLE_OSC_PARAM_IN_VOLUME, mGainSlider->getValue());
    }
    
    if (slider == mPitchSlider.get())
    {
        processor.sendFloatToSynth (HV_SIMPLE_OSC_PARAM_IN_PITCH, mPitchSlider->getValue());
    }
    
    
    if (slider == mRevGainSlider.get())
    {
        processor.sendFloatToSynth (HV_SIMPLE_OSC_PARAM_IN_REVGAIN, mRevGainSlider->getValue());
    }
    
    if (slider == mRevFeedbackSlider.get())
    {
        processor.sendFloatToSynth (HV_SIMPLE_OSC_PARAM_IN_REVFEEDBACK, mRevFeedbackSlider->getValue());
    }
    
    if (slider == mRevPredelaySlider.get())
    {
        processor.sendFloatToSynth (HV_SIMPLE_OSC_PARAM_IN_REVPREDELAY, mRevPredelaySlider->getValue());
    }
    
}
