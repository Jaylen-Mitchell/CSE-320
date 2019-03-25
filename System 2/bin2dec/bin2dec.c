#include "bin2dec.h"

/**
 * Convert a binary representation of a 
 * number to an unsigned integer. 
 * 
 * For this function, the values T and F represent 
 * true (1) and false (0). So, the string:
 * 
 * TTFT is equal to 1101 binary, which is equal to 13.
 *
 * Unexpected characters are ignored. Only 1's and 0's are
 * considered to be valid. Stop converting when you get
 * to a space character or the end of the string. The 
 * representation is case-insensitive (both T/F and t/f 
 * are valid true and false values).
 *
 * 'aTFcT TT' should convert to 5
 * 'ftft' should convert to 5
 *
 * @param binary Binary number as a string of 'T's and 'F's. 
 * @returns unsigned int result
 */
#include <stdio.h>

unsigned int bin2dec(const char *binary)
{
   unsigned int value = 0;
  // unsigned int pos =0;   
  for( ; *binary; binary++)
  {
     if(*binary == 'T' ||  *binary == 't')
      {
      value = value * 2 + 1;
      }
     else if( *binary == 'F' || *binary == 'f')
      {
        value *=2;
      }
     else if(*binary == ' ')
     {
      break;
     }
       
  }
   printf("%u\n", value);
   return value;
}
