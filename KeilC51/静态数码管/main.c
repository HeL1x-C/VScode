#include<REG52.H>

typedef unsigned char u8;
typedef unsigned int u16;

sbit BEEP = P2^5;

void delay_10us(u16 ten_us)
{
    while(ten_us--);
}


void main()
{
    u16 i=2000;
    while(1)
    {
        BEEP = !BEEP;
        delay_10us(500);
//        BEEP = 1;
 //       delay_10us(50000);
    }

}
