# JUCE-HEAVY Template
This is a [JUCE](https://juce.com) Demo / Template Project showing how to connect with Heavy C++ (shortform "HVCC") generated Source files.
This Demo includes a minimal synthesizer created with PureData/PlugData which was then compiled with [HVCC](https://github.com/Wasted-Audio/hvcc). A connection between the Heavy parameters an JUCE is done via JUCE's AudioProcessor APVTS parameter management.

## How does it work?
In 'ParamIds.h' you have to double the Hashs/Parameters generate by the Heavy Compiler to connect them to APVTS. In the case of this demo the Parameters are in the Heavy_Simple_OSC.h file.
This Project uses the generic editor by default, but if you cange to HeavyTutorialAudioProcessorEditor in HeavyTutorialAudioProcessor::createEditor() you can start with designing your own GUI.
Included is the PureData Source File 'Simple-OSC-Heavy.pd', which works with PlugData, but won't work with Vanilla, as it uses with Heavy created Externals.



## Why would I do this?
Heavy compiles Plugins for different formats already: LV2, VST2, VST3, Clap, Jack ... 
BUT if you want to create your own GUI, you need to spend some extra work.
AND JUCE gives you the opportunity to create Projects for a huge variety of plattforms. You can create Apps for iOS or Android Devices for example.



Screenshot PlugData source Patch and generated Plugin Juce Window

![Groß (Bildschirmfoto 2024-01-10 um 21 23 21)](https://github.com/o-g-sus/JUCE-HEAVY/assets/1574482/965c4212-811f-4418-bd54-f9096a2225e6)


## More about
- [PureData](https://puredata.info)
- [PlugData](https://plugdata.org) A 'modern' way of patching PureData, comes with a built in HVCC Compiler already, very cool! 
- [HVCC](https://github.com/Wasted-Audio/hvcc)
- [HVCC C API](https://wasted-audio.github.io/hvcc/docs/05.c.html)
- [JUCE](https://juce.com)
