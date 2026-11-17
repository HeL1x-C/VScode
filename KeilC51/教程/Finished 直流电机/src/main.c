#include<reg52.h>

typedef unsigned int u16;
typedef unsigned char u8;

sbit DC_Motor=P1^0;

#define DC_MOTOR_RUN_TIME   5000

void delay_10us(u16 ten_us)
{
    while(ten_us);
}
void delay_1ms(u16 ms)
{
    u16 i,j;
    for(i=ms;i>0;i--)
    {
        for(j=110;j>0;j--);
    }
}




void main()
{
    DC_Motor=1;
    delay_1ms(DC_MOTOR_RUN_TIME);
    DC_Motor=0;    
    while(1)
    {
        
    }
}