#include<reg52.h>

typedef unsigned char u8;
typedef unsigned int u16;

sbit RCLK=P3^5;
sbit SER=P3^4;
sbit SCLK=P3^6;

void delay10us(u16 ten_us)
{
    while(ten_us--);
}



void main()
{
    while(1)
    {

    }
}