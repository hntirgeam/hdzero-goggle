#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define BEEP_VERY_SHORT 1
#define BEEP_SHORT 50
#define BEEP_LONG 200

#define BEEP_UI_SCROLL 10
#define BEEP_UI_SHORT_PRESS 50
#define BEEP_UI_LONG_PRESS 100
#define BEEP_DVR_TOGGLE -1

#define beep() beep_dur(BEEP_SHORT)



void beep_init(void);
void beep_dur(int ms);
void beep_ui(int ms);
void beep_dvr();

#ifdef __cplusplus
}
#endif
