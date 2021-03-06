// SPDX-License-Identifier: GPL-3.0-only

#ifndef _BOARD_KBC_H
#define _BOARD_KBC_H

#include <stdbool.h>

#include <ec/kbc.h>

extern bool kbc_first;
extern bool kbc_second;
extern uint8_t kbc_leds;

void kbc_init(void);
bool kbc_scancode(struct Kbc * kbc, uint16_t key, bool pressed);
void kbc_event(struct Kbc * kbc);

#endif // _BOARD_KBC_H
