#include <stdio.h>

int main()
{
    int BigEndian_int = 0xAABBCCDD;
    int LittleEndian_int = 0x00000000;
   
    LittleEndian_int = ((BigEndian_int>>24)&0xff) | ((BigEndian_int>>8)&0xff00) | ((BigEndian_int<<8)&0xff0000) | ((BigEndian_int<<24)&0xff000000);
 
    printf("Result from Endian conversion = \n");
    printf("Big Endian = %X\n",BigEndian_int);
    printf("Little Endian = %X\n",LittleEndian_int);
}
