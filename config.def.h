/*
 * Define ESC sequences to use for scroll events.
 * Use "showkey -a" to figure out favorite key combination.
 *
 * lines is the number of lines scrolled up or down.
 * If lines is negative, it's the fraction of the terminal size.
 */

struct rule rules[] = {
	/* sequence     event        lines */
	{"\033[5;2~",   SCROLL_UP,   -1},	/* [Shift] + [PageUP] */
	{"\033[6;2~",   SCROLL_DOWN, -1},	/* [Shift] + [PageDown] */
	/* mouse binding shadows ^E and ^Y, so it's disabled by default */
	//{"\031",        SCROLL_UP,    1},	/* mouse wheel up */
	//{"\005",        SCROLL_DOWN,  1},	/* mouse wheel Down */
	{"\033\125",    SCROLL_UP,    1},	/* mouse wheel up */
	{"\033\104",    SCROLL_DOWN,  1},	/* mouse wheel Down */
	/* additional bindings */
	{"\033\153",    SCROLL_UP,    1},	/* Alt + k */
	{"\033\152",    SCROLL_DOWN,  1},	/* Alt + j */
	{"\033\165",    SCROLL_UP,    20},	/* Alt + u */
	{"\033\144",    SCROLL_DOWN,  20},	/* Alt + d */
};
