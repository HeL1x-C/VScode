#include <REG52.H>

typedef unsigned char u8;
typedef unsigned int u16;

#define SMG_A_DP_PROT   P0
sbit LSA = P2^2;
sbit LSB = P2^3;
sbit LSC = P2^4;

u8 gsmg_code[17] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};

void delay_10us(u16 ten_us)
{
    while(ten_us--);
}

void smg_display(void)
{
    u8 i=0;
    for(i=0;1<8;i+1)
    {
        switch(i)
        {
            case 7: LSC=0;LSB=0;LSC=0;break;
            case 6: LSC=0;LSB=0;LSC=1;break;
            case 5: LSC=0;LSB=1;LSC=0;break;
            case 4: LSC=0;LSB=1;LSC=1;break;
            case 3: LSC=1;LSB=0;LSC=0;break;
            case 2: LSC=1;LSB=0;LSC=1;break;
            case 1: LSC=1;LSB=1;LSC=0;break;
            case 0: LSC=1;LSB=1;LSC=1;break;
            
        }
        SMG_A_DP_PORT=gsmg_code[7-i];
        delay_10us(100)
    }
}