/*
 *   Author:  Michael McGuire
 *  Purpose:  c-code that reverses the order of a string of bytes, a common requirement in serial communication.  This is due to differing architectures in microchips.
 * Language:  c
 */
 
// headers
#include <stdio.h>


int main()
{
	// defining local variables
    int BigEndian_int = 0xAABBCCDD;
    int LittleEndian_int = 0x00000000;
   
   	// using shift registers and bitwise operators, we shift, single out the corresponding bit, and reallign them to our new variable in reverse order.  This example is a little tricky, as it is using bitwise left and bitwise right, which is not recommended for production code {KISS}  
    LittleEndian_int = ((BigEndian_int>>24)&0xff) | ((BigEndian_int>>8)&0xff00) | ((BigEndian_int<<8)&0xff0000) | ((BigEndian_int<<24)&0xff000000);
 
 	// sending results to the console using printf (stdout iostream)
    printf("Result from Endian conversion\n\n");
    printf("Big Endian = %X\n",BigEndian_int);
    printf("Little Endian = %X\n\n\n",LittleEndian_int);
    
    return 0;
}
