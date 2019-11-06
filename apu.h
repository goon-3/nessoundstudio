#include "types.h"
#include "dmc_pitches.h"
// NOTE : 16 bit (padded) native NES system code :
#define apu_channels ((u16*)0x4015)
// you write hereon a dmc pitch which gets played back : 
#define dmc_pitch ((u16*)0x4010)

#define sample_buffer ((u16*)0x4012)
#define sample_length ((u16*)0x4013)

// NOTE : NES asssembler addresses for writing music files :
#define apu_channels_address_string "0x4015"
#define dmc_pitch_address_string "0x4010"
