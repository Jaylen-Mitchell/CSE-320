#include <stdlib.h>
#include <string.h>
#include "binarymath.h"
#include <stdio.h> 


/**
 * Increment a BINARY_SIZE binary number expressed as a 
 * character string.
 * @param number The number we are passed
 * @returns Incremented version of the number
 */
char *inc(const char *number)
{
    char * temp = (char*) calloc(strlen(number)+1, sizeof(char));
    strncpy(temp, number, strlen(number)+1); 
    for (unsigned i = strlen(number)-1; i>=0; i-- )
    {
        if(temp[i] == '1')
        {
          temp[i] = '0';
        }
        else if(temp[i] == '0')
        {   temp[i] = '1';
            break;
        }
    }
    return temp;
}


/**
 * Negate a BINARY_SIZE binary number expressed as a character string
 * @param number The number we are passed
 * @returns Incremented version of the number
 */
char *negate(const char *number)
{
    char * temp = (char*) calloc(strlen(number)+1, sizeof(char));
    strncpy(temp, number, strlen(number)+1); 
    for (unsigned i =0;  i<=strlen(number); i++ )
    {
        if(temp[i] == '1')
        {
          temp[i] = '0';
        }
        else if(temp[i] == '0')
        {  
          temp[i] = '1';
        }
    }
    char * result = inc(temp);
    free(temp); 
    return result;
}

/**
 * Add two BINARY_SIZE binary numbers expressed as
 * a character string. 
 * @param a First number to add
 * @param b Second number to add
 * @return a + b
 */
char *add(const char *a, const char *b)
{
    int carry =0;
    int length = strlen(a);
    char *target = (char*) calloc((length+1), sizeof(char));
    char result;

    for(int i = length-1; i>= 0; i--)
    {
      int a2 = a[i] - '0';
      int b2 = b[i] - '0';
      carry = (a2)+(b2) +(carry);
      result = (carry % 2) + '0';
      carry = (carry) / 2;
      target[i] = result;
    }

    return target;
}

/**
 * Subtract two BINARY_SIZE binary numbers expressed as
 * a character string.
 * @param a First number
 * @param b Second number 
 * @return a - b
 */
char *sub(const char *a, const char *b)
{
    char * inverse = negate(b);
    char * result =  add(a,inverse);
    free(inverse);
    return result;
}

