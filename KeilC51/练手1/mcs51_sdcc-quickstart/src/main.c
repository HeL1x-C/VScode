#include <reg52.h>
#include <intrins.h>


typedef unsigned char u8;
typedef unsigned int u16;

#define LED1_PORT   P2

sbit led1 = P2^0;
sbit led2 = P2^1;
sbit led3 = P2^2;
sbit led4 = P2^3;
sbit led5 = P2^4;
sbit led6 = P2^5;
sbit led7 = P2^6;
sbit led8 = P2^7;

sbit key1 = P3^0;
sbit key2 = P3^1;
sbit key3 = P3^2;
sbit key4 = P3^3;

void delay10us(u16 ten_us);
{
    while(ten_us--);
}




void main()
{
    while(1)
    {
        if
    }
}
