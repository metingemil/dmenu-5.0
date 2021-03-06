/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int center_width_override = -1;		/* do not compute center width, just use this value */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
				  "Liberation Mono:pixelsize=12:antialias=true:autohint=true"
				, "JoyPixels:pixelsize=12:antialias=true:autohint=true"
 				//, "Noto Color Emoji:pixelsize=10:antialias=true:autohint=true"
				};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
