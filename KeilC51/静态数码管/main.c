#include<REG52.H>

typedef unsigned char u8;
typedef unsigned int u16;

#define SMG_A_DP_PORT   P0

u8 gsmgcode[17] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07,
                        0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};

void main()
{
    SMG_A_DP_PORT = gsmgcode[0];
    while(1);
    {
        
    }
}