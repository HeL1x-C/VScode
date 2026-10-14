#include<reg52.h>

typedef unsigned char u8;
typedef unsigned int u16;

sbit RCLK=P3^5;
sbit SER=P3^4;
sbit SCLK=P3^6;

u8 ghc595buf[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80}



void delay10us(u16 ten_us)
{
    while(ten_us--);
}
void delayms(u16 ms)
{
    u16 i,j;
    for(i=ms;i>0;i--)
    {
        for(j=110;j>0,j--)
    }
}


void hc595_write_data(u8 dat)
{
    u8 i=0;

    for(i=0;i<8;i++)
    {
        SER=dat>>7;
        dat<<1;
        RCLK=0;
        delay10us(1);
        RCLK=1;
        delay10us(1);
    }
    RCLK=0;
    delay10us(1);
    RCLK=1
}

void main()
{
    u8 i=0;
    LEDDZ_COL_PORT=0x00;
    while(1)
    {
        hc595_write_data(0x00);
        hc595_write_data(ghc595buf[1]);
        delayms(500)
    }
}