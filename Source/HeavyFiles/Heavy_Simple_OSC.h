/** "ogsus" */

#ifndef _HEAVY_SIMPLE_OSC_H_
#define _HEAVY_SIMPLE_OSC_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_SIMPLE_OSC_PARAM_IN_PITCH = 0x94DB5AB5, // Pitch
  HV_SIMPLE_OSC_PARAM_IN_REVFEEDBACK = 0xB3A0D463, // RevFeedback
  HV_SIMPLE_OSC_PARAM_IN_REVGAIN = 0x3B2EB6DE, // RevGain
  HV_SIMPLE_OSC_PARAM_IN_REVPREDELAY = 0x30ADF4D0, // RevPredelay
  HV_SIMPLE_OSC_PARAM_IN_VOLUME = 0x528845DB, // Volume
} Hv_Simple_OSC_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_Simple_OSC_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_Simple_OSC_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_Simple_OSC_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_SIMPLE_OSC_H_
