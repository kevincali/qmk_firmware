#ifndef CENTROMERE_PLUS_H
#define CENTROMERE_PLUS_H

#include "quantum.h"
#include "matrix.h"
#include <stddef.h>

#define red_led_off   PORTF |= (1<<5)
#define red_led_on    PORTF &= ~(1<<5)
#define blu_led_off   PORTF |= (1<<4)
#define blu_led_on    PORTF &= ~(1<<4)
#define grn_led_off   PORTD |= (1<<1)
#define grn_led_on    PORTD &= ~(1<<1)

#define set_led_off     red_led_off; grn_led_off; blu_led_off
#define set_led_red     red_led_on;  grn_led_off; blu_led_off
#define set_led_blue    red_led_off; grn_led_off; blu_led_on
#define set_led_green   red_led_off; grn_led_on;  blu_led_off
#define set_led_yellow  red_led_on;  grn_led_on;  blu_led_off
#define set_led_magenta red_led_on;  grn_led_off; blu_led_on
#define set_led_cyan    red_led_off; grn_led_on;  blu_led_on
#define set_led_white   red_led_on;  grn_led_on;  blu_led_on

#define LAYOUT( \
  k00, k01, k02, k03, k04, k05, k06,      k07, k08, k09, k10, k11, k12, k13, \
  k14, k15, k16, k17, k18, k19, k20,      k21, k22, k23, k24, k25, k26, k27, \
  k28, k29, k30, k31, k32, k33, k34,      k35, k36, k37, k38, k39, k40, k41, \
  k42, k43, k44, k45, k46, k47,                k48, k49, k50, k51, k52, k53, \
            k54, k55, k56, k57,                k58, k59, k60, k61  \
) \
{ \
    { k00,   k01,   k02, k03, k04, k05, k06,        k07,   k08, k09, k10, k11, k12,   k13   }, \
    { k14,   k15,   k16, k17, k18, k19, k20,        k21,   k22, k23, k24, k25, k26,   k27   }, \
    { k28,   k29,   k30, k31, k32, k33, k34,        k35,   k36, k37, k38, k39, k40,   k41   }, \
    { k42,   k43,   k44, k45, k46, k47, KC_NO,      KC_NO, k48, k49, k50, k51, k52,   k53   }, \
    { KC_NO, KC_NO, k54, k55, k56, k57, KC_NO,      KC_NO, k58, k59, k60, k61, KC_NO, KC_NO }  \
}

#endif
