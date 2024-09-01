#include <windows.h>

HANDLE hStdout;

#define TC_NRM "\x1B[0m" /* Normalize color */

#define TC_RED "\x1B[1;31m" /* Red */
#define TC_GRN "\x1B[1;32m" /* Green */
#define TC_YEL "\x1B[1;33m" /* Yellow */
#define TC_BLU "\x1B[1;34m" /* Blue */
#define TC_MAG "\x1B[1;35m" /* Magenta */
#define TC_CYN "\x1B[1;36m" /* Cyan */
#define TC_WHT "\x1B[1;37m" /* White */

#define TC_B_NRM "\x1B[0m"	  /* Normalize Bright Color */
#define TC_B_RED "\x1B[0;31m" /* Bright Red */
#define TC_B_GRN "\x1B[0;32m" /* Bright Green */
#define TC_B_YEL "\x1B[0;33m" /* Bright Yellow */
#define TC_B_BLU "\x1B[0;34m" /* Bright Blue */
#define TC_B_MAG "\x1B[0;35m" /* Bright Magenta */
#define TC_B_CYN "\x1B[0;36m" /* Bright Cyan */
#define TC_B_WHT "\x1B[0;37m" /* Bright White */

#define TC_BG_NRM "\x1B[40m" /* Normalize Background Color */
#define TC_BG_RED "\x1B[41m" /* Background Red */
#define TC_BG_GRN "\x1B[42m" /* Background Green */
#define TC_BG_YEL "\x1B[43m" /* Background Yellow */
#define TC_BG_BLU "\x1B[44m" /* Background Blue */
#define TC_BG_MAG "\x1B[45m" /* Background Magenta*/
#define TC_BG_CYN "\x1B[46m" /* Background Cyan */
#define TC_BG_WHT "\x1B[47m" /* Background White */

#define clear_entire_line() fputs("\x1B[2K")
#define clear_line_till_cursor() fputs("\x1B[1K")
#define clear_line_from_cursor() fputs("\x1B[0K")

void color_id(uint8_t cid, int l)
{
	printf((l) ? "\x1B[38;5;%dm" : "\x1B[48;5;%dm", cid);
}

void set_color(Color color)
{
	if (color.background)
	{
		printf("\x1B[48;2;%d;%d;%dm", color.r, color.g, color.b);
	}
	else
	{
		printf("\x1B[38;2;%d;%d;%dm", color.r, color.g, color.b);
	}
}

//////////////////////////////////////
//   Additional formatting (ANSI)   //
//////////////////////////////////////

#define TC_BLD "\x1B[1m"  /* Bold */
#define TC_DIM "\x1B[2m"  /* Dim */
#define TC_ITAL "\x1B[3m" /* Standout (italics) */
#define TC_UNDR "\x1B[4m" /* Underline */
#define TC_BLNK "\x1B[5m" /* Blink */
#define TC_REV "\x1B[7m"  /* Reverse */
#define TC_INV "\x1B[8m"  /* Invisible */

#define echo_off()
#define echo_on()
#define canon_off()
#define canon_on()

void get_cursor(int *X, int *Y)
{
	echo_off();
	canon_off();
	printf("\033[6n");
	scanf("\033[%d;%dR", X, Y);
}
void gotoxy(int x, int y)
{
	printf("\033[%d;%df", y+1, x+1);
}
void move_cursor(int X, int Y)
{
	if (X > 0)
	{
		printf("\033[%dC", X);
	}
	else if (X < 0)
	{
		printf("\033[%dD", (X * -1));
	}

	if (Y > 0)
	{
		printf("\033[%dB", Y);
	}
	else if (Y < 0)
	{
		printf("\033[%dA", (Y * -1));
	}
}

#define clear_screen() fputs("\x1B[2J", stdout)
#define clear_from_top_to_cursor() fputs("\x1B[1J", stdout)
#define clear_from_cursor_to_bottom() fputs("\x1B[0J", stdout)

void clear_partial(int x, int y, int width, int height)
{
	char *buf = calloc(width + 1, sizeof(char));
	memset(buf, (char) ' ', width);
	for (int i = 0; i < height; i++)
	{
		gotoxy(x, y + i);
		fwrite(buf, width, sizeof(char), stdout);
	}
	gotoxy(x, y);
	free(buf);
}

void get_cols_rows(size_t *cols, size_t *rows)
{
	if (hStdout == INVALID_HANDLE_VALUE)
	{
		return;
	}
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (!GetConsoleScreenBufferInfo(hStdout, &csbi))
	{
		return;
	}
	*cols = (size_t) csbi.srWindow.Right - csbi.srWindow.Left + 1;
	*rows = (size_t) csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

int alternate_buffer(bool enabled)
{
	fputs(enabled ? "\033[?1049h" : "\033[?1049l", stdout);
	return enabled;
}