#include "init.h" 

void LEDs_ini(void)
{
	GPIO_InitTypeDef LEDs;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);
	LEDs.GPIO_Pin = GPIO_Pin_13|GPIO_Pin_14;
	LEDs.GPIO_Mode = GPIO_Mode_OUT;
	LEDs.GPIO_Speed = GPIO_Speed_2MHz;
	LEDs.GPIO_OType = GPIO_OType_PP;
	LEDs.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOG, &LEDs);
};

//without lib
/*void LEDs_ini(void)
{
	RCC->AHB1ENR|= RCC_AHB1ENR_GPIOGEN;
	GPIOG->OTYPER=0;
	GPIOG->OSPEEDR=0;
	GPIOG->MODER=0x14000000;
}*/