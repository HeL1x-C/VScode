#include<REG52.H>
//#include<stdint.h>

sbit led1 = P2^0;
sbit led2 = P2^1;
sbit led3 = P2^2;
sbit led4 = P2^3;
sbit led5 = P2^4;
sbit led6 = P2^5;
sbit led7 = P2^6;

typedef unsigned char u8;
typedef unsigned int u16;    //原写法


//typedef uint8_t u8;
//typedef uint16_t u16;    //加入头文件stdint.h以后的写法,但是很遗憾烧写过程中发现C51不支持c99语法


void delay10ms(u16 ten_us)
{
    while(ten_us--);
}

void main()
{
    while(1)
    {
        led1 = 0;
        led2 = 0;
        led3 = 0;
        led4 = 0;
        led5 = 0;
        led6 = 0;
        led7 = 0;
    }

    
}