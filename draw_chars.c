#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    for (char col = 0; col < 16; col++) {
      unsigned short colMask = 1 << (15-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
/* 
   expr1 ? expr2 : expr3
   expr1 is evaluated first, if it is non-zero (true), then, expr 2 is evaluated
   else, expr3 will be evaluated
 */

// My work...

void print_char_8x12(char c)
{
  c -= 0x20;
  for (char row = 0; row < 8; row++) {
    unsigned short rowBits = font_8x12[c][row];
    for (char col = 0; col < 12; col++) {
      unsigned short colMask = 1 << (11-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
} 
