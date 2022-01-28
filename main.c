#include "stm32f10x.h"


int main(void)
{
	/************** STEPS TO FOLLOW *****************
1. Enable SPI clock
2. Configure the Control Register 1
3. Configure the CR2
************************************************/

// ENABLE SPI CLOCK
	RCC->CR			 |=  (1 << 0);  //HSI ENABLE
	RCC->APB1ENR |=  (1 << 14); //RCC_APB1ENR_SPI2EN 	
//CONFIGURE THE CONTROL REGISTER 1
//SPI2->CR1    &= ~(1 << 0);  //SPI2 CPHA LOW BUT NESSESARY, ITS DEFAULT LOW
//SPI2->CR1		 &= ~(1 << 1);  //SPI2 CPOL LOw BUT NESSESARY, ITS DEFAULT LOW	
//SPI2->CR1		 &= ~(1 << 2);  //SPI2 MSTR LOw BUT NESSESARY, ITS DEFAULT LOW		
	SPI2->CR1    |=  (1 << 5);  //BAUD RATE DIV32
	SPI1->CR1    |=  (1 << 6);  //SPI ENABLE
//SPI1->CR1    &= ~(1 << 11)  //SPI2  Data frame format BUT NESSESARY, ITS DEFAULT 8 BIT
//CONFIGURE THE CR2

	
	//deneme ekleme
	while (0);
	
	return 0; 
}
