#include "reg52.h"

typedef unsigned char u8;
typedef unsigned int u16;

sbit BEEP = P2^5;


#define LED_PORT P2

void delay_10us(u16 ten_us)
{
    while(ten_us--);
}

void main()
{
    u16 i=2000;

    while(1)
    {
        while(i--)
        {
            BEEP=!BEEP;
            delay_10us(100);
//            BEEP=0;
//            delay_10us(50);
//            BEEP=1;
//            delay_10us(150);
        }
        i = 0;
        BEEP=0;
        
    }
}