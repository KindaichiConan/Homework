#include <stdio.h>
#include "..\Headers\Convert.h"
void dec_to_bin(int value)
{
    int bin[8], i = 0;
    for(i=0;i<8;i++)
    {
    	if(value)
    	{
    		bin[i] = value%2;
			value /= 2;	
    	}
    	else bin[i] = 0;
    }
    printf("\nGia tri nhi phan la: 0b");
    for(i=7;i>=0;i--) printf("%d", bin[i]);
}

void dec_to_hex(int value)
{
    char hex[4];
    int i=0, digit;
    
    for(i=0;i<4;i++)
    {
    	if(value)
		{
			digit = value%16;
			if(digit<10) hex[i] = digit + 48;
			else hex[i] = digit + 55;
			value /= 16;
		}
		else hex[i] = 48;	
    }
    printf("\nGia tri thap luc phan la: 0x");
    for(i=3;i>=0;i--) printf("%c", hex[i]);
}