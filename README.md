# JUCE-HEAVY Template
This is a [JUCE](https://juce.com) Demo / Template Project showing how to connect with Heavy C++ (shortform "HVCC") generated Source files.
This Demo / Template includes a minimal synthesizer created with PureData/PlugData which was then compiled with [HVCC](https://github.com/Wasted-Audio/hvcc). A connection between the Heavy parameters an JUCE is done via JUCE's AudioProcessor APVTS parameter management.


## How does it work?
In 'ParamIds.h' you have to double Hashs generate by the Heavy Compiler. In the case of this demo that's in the Heavy_Simple_OSC.h file. 

## More about
- [PureData](https://puredata.info)
- [PlugData](https://plugdata.org) A 'modern' way of patching PureData, comes with a built in HVCC Compiler already, very cool! 
- [HVCC](https://github.com/Wasted-Audio/hvcc)
- [HVCC C API](https://wasted-audio.github.io/hvcc/docs/05.c.html)
- [JUCE](https://juce.com)


![Groß (Bildschirmfoto 2024-01-10 um 21 23 21)](https://github.com/o-g-sus/JUCE-HEAVY/assets/1574482/965c4212-811f-4418-bd54-f9096a2225e6)
