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
sbit KEY3=P3^2;
sbit LED1=P2^0;

void exti0_init(void)
{
    IT0=1;
    EX0=1;
    EA=1;
}


void main()
{
    exti0_init();
    while(1)
    {

    }
}

void exti0() interrupt 0
{
    delay_10us(1000);
    if(KEY3==0)
    {
        LED1=!LED1;
    }
}