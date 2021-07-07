#include "stm32l476xx.h"


void GPIO_Clock_Enable(){
		
	RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN;
	RCC->AHB2ENR |= RCC_AHB2ENR_GPIOEEN;
		
	}
	
	void GPIO_Joystick_init(){
		GPIOA->MODER &= ~(3UL<<10);
		GPIOA->PUPDR &= ~(3UL<<10);
	}
		
	void GPIO_Pin_Init(){
		
	GPIOA->MODER &= ~(3UL<<0);//pin PA0 
	GPIOA->MODER |= 1UL<<0; 
	
	GPIOA->MODER &= ~(3UL<<2); //pin PA1
	GPIOA->MODER |= 1UL<<2;
	GPIOA->MODER &= ~(3UL<<4); //pin PA2
	GPIOA->MODER |= 1UL<<4;
	GPIOA->MODER &= ~(3UL<<6); //pin PA3
	GPIOA->MODER |= 1UL<<6;
	///////////////////////////////////////////////////	
	GPIOE->MODER &= ~(3UL<<20);//pin PE10 
	GPIOE->MODER |= 1UL<<20; 
	GPIOE->MODER &= ~(3UL<<22);// pin PE11
	GPIOE->MODER |= 1UL<<22;
	GPIOE->MODER &= ~(3UL<<24);// pin PE12
	GPIOE->MODER |= 1UL<<24;
	GPIOE->MODER &= ~(3UL<<26); //pin PE13
	GPIOE->MODER |= 1UL<<26;
	GPIOE->MODER &= ~(3UL<<28); //pin PE14
	GPIOE->MODER |= 1UL<<28;
	GPIOE->MODER &= ~(3UL<<30); //pin PE15
	GPIOE->MODER |= 1UL<<30;
	////////////////////////////////////////////////////	
	GPIOA->OTYPER &= ~(1<<0); //pin PA0 
	
	GPIOA->OTYPER &= ~(1<<1); //pin PA1
	GPIOA->OTYPER &= ~(1<<2); //pin PA2
	GPIOA->OTYPER &= ~(1<<3); //pin PA3
	//////////////////////////////////////////////////////
	GPIOE->OTYPER &= ~(1<<10); //pin PE10
	GPIOE->OTYPER &= ~(1<<11); //pin PE11
	GPIOE->OTYPER &= ~(1<<12); //pin PE12
	GPIOE->OTYPER &= ~(1<<13); //pin PE13
	GPIOE->OTYPER &= ~(1<<14); //pin PE14
	GPIOE->OTYPER &= ~(1<<15); //pin PE15
	////////////////////////////////////////////////////
	
	
	GPIOA->PUPDR &= ~(3UL<<0);
	
	GPIOA->PUPDR &= ~(3UL<<2);
	GPIOA->PUPDR &= ~(3UL<<4);
	GPIOA->PUPDR &= ~(3UL<<6);
	////////////////////////////////////////////////////
	GPIOE->PUPDR &= ~(3UL<<20);
	GPIOE->PUPDR &= ~(3UL<<22);
	GPIOE->PUPDR &= ~(3UL<<24);
	GPIOE->PUPDR &= ~(3UL<<26);
	GPIOE->PUPDR &= ~(3UL<<28);
	GPIOE->PUPDR &= ~(3UL<<30);
	
	}
	
	void TurnOnLED(int pin){
		if(pin == 0){
			GPIOA->ODR |= 1UL<<pin;
	}else if(pin == 1){
		GPIOA->ODR |= 1UL<<pin;
	}else if(pin == 2){
		GPIOA->ODR |= 1UL<<pin;
	}else if(pin == 3){
		GPIOA->ODR |= 1UL<<pin;
	}else if(pin == 10){
		GPIOE->ODR |= 1UL<<pin;
	}else if(pin == 11){
		GPIOE->ODR |= 1UL<<pin;
	}else if(pin == 12){
		GPIOE->ODR |= 1UL<<pin;
	}else if(pin == 13){
		GPIOE->ODR |= 1UL<<pin;
	}else if(pin == 14){
		GPIOE->ODR |= 1UL<<pin;
	}else if(pin == 15){
		GPIOE->ODR |= 1UL<<pin;
	}
}
	
	void TurnOffLED(int pin){
		if(pin == 0){
			GPIOA->ODR &= ~(1UL<<pin);
	}else if(pin == 1){
		GPIOA->ODR &= ~(1UL<<pin);
	}else if(pin == 2){
		GPIOA->ODR &= ~(1UL<<pin);
	}else if(pin == 3){
		GPIOA->ODR &= ~(1UL<<pin);
	}else if(pin == 10){
		GPIOE->ODR &= ~(1UL<<pin);
	}else if(pin == 11){
		GPIOE->ODR &= ~(1UL<<pin);
	}else if(pin == 12){
		GPIOE->ODR &= ~(1UL<<pin);
	}else if(pin == 13){
		GPIOE->ODR &= ~(1UL<<pin);
	}else if(pin == 14){
		GPIOE->ODR &= ~(1UL<<pin);
	}else if(pin == 15){
		GPIOE->ODR &= ~(1UL<<pin);
	}
}
	void TurnOffAllLEDS(){
		GPIOA->ODR &= ~(1UL<<0);
		GPIOE->ODR &= ~(1UL<<11);
		GPIOA->ODR &= ~(1UL<<1);
		GPIOA->ODR &= ~(1UL<<2);
		GPIOA->ODR &= ~(1UL<<3);
		GPIOE->ODR &= ~(1UL<<10);
		GPIOE->ODR &= ~(1UL<<12);
		GPIOE->ODR &= ~(1UL<<13);
		GPIOE->ODR &= ~(1UL<<14);
		GPIOE->ODR &= ~(1UL<<15);
	}
	
	void TurnOnAllLEDS(){
		GPIOA->ODR |= 1UL<<0;
		GPIOE->ODR |= 1UL<<11;
		GPIOA->ODR |= 1UL<<1;
		GPIOA->ODR |= 1UL<<2;
		GPIOA->ODR |= 1UL<<3;
		GPIOE->ODR |= 1UL<<10;
		GPIOE->ODR |= 1UL<<12;
		GPIOE->ODR |= 1UL<<13;
		GPIOE->ODR |= 1UL<<14;
		GPIOE->ODR |= 1UL<<15;		
	}
	void begin(){
		int i=0,j=0;
		for(j = 3; j>=0; j--){
			for(i = 0; i<=10000; i++){
				TurnOffLED(j);
			}
		}
	}
	void end(){
		int i=0,j=0;
		int ledarray[] = {0,1,2,3,10,11,12,13,14,15};
		for(j = 6; j<=9; j++){
			for(i = 0; i<=4000; i++){
				TurnOffLED(ledarray[j]);
			}
		}
	}	
	////////////////////////////
	int main(void){
	uint32_t input;
	int movefoward = 1;
	int ledarray[] = {0,1,2,3,10,11,12,13,14,15};
	int speed = 150000000;
	int i=0, j=0;
	GPIO_Clock_Enable();
	GPIO_Pin_Init();
	GPIO_Joystick_init();
	input = (GPIOA->IDR & 1UL<<5);
	while(1){ 		
		if(movefoward == 1){	
			for(j = 0; j<=9; j++){		
				for(i = 0; i<=speed; i++){					
						if(input != 0){
							speed -= 500;
						}
						if(speed<=500){
							speed = 10000;
						}
					TurnOnLED(ledarray[j]);
					if(j == 4){
						TurnOffLED(0);
				  }
					if(j == 5){
						TurnOffLED(1);
					}
					if(j == 6){
						TurnOffLED(2);
					}
					if(j == 7){
						TurnOffLED(3);
					}
					if(j == 8){
						TurnOffLED(10);
					}
					if(j == 9){
						TurnOffLED(11);
					
						
						movefoward = 0;
						
					}
			}
				
		}
			end();
		if(movefoward == 0){
			for(j = 9; j>=0; j--){
				
				for(i = 0; i<=speed; i++){
					if(input != 0){
						speed -= 500;
					}
					if(speed<=500){
						speed = 10000;
					}
					TurnOnLED(ledarray[j]);
					if(j == 5){
						TurnOffLED(15);
				  }
					if(j == 4){
						TurnOffLED(14);
					}
					if(j == 3){
						TurnOffLED(13);
					}
					if(j == 2){
						TurnOffLED(12);
					}
					if(j == 1){
						TurnOffLED(11);
					}
					if(j == 0){
						TurnOffLED(10);
						

						movefoward = 1;
					}
			  }				
	    }
		
	   }
	    begin();
   }
	}
	
}

