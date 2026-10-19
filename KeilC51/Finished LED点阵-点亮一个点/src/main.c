#include<reg52.h>

typedef unsigned char u8;
typedef unsigned int u16;

sbit R_CLK=P3^5;
sbit SER=P3^4;
sbit SRCLK=P3^6;

#define LEDDZ_COL_PORT P0

void delay10us(u16 ten_us)
{
    while(ten_us--);
}
void delayms(u16 ms)
{
    u16 i,j;
    for(i=ms;i>0;i--)
    {
        for(j=110;j>0;j--);
    }
}

void hc595_write_data(u8 dat)
{
    u8 i=0;

    for(i=0;i<8;i++)
    {
        SER=dat>>7;
        dat<<=1;
        SRCLK=0;
        delay10us(1);
        SRCLK=1;
        delay10us(1);
    }
    R_CLK=0;
    delay10us(1);
    R_CLK=1;
}

void main()
{
    LEDDZ_COL_PORT=0x7f;
    while(1)
    {
       hc595_write_data(0x80);
    }
    
}