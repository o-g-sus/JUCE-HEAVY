

#pragma once

// HEAVY PARAMETERS

//typedef enum {
//  HV_SIMPLE_OSC_PARAM_IN_PITCH = 0x94DB5AB5, // Pitch
//  HV_SIMPLE_OSC_PARAM_IN_REVFEEDBACK = 0xB3A0D463, // RevFeedback
//  HV_SIMPLE_OSC_PARAM_IN_REVGAIN = 0x3B2EB6DE, // RevGain
//  HV_SIMPLE_OSC_PARAM_IN_REVPREDELAY = 0x30ADF4D0, // RevPredelay
//  HV_SIMPLE_OSC_PARAM_IN_VOLUME = 0x528845DB, // Volume
//} Hv_Simple_OSC_ParameterIn;


// Reflect Heavy Parameters here to make them work for JUCE Parameters / AudioProcessorValueTreeState apvts

namespace ParamIDs
{
    inline constexpr auto Pitch         { "Pitch" };
    inline constexpr auto Volume        { "Volume" };
    inline constexpr auto RevGain       { "RevGain" };
    inline constexpr auto RevFeedback   { "RevFeedback" };
    inline constexpr auto RevPredelay   { "RevPredelay" };
}



const std::vector<String> parameters =
{
    ParamIDs::Pitch,
    ParamIDs::Volume,
    ParamIDs::RevGain,
    ParamIDs::RevFeedback,
    ParamIDs::RevPredelay,

};


