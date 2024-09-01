#ifndef _O_U16TEXT
#define _O_U16TEXT 0x20000
#endif

#define BIT_ESC224 0x80000000
#define BIT_ESC0 0x40000000

#define ALT_BITMASK 0x80000000
#define CTRL_BITMASK 0x40000000
#define SHIFT_BITMASK 0x20000000
#define TILDE_BITMASK 0x10000000

typedef struct InputUTF8
{
  utf8_int32_t utf8char;
  unsigned int flags;
  char equiv[100];
  size_t inputlen;
} InputUTF8;

enum CONTROL_CODES
#ifdef _WIN32 // Win32 codes automatically generated by a script
{
  BS = 0x08,
  ENTER = 0x0d,
  CTRLENTER = 0x0a,
  

  CTRLA = 0x01,
  CTRLB = 0x02,
  CTRLC = 0x03,
  CTRLD = 0x04,
  CTRLE = 0x05,
  CTRLF = 0x06,
  CTRLG = 0x07,
  CTRLH = 0x08,
  CTRLI = 0x09,
  CTRLJ = 0x0a,
  CTRLK = 0x0b,
  CTRLL = 0x0c,
  CTRLM = 0x0d,
  CTRLN = 0x0e,
  CTRLO = 0x0f,
  CTRLP = 0x10,
  CTRLQ = 0x11,
  CTRLR = 0x12,
  CTRLS = 0x13,
  CTRLT = 0x14,
  CTRLU = 0x15,
  CTRLV = 0x16,
  CTRLW = 0x17,
  CTRLX = 0x18,
  CTRLY = 0x19,
  CTRLZ = 0x1a,
  ESC = 0x1b,

  F1 = 0x70,
  F2 = 0x71,
  F3 = 0x72,
  F4 = 0x73,
  F5 = 0x74,
  F6 = 0x75,
  F7 = 0x76,
  F8 = 0x77,
  F9 = 0x78,
  F10 = 0x79,
  F11 = 0x7a,
  F12 = 0x7b,
  UP = 0x26,
  LEFT = 0x25,
  RIGHT = 0x27,
  DOWN = 0x28,
  INSERT = 0x2d,
  HOME = 0x24,
  PGUP = 0x21,
  PGDW = 0x22,
  END = 0x23,
  DEL = 0x2e,
  CTRLF1 = 0x40000070,
  CTRLF2 = 0x40000071,
  CTRLF3 = 0x40000072,
  CTRLF4 = 0x40000073,
  CTRLF5 = 0x40000074,
  CTRLF6 = 0x40000075,
  CTRLF7 = 0x40000076,
  CTRLF8 = 0x40000077,
  CTRLF9 = 0x40000078,
  CTRLF10 = 0x40000079,
  CTRLF11 = 0x4000007a,
  CTRLF12 = 0x4000007b,
  CTRLUP = 0x40000026,
  CTRLLEFT = 0x40000025,
  CTRLRIGHT = 0x40000027,
  CTRLDOWN = 0x40000028,
  CTRLINSERT = 0x4000002d,
  CTRLHOME = 0x40000024,
  CTRLPGUP = 0x40000021,
  CTRLPGDW = 0x40000022,
  CTRLEND = 0x40000023,
  CTRLDEL = 0x4000002e,
  ALTF1 = 0x80000070,
  ALTF2 = 0x80000071,
  ALTF3 = 0x80000072,
  ALTF4 = 0x80000073,
  ALTF5 = 0x80000074,
  ALTF6 = 0x80000075,
  ALTF7 = 0x80000076,
  ALTF8 = 0x80000077,
  ALTF9 = 0x80000078,
  ALTF10 = 0x80000079,
  ALTF11 = 0x8000007a,
  ALTF12 = 0x8000007b,
  ALTUP = 0x80000026,
  ALTLEFT = 0x80000025,
  ALTRIGHT = 0x80000027,
  ALTDOWN = 0x80000028,
  ALTINSERT = 0x8000002d,
  ALTHOME = 0x80000024,
  ALTPGUP = 0x80000021,
  ALTPGDW = 0x80000022,
  ALTEND = 0x80000023,
  ALTDEL = 0x8000002e,
  SHIFTF1 = 0x20000070,
  SHIFTF2 = 0x20000071,
  SHIFTF3 = 0x20000072,
  SHIFTF4 = 0x20000073,
  SHIFTF5 = 0x20000074,
  SHIFTF6 = 0x20000075,
  SHIFTF7 = 0x20000076,
  SHIFTF8 = 0x20000077,
  SHIFTF9 = 0x20000078,
  SHIFTF10 = 0x20000079,
  SHIFTF11 = 0x2000007a,
  SHIFTF12 = 0x2000007b,
  SHIFTUP = 0x20000026,
  SHIFTLEFT = 0x20000025,
  SHIFTRIGHT = 0x20000027,
  SHIFTDOWN = 0x20000028,
  SHIFTINSERT = 0x2000002d,
  SHIFTHOME = 0x20000024,
  SHIFTPGUP = 0x20000021,
  SHIFTPGDW = 0x20000022,
  SHIFTEND = 0x20000023,
  SHIFTDEL = 0x2000002e,
  CTRLALTF1 = 0xc0000070,
  CTRLALTF2 = 0xc0000071,
  CTRLALTF3 = 0xc0000072,
  CTRLALTF4 = 0xc0000073,
  CTRLALTF5 = 0xc0000074,
  CTRLALTF6 = 0xc0000075,
  CTRLALTF7 = 0xc0000076,
  CTRLALTF8 = 0xc0000077,
  CTRLALTF9 = 0xc0000078,
  CTRLALTF10 = 0xc0000079,
  CTRLALTF11 = 0xc000007a,
  CTRLALTF12 = 0xc000007b,
  CTRLALTUP = 0xc0000026,
  CTRLALTLEFT = 0xc0000025,
  CTRLALTRIGHT = 0xc0000027,
  CTRLALTDOWN = 0xc0000028,
  CTRLALTINSERT = 0xc000002d,
  CTRLALTHOME = 0xc0000024,
  CTRLALTPGUP = 0xc0000021,
  CTRLALTPGDW = 0xc0000022,
  CTRLALTEND = 0xc0000023,
  CTRLALTDEL = 0xc000002e,
  CTRLSHIFTF1 = 0x60000070,
  CTRLSHIFTF2 = 0x60000071,
  CTRLSHIFTF3 = 0x60000072,
  CTRLSHIFTF4 = 0x60000073,
  CTRLSHIFTF5 = 0x60000074,
  CTRLSHIFTF6 = 0x60000075,
  CTRLSHIFTF7 = 0x60000076,
  CTRLSHIFTF8 = 0x60000077,
  CTRLSHIFTF9 = 0x60000078,
  CTRLSHIFTF10 = 0x60000079,
  CTRLSHIFTF11 = 0x6000007a,
  CTRLSHIFTF12 = 0x6000007b,
  CTRLSHIFTUP = 0x60000026,
  CTRLSHIFTLEFT = 0x60000025,
  CTRLSHIFTRIGHT = 0x60000027,
  CTRLSHIFTDOWN = 0x60000028,
  CTRLSHIFTINSERT = 0x6000002d,
  CTRLSHIFTHOME = 0x60000024,
  CTRLSHIFTPGUP = 0x60000021,
  CTRLSHIFTPGDW = 0x60000022,
  CTRLSHIFTEND = 0x60000023,
  CTRLSHIFTDEL = 0x6000002e,
  ALTSHIFTF1 = 0xa0000070,
  ALTSHIFTF2 = 0xa0000071,
  ALTSHIFTF3 = 0xa0000072,
  ALTSHIFTF4 = 0xa0000073,
  ALTSHIFTF5 = 0xa0000074,
  ALTSHIFTF6 = 0xa0000075,
  ALTSHIFTF7 = 0xa0000076,
  ALTSHIFTF8 = 0xa0000077,
  ALTSHIFTF9 = 0xa0000078,
  ALTSHIFTF10 = 0xa0000079,
  ALTSHIFTF11 = 0xa000007a,
  ALTSHIFTF12 = 0xa000007b,
  ALTSHIFTUP = 0xa0000026,
  ALTSHIFTLEFT = 0xa0000025,
  ALTSHIFTRIGHT = 0xa0000027,
  ALTSHIFTDOWN = 0xa0000028,
  ALTSHIFTINSERT = 0xa000002d,
  ALTSHIFTHOME = 0xa0000024,
  ALTSHIFTPGUP = 0xa0000021,
  ALTSHIFTPGDW = 0xa0000022,
  ALTSHIFTEND = 0xa0000023,
  ALTSHIFTDEL = 0xa000002e,
  CTRLALTSHIFTF1 = 0xe0000070,
  CTRLALTSHIFTF2 = 0xe0000071,
  CTRLALTSHIFTF3 = 0xe0000072,
  CTRLALTSHIFTF4 = 0xe0000073,
  CTRLALTSHIFTF5 = 0xe0000074,
  CTRLALTSHIFTF6 = 0xe0000075,
  CTRLALTSHIFTF7 = 0xe0000076,
  CTRLALTSHIFTF8 = 0xe0000077,
  CTRLALTSHIFTF9 = 0xe0000078,
  CTRLALTSHIFTF10 = 0xe0000079,
  CTRLALTSHIFTF11 = 0xe000007a,
  CTRLALTSHIFTF12 = 0xe000007b,
  CTRLALTSHIFTUP = 0xe0000026,
  CTRLALTSHIFTLEFT = 0xe0000025,
  CTRLALTSHIFTRIGHT = 0xe0000027,
  CTRLALTSHIFTDOWN = 0xe0000028,
  CTRLALTSHIFTINSERT = 0xe000002d,
  CTRLALTSHIFTHOME = 0xe0000024,
  CTRLALTSHIFTPGUP = 0xe0000021,
  CTRLALTSHIFTPGDW = 0xe0000022,
  CTRLALTSHIFTEND = 0xe0000023,
  CTRLALTSHIFTDEL = 0xe000002e
};
#else
{
  BS = 127,
  TAB = 9,
  CTRLENTER = 10,
  ENTER = 13,
  CTRLBS = 8,

  ESC = 27,

  /*
   Used an algorithm in order to encode and fit up to 7 characters into a single int32_t
   Assuming characters are all lower than 0x80h (127d)

   The algorithm is works by shifting up to 4 characters 7 bits to the left, using 28 of 32 available bits.

   The last 3 bytes are guaranteed to be boolean data so each character fits in a single bit.
   The big endian bit is used to ensure that it is a control keybind starting with ESC.


   This way we can place 7 characters into 4 bytes, or an int32_t.

  */

  LEFT = 0xc0002200,
  UP = 0xc0002080,
  DOWN = 0xc0002100,
  RIGHT = 0xc0002180,

  INS = 0xc01f9900,
  DEL = 0xc01f9980,

  HOME = 0xc0002400,
  END = 0xc0002300,

  PGUP = 0xc01f9a80,
  PGDW = 0xc01f9b00,

  SHIFTTAB = 0xc0002d00,

  CTRLA = 1,
  CTRLB = 2,
  CTRLC = 3,
  CTRLD = 4,
  CTRLE = 5,
  CTRLF = 6,
  CTRLG = 7,
  CTRLH = 8,
  CTRLI = 9,
  CTRLJ = 10,
  CTRLK = 11,
  CTRLL = 12,
  CTRLM = 13,
  CTRLN = 14,
  CTRLO = 15,
  CTRLP = 16,
  CTRLQ = 17,
  CTRLR = 18,
  CTRLS = 19,
  CTRLT = 20,
  CTRLU = 21,
  CTRLV = 22,
  CTRLW = 23,
  CTRLX = 24,
  CTRLY = 25,
  CTRLZ = 26,

  /* Different naming is used between F1 and F4 (termios-related things) */
  F1 = 0xa0002800,
  F2 = 0xa0002880,
  F3 = 0xa0002900,
  F4 = 0xa0002980,

  F5 = 0xcfcd5880,
  F6 = 0xcfcdd880,
  F7 = 0xcfce1880,
  F8 = 0xcfce5880,
  F9 = 0xcfcc1900,
  F10 = 0xcfcc5900,
  F11 = 0xcfccd900,
  F12 = 0xcfcd1900,

  SHIFTF1 = 0xc64ed880,
  SHIFTF2 = 0xd64ed880,
  SHIFTF3 = 0xe64ed880,
  SHIFTF4 = 0xf64ed880,

  SHIFTF5 = 0xf76d5c70,
  SHIFTF6 = 0xf76ddc70,
  SHIFTF7 = 0xf76e1c70,
  SHIFTF8 = 0xf76e5c70,
  SHIFTF9 = 0xf76c1cf0,
  SHIFTF10 = 0xf76c5cf0,
  SHIFTF11 = 0xf76cdcf0,
  SHIFTF12 = 0xf76d1cf0,

  CTRLF1 = 0xc6aed880,
  CTRLF2 = 0xd6aed880,
  CTRLF3 = 0xe6aed880,
  CTRLF4 = 0xf6aed880,
  CTRLF5 = 0xd76d5c70,
  CTRLF6 = 0xd76ddc70,
  CTRLF7 = 0xd76e1c70,
  CTRLF8 = 0xd76e5c70,
  CTRLF9 = 0xd76c1cf0,
  CTRLF10 = 0xd76c5cf0,
  CTRLF11 = 0xd76cdcf0,
  CTRLF12 = 0xd76d1cf0,

  CTRLINS = 0xe6aed900,
  CTRLDEL = 0xe6aed980,
  CTRLHOME = 0xc6aed880,
  CTRLEND = 0xe6aed880,
  CTRLPGUP = 0xe6aeda80,
  CTRLPGDW = 0xe6aedb00,

  CTRLLEFT = 0xc6aed880,
  CTRLUP = 0xd6aed880,
  CTRLDOWN = 0xe6aed880,
  CTRLRIGHT = 0xf6aed880,

  SHIFTLEFT = 0xc64ed880,
  SHIFTUP = 0xd64ed880,
  SHIFTDOWN = 0xe64ed880,
  SHIFTRIGHT = 0xf64ed880,

  CTRLSHIFTLEFT = 0xc6ced880,
  CTRLSHIFTUP = 0xd6ced880,
  CTRLSHIFTDOWN = 0xe6ced880,
  CTRLSHIFTRIGHT = 0xf6ced880,

  ALTF1 = 0xc66ed880,
  ALTF2 = 0xd66ed880,
  ALTF3 = 0xe66ed880,
  ALTF4 = 0xf66ed880,
  ALTF5 = 0xf76d5c70,
  ALTF6 = 0xf76ddc70,
  ALTF7 = 0xf76e1c70,
  ALTF8 = 0xf76e5c70,
  ALTF9 = 0xf76c1cf0,
  ALTF10 = 0xf76c5cf0,
  ALTF11 = 0xf76cdcf0,
  ALTF12 = 0xf76d1cf0,

  CTRLALTF1 = 0xc6eed880,
  CTRLALTF2 = 0xd6eed880,
  CTRLALTF3 = 0xe6eed880,
  CTRLALTF4 = 0xf6eed880,
  CTRLALTF5 = 0xf76d5c70,
  CTRLALTF6 = 0xf76ddc70,
  CTRLALTF7 = 0xf76e1c70,
  CTRLALTF8 = 0xf76e5c70,
  CTRLALTF9 = 0xf76c1cf0,
  CTRLALTF10 = 0xf76c5cf0,
  CTRLALTF11 = 0xf76cdcf0,
  CTRLALTF12 = 0xf76d1cf0,

  CTRLSHIFTF1 = 0xc6ced880,
  CTRLSHIFTF2 = 0xd6ced880,
  CTRLSHIFTF3 = 0xe6ced880,
  CTRLSHIFTF4 = 0xf6ced880,
  CTRLSHIFTF5 = 0xf76d5c70,
  CTRLSHIFTF6 = 0xf76ddc70,
  CTRLSHIFTF7 = 0xf76e1c70,
  CTRLSHIFTF8 = 0xf76e5c70,
  CTRLSHIFTF9 = 0xf76c1cf0,
  CTRLSHIFTF10 = 0xf76c5cf0,
  CTRLSHIFTF11 = 0xf76cdcf0,
  CTRLSHIFTF12 = 0xf76d1cf0,

  ALTINS = 0xe66ed900,
  ALTHOME = 0xc66ed880,
  ALTPGUP = 0xe66eda80,
  ALTDEL = 0xe66ed980,
  ALTEND = 0xe66ed880,
  ALTPGDW = 0xe66edb00,

  ALTA = 0xa0184d80,
  ALTB = 0xa0188d80,
  ALTC = 0xa018cd80,
  ALTD = 0xa0190d80,
  ALTE = 0xa0194d80,
  ALTF = 0xa0198d80,
  ALTG = 0xa019cd80,
  ALTH = 0xa01a0d80,
  ALTI = 0xa01a4d80,
  ALTJ = 0xa01a8d80,
  ALTK = 0xa01acd80,
  ALTL = 0xa01b0d80,
  ALTM = 0xa01b4d80,
  ALTN = 0xa01b8d80,
  ALTO = 0xa01bcd80,
  ALTP = 0xa01c0d80,
  ALTQ = 0xa01c4d80,
  ALTR = 0xa01c8d80,
  ALTS = 0xa01ccd80,
  ALTT = 0xa01d0d80,
  ALTU = 0xa01d4d80,
  ALTV = 0xa01d8d80,
  ALTW = 0xa01dcd80,
  ALTX = 0xa01e0d80,
  ALTY = 0xa01e4d80,
  ALTZ = 0xa01e8d80,

  CTRLALTA = 0xa0004d80,
  CTRLALTB = 0xa0008d80,
  CTRLALTC = 0xa000cd80,
  CTRLALTD = 0xa0010d80,
  CTRLALTE = 0xa0014d80,
  CTRLALTF = 0xa0018d80,
  CTRLALTG = 0xa001cd80,
  CTRLALTH = 0xa0020d80,
  CTRLALTI = 0xa0024d80,
  CTRLALTJ = 0xa0028d80,
  CTRLALTK = 0xa002cd80,
  CTRLALTL = 0xa0030d80,
  CTRLALTM = 0xa0034d80,
  CTRLALTN = 0xa0038d80,
  CTRLALTO = 0xa003cd80,
  CTRLALTP = 0xa0040d80,
  CTRLALTQ = 0xa0044d80,
  CTRLALTR = 0xa0048d80,
  CTRLALTT = 0xa004cd80,
  CTRLALTS = 0xa0050d80,
  CTRLALTU = 0xa0054d80,
  CTRLALTV = 0xa0058d80,
  CTRLALTW = 0xa005cd80,
  CTRLALTX = 0xa0060d80,
  CTRLALTY = 0xa0064d80,
  CTRLALTZ = 0xa0068d80,
};
#endif

#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#include "win32/input_win32.c"
#else
#include "linux/input_linux.c"
#endif