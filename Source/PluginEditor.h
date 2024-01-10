/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class HeavyTutorialAudioProcessorEditor  : public AudioProcessorEditor,
                                          public Slider::Listener
{
public:
    HeavyTutorialAudioProcessorEditor (HeavyTutorialAudioProcessor&);
    ~HeavyTutorialAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void sliderValueChanged (Slider* slider) override;

private:
    
    std::unique_ptr<juce::Slider> mGainSlider, mPitchSlider, mRevGainSlider, mRevFeedbackSlider, mRevPredelaySlider;
    
    HeavyTutorialAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HeavyTutorialAudioProcessorEditor)
};
