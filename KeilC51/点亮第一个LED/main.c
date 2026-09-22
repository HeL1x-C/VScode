#include"REG51.H"
#include"stdint.h"

sbit led1 = P2^0; // Define led1 as the first bit of port 2
sbit led2 = P2^1; // Define led2 as the second bit of port 2
sbit led3 = P2^2; // Define led3 as the third bit of port 2
sbit led4 = P2^3; // Define led4 as the fourth bit of port 2
sbit led5 = P2^4; // Define led5 as the fifth bit of port 2
sbit led6 = P2^5; // Define led6 as the sixth bit of port 2
sbit led7 = P2^6; // Define led7 as the seventh bit of port 2

//typedef unsigned char u8;
//typedef unsigned int u16;    原写法


typedef uint8_t u8;
typedef uint16_t u16;    //加入头文件stdint.h以后的写法


void delay10ms(u16 ten_us)
{
    while(ten_us--);
}

void main()
{
    while(1)
    {
        led1 = 0; // Turn on led1
        led2 = 0; // Turn on led2
        led3 = 0; // Turn on led3
        led4 = 0; // Turn on led4
        led5 = 0; // Turn on led5

    }

    
}