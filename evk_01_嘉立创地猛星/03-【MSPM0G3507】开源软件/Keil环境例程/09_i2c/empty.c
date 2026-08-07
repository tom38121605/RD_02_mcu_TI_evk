#include "board.h"
#include <stdio.h>
#include "bsp_sht20.h"

#define T_ADDR     0xf3   // 温度
#define PH_ADDR    0xf5   // 湿度

int main(void)
{
    //开发板初始化
    board_init();
        
    printf("SHT20 Start!!\r\n");
        
    while(1) 
    {
        uint32_t TEMP = SHT20_Read(T_ADDR) * 100;
        uint32_t PH   = SHT20_Read(PH_ADDR) * 100;
                
        printf("温度 = %d.%02d ℃\r\n", TEMP/100,TEMP%100);
        printf("湿度 = %d.%02d %%RH\r\n", PH/100,PH%100);

        printf("\n");
        delay_ms(1000);
    }
}