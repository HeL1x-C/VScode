#include<reg52.h>

typedef unsigned int u16;
typedef unsigned char u8;
////
void delay_10us(u16 ten_us)
{
    while(ten_us--);
}
void delay_1ms(u16 ms)
{
    u16 i,j;
    for(i=ms;i>0;i--)
    {
        for(j=110;j>0;j--);
    }
}
////延时

void uart_init(u8 baud)
{
    TMOD|=0x20;
    SCON=0x50;
    PCON=0x80;
    TH1=baud;
    TL1=baud;
    ES=1;
    EA=1;
    TR1=1;
}


void main()
{
    uart_init(0xFA);
    while(1)
    {

    }
}

void uart() interrupt 4
{
    u8 rec_data;

    RI=0;
    rec_data=SBUF;
    SBUF=rec_data;
    while(!TI);
    TI=0;
}