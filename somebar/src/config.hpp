// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;
constexpr int paddingX = 8;
constexpr int paddingY = 1;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "Iosevka Nerd Font 11";

constexpr ColorScheme colorInactive = {Color(0x4c, 0x4f, 0x69), Color(0xef, 0xf1, 0xf5)};
constexpr ColorScheme colorActive = {Color(0x72, 0x87, 0xfd), Color(0xef, 0xf1, 0xf5)};
constexpr const char* termcmd[] = {"foot", nullptr};

constexpr Button buttons[] = {
	{ ClkTagBar,       BTN_LEFT,   view,       {0} },
	{ ClkTagBar,       BTN_RIGHT,  tag,        {0} },
	{ ClkTagBar,       BTN_MIDDLE, toggletag,  {0} },
	{ ClkLayoutSymbol, BTN_LEFT,   setlayout,  {.ui = 0} },
	{ ClkLayoutSymbol, BTN_RIGHT,  setlayout,  {.ui = 2} },
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
