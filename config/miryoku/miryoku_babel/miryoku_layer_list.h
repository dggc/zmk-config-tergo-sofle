// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "MBase") \
MIRYOKU_X(EXTRA,  "MExtra") \
MIRYOKU_X(TAP,    "MTap") \
MIRYOKU_X(BUTTON, "MButton") \
MIRYOKU_X(NAV,    "MNav") \
MIRYOKU_X(MOUSE,  "MMouse") \
MIRYOKU_X(MEDIA,  "MMedia") \
MIRYOKU_X(NUM,    "MNum") \
MIRYOKU_X(SYM,    "MSym") \
MIRYOKU_X(FUN,    "MFun")

#define U_LAYER_START 3

#define U_BASE   (U_LAYER_START + 0)
#define U_EXTRA  (U_LAYER_START + 1)
#define U_TAP    (U_LAYER_START + 2)
#define U_BUTTON (U_LAYER_START + 3)
#define U_NAV    (U_LAYER_START + 4)
#define U_MOUSE  (U_LAYER_START + 5)
#define U_MEDIA  (U_LAYER_START + 6)
#define U_NUM    (U_LAYER_START + 7)
#define U_SYM    (U_LAYER_START + 8)
#define U_FUN    (U_LAYER_START + 9)

#endif
