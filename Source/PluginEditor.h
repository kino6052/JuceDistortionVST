/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NewProjectAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NewProjectAudioProcessorEditor (NewProjectAudioProcessor&);
    ~NewProjectAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    juce::Slider* driveKnob;
    juce::Slider* rangeKnob;
    juce::Slider* blendKnob;
    juce::Slider* volumeKnob;

    juce::AudioProcessorValueTreeState::SliderAttachment* driveAttachment;
    juce::AudioProcessorValueTreeState::SliderAttachment* rangeAttachment;
    juce::AudioProcessorValueTreeState::SliderAttachment* blendAttachment;
    juce::AudioProcessorValueTreeState::SliderAttachment* volumeAttachment;

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NewProjectAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProjectAudioProcessorEditor)
};
