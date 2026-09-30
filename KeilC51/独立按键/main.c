#include<REG52.H>

typedef unsigned char u8;
typedef unsigned int u16;

sbit KEY1=P3^0;
sbit KEY2=P3^1;
sbit KEY3=P3^2;
sbit KEY4=P3^3;

sbit LED1=P2^0;
sbit LED2=P2^1;
sbit LED3=P2^2;
sbit LED4=P2^3;

#define KEY1_PRESS 1
#define KEY2_PRESS 2
#define KEY3_PRESS 3
#define KEY4_PRESS 4
#define KEY_UNPRESS 0



void delay_10us(u16 ten_us)
{
    while(ten_us--);
}

u8 key_scan(u8 mode)
{   
    if (KEY1==0||KEY2==0||KEY3==0||KEY4==0)
    {
        delay_10us(1000);
        if (KEY1==0)
        {
            LED1=1;
            return(KEY1_PRESS);
        }
        else if (KEY2==0)
        {
            LED2=1;
            return(KEY2_PRESS);
        }
        else if (KEY3==0)
        {
            LED3=1;
            return(KEY3_PRESS);
        }
        else if (KEY4==0)
        {
            LED4=1;
            return(KEY4_PRESS);
        }
    }
    return(KEY_UNPRESS);
}
void main()
{
    while(1)
    {


    }

}