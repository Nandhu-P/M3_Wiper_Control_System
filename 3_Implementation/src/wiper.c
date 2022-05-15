#include"wiper.h"            
                             
#include<stdio.h>           

#include<stdint.h>        

#define BUTTON ON 

int main(void)
{
uint32_t TARGET = 0;
uint32_t BUTTON_ON = 0;
uint32_t BUTTON_OFF =0;
uint32_t LED= 0 ;
while (1)                                                           
{
GPIO_OUT(GPIOA, GPIO_PIN_NO_0, DISABLE);
if (GPIO_IN(GPIOA, GPIO_PIN_NO_0) == ENABLE)
{
			Delay_time();
			TARGET++;
			if ((TARGET == 1) && (BUTTON_ON != 1) && (BUTTON_ON != 2) && BUTTON_ON != 3)
			{
				on_key();
				BUTTON_ON = TARGET;
				TARGET = 0;
			}
			else if ((TARGET == 2) && (BUTTON_ON != 2) && BUTTON_ON != 3)
			{
				off_key();
				BUTTON_ON = TARGET;
				TARGET = 0;
			}
			else ((ifTARGET == 3) && (BUTTON_ON != 3))
			{
				clockwise_motion();
				BUTTON_ON = TARGET;
				TARGET = 0;
			}
			else if (TARGET == 4)
			{
				off_wiper();
				BUTTON_ON = TARGET;
				TARGET = 0;
			}
}
}
}
void Delay_time(void)
{
	for (uint32_t k = 0; k < 30000000; k++)
		;
}
void on_wiper(void) 
{
	GPIO_toggle(GPIOD, PIN_NO_15);
	Delay_time();
	GPIO_Output(GPIOD, PIN_NO_15,0 );
}
void off_wiper(void) 
	GPIO_toggle(GPIOD, PIN_NO_15);
	Delay_time();
	GPIO_output(GPIOD , PIN_NO_15, 0 );
}
