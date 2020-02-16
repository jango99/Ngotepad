#pragma once

#include "quantum.h"

#define LAYOUT_default( \
  KA1, KA2, \
	KB1, KB2, \
	KC1, KC2, KC3, \
	KD1, KD2, KD3 \
) \
{ \
  { KA1, KA2 }, \
  { KB1, KB2 }, \
  { KC1, KC2, KC3 }, \
  { KD1, KD2, KD3 } \
}
