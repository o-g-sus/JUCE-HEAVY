# JUCE-HEAVY DEMO
This is a [JUCE](https://juce.com) Demo Project showing how to connect with Heavy C++ (shortform `HVCC`) generated Source files.
The Demo includes a minimal synthesizer created with PureData/PlugData which was then compiled with [HVCC](https://github.com/Wasted-Audio/hvcc). A connection between the Heavy parameters and JUCE is done via JUCE's `AudioProcessor APVTS` parameter management.



## How does it work?
In `ParamIds.h` you have to double the Hashs/Parameters generated by the Heavy Compiler to connect them to APVTS. In the case of this demo you see the Parameters created by Heavy in the `Heavy_Simple_OSC.h` file.
This Project uses the `JUCE` generic editor by default because it's very handy for quick tests. But if you cange to `HeavyTutorialAudioProcessorEditor` in HeavyTutorialAudioProcessor::createEditor(), you can start with designing your own GUI right away, some basics are already there.
The PureData Source File `Simple-OSC.pd` is included in the root folder of the Project. It works with PlugData, but won't work with Vanilla, as it uses a Reverb created with Heavy. The C files created by Heavy are in the Folder `Source/HeavyFiles`.



## Why would I need this?
`HVCC` compiles Plugins for different formats already: LV2, VST2, VST3, Clap, Jack ... 
BUT, if you want to create your own `GUI`, you need to spend some extra work, like to create a unique GUI with JUCE.
JUCE also gives you the possibility to create Projects for a huge variety of plattforms. You can create Apps for iOS or Android Devices for example, which is not possible with many other crossplatform audio frameworks.
<br />
<br />


<img width="1266" alt="Bildschirmfoto 2024-01-11 um 11 12 15" src="https://github.com/o-g-sus/JUCE-HEAVY/assets/1574482/1d96e589-3dc8-4ad2-b8aa-5564acd1c831">
Screenshot of the PlugData Source Patch and the JUCE auto generated Plugin Window
<br />
<br />

## Mobile Version
![IMG_0804](https://github.com/o-g-sus/JUCE-HEAVY/assets/1574482/ea923f3b-c125-46f8-ba32-e22cf14dcf67)
Screenshot of an `AUv3` version of the app in AUM host app.
<br />
<br />
For the Mobile Version you will take the Xcode iOS Exporter. To make it work on your iOS device change the `Development Team ID` to yours. 
<img width="964" alt="Bildschirmfoto 2024-01-11 um 14 23 55" src="https://github.com/o-g-sus/JUCE-HEAVY/assets/1574482/6f461be6-f01d-4b7a-b784-0f8d8644ee80">
<br />

## Possible ports with JUCE
<img width="440" alt="Bildschirmfoto 2024-01-11 um 13 55 44" src="https://github.com/o-g-sus/JUCE-HEAVY/assets/1574482/6c608d03-a3e1-4ad3-af22-19fb9b16857f"><br />
This project will create the ports for Standalone, VST3 and AUv3, but you can go other directions of course.
<br />

## More about
- [PureData](https://puredata.info) Open Source equivalent to `Max/Msp`, `Max4Live`
- [PlugData](https://plugdata.org) A 'modern' way of patching PureData, comes with built in `HVCC` Compiler already, very cool! 
- [HVCC](https://github.com/Wasted-Audio/hvcc) Source on Github
- [HVCC INFO](https://wasted-audio.github.io/hvcc/), [HVCC C API](https://wasted-audio.github.io/hvcc/docs/05.c.html) Documentation
- [JUCE](https://juce.com) Crossplatform Audio Framework
