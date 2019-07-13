#include "main.h" 

void Delay(volatile uint32_t nCount){
	while(nCount--){}
}

int main(void)  
{ 
	LEDs_ini();
  while(1) 
  { 
		/*LED_ON();
			Delay(5000000);
			LED_OFF();
			Delay(5000000);			*/
		CHANGE_LED_14();
		CHANGE_LED_13(); 
		Delay(2500000); 
    } 
} 