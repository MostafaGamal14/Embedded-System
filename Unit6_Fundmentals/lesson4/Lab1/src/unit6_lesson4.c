#include "stdio.h"
#include "stdint.h"

typedef volatile unsigned int vuint_32 ;

#define RCC_Base       0x40021000
#define GPIOA_Base     0x40010800
#define RCC_APB2ENR  *(vuint_32*)(RCC_Base+0x18)
#define GPIOA_ODR    *(vuint_32*)(GPIOA_Base+0x0c)
#define GPIOA_CRH    *(vuint_32*)(GPIOA_Base+0x04)

#define EXTI_Base      0x40010400
#define EXTI_IMR     *(vuint_32*)(EXTI_Base+0x00)
#define EXTI_RTSR    *(vuint_32*)(EXTI_Base+0x08)
#define EXTI_PR      *(vuint_32*)(EXTI_Base+0x14)



void clock_init(void){
	RCC_APB2ENR |=(1<<2);
}
void GPIO_init(void){

	  GPIOA_CRH &=~0xff0fffff;
	  GPIOA_CRH |=0x00200000;
}



int main(void){
      clock_init();
      GPIO_init();

      EXTI_RTSR |=(1<<0);
      EXTI_IMR |=(1<<0);



 while (1){

	  GPIOA_ODR |=(1<<13);
	  for(int i=0 ;i<5000;i++);

	  GPIOA_ODR &=~(1<<13);
	  for(int i=0;i<5000;i++);
}

 void

return 0 ;
}

