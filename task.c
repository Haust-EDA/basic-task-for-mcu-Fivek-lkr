

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


#include <regx52.h>
void delay1ms(unsigned int xms)
{
    unsignded char  i,j;
while(xms)
{
     i=2;
     j=239;
    do
    {
     while  (--j);
    }while(--i);
    xms--;
  }
}
void main()
{
    while(1)
{       P2=0xFE;
        delay1ms(500);
        P2=0xFD;
        delay1ms(500);
        P2=0xFB;
        delay1ms(500);
        P2=0xF7;
        delay1ms(500);
        P2=0xEF;
        delay1ms(500);
        P2=0xDF;
        delay1ms(500);
        P2=0xBF;
        delay1ms(500);
        P2=0x7F;
        delay1ms(500);
}
}
        
        


