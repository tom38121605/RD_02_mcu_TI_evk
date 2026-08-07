#ifndef _BSP_SPI_H__
#define _BSP_SPI_H__

#include "board.h"

//CS引脚的输出控制 
//x=0时输出低电平
//x=1时输出高电平
#define SPI_CS(x)  ( (x) ? DL_GPIO_setPins(CS_PORT,CS_PIN_PIN) : DL_GPIO_clearPins(CS_PORT,CS_PIN_PIN) )

uint16_t W25Q32_readID(void);//读取W25Q64的ID
void W25Q32_write(uint8_t* buffer, uint32_t addr, uint16_t numbyte);      //W25Q32写数据
void W25Q32_read(uint8_t* buffer,uint32_t read_addr,uint16_t read_length);//W25Q32读数据
#endif
