#include<REG52.H>

typedef unsigned char u8;
typedef unsigned int u16;

sbit LED1 = P2^0;

void delay_10us(u16 ten_us)
{
    while(ten_us--);
}


void main()
{
    while(1)
    {
        delay_10us(50000);
    }

}
