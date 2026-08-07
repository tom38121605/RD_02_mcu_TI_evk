#include "board.h"
#include <stdio.h>
#include "bsp_spi.h"

int main(void)
{
        unsigned char buff[10] = {0};

        //开发板初始化
        board_init();
        
        delay_ms(100);//等待部署
        
        //读取W25Q32的ID
        printf("ID = %X\r\n",W25Q32_readID());
        
        //读取0地址的5个字节数据到buff
        W25Q32_read(buff, 0, 5);
        //串口输出读取的数据
        printf("buff = %s\r\n",buff);
				
        
        //往0地址写入5个字节长度的数据 ABCD
        W25Q32_write("1234", 0, 5);
				delay_ms(100);
        //读取0地址的5个字节数据到buff
        W25Q32_read(buff, 0, 5);

        //串口输出读取的数据
        printf("buff = %s\r\n",buff);

        while (1) 
        {        
                ;
        }
}