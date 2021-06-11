#pragma once

#ifdef ZELDA_TREASURE
#undef ZELDA_TREASURE
#define ZELDA_TREASURE \
    Q__NOTE(_A6), \
    Q__NOTE(_AS6), \
    Q__NOTE(_B6), \
    HD_NOTE(_C7), \
      
#endif
      
#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PREONIC_SOUND)
// #define STARTUP_SONG SONG(NO_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(DVORAK_SOUND), \
                                  SONG(ZELDA_TREASURE),	\
                                  SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

#ifdef USB_MAX_POWER_CONSUMPTION
#undef USB_MAX_POWER_CONSUMPTION
#endif
#define USB_MAX_POWER_CONSUMPTION 500
