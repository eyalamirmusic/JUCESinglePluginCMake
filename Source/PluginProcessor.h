#pragma once

#include <shared_plugin_helpers/shared_plugin_helpers.h>

class MinimalAudioPlugin : public PluginHelpers::ProcessorBase
{
public:
    void processBlock(juce::AudioBuffer<float>& buffer,
                      juce::MidiBuffer& midiMessages) override;
};
