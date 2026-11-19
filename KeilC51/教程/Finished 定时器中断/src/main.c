#include<reg52.h>

typedef unsigned int u16;
typedef unsigned char u8;
////

sbit LED1=P2^0;


//void delay_10us(u16 ten_us)
//{
//    while(ten_us--);
//}
//void delay_1ms(u16 ms)
//{
//    u16 i,j;
//    for(i=ms;i>0;i--)
//    {
//        for(j=110;j>0;j--);
//    }
//}

////延时

void time0_init(void)
{
    TMOD|=0x01;
    TH0=0xFC;
    TL0=0x66;
    ET0=1;
    EA=1;
    TR0=1;
}

void main()
{
    time0_init();
    while(1)
    {

    }
}

void time0() interrupt 1
{
    static u16 i=0;

    TH0=0xFC;
    TL0=0x66;

    i++;
    if (i==1000)
    {
        i=0;
        LED1=!LED1;
    }
}
