#include "stdio.h"
#include "stdint.h"

typedef volatile unsigned int vuint_32 ;

#define RCC_Base       0x40021000
#define GPIOA_Base     0x40010800
#define RCC_APB2ENR  *(vuint_32*)(RCC_Base+0x18)
#define GPIOA_ODR    *(vuint_32*)(GPIOA_Base+0x0c)
#define GPIOA_CRH    *(vuint_32*)(GPIOA_Base+0x04)


typedef union {
	vuint_32 allfields ;

	struct{
		vuint_32 reserved :13 ;
		vuint_32 Pin13:1 ;
	}pin;

}R_ODR_t ;

volatile R_ODR_t* R_ODR =(volatile R_ODR_t*)(GPIOA_Base+0x0c);

int main(void){
      RCC_APB2ENR |=(1<<2);
	  GPIOA_CRH &=~0xff0fffff;
	  GPIOA_CRH |=0x00200000;

 while (1){
      R_ODR->pin.Pin13=1;       //set bit
	  //GPIOA_ODR |=(1<<13);
	  for(int i=0 ;i<5000;i++);
	  R_ODR->pin.Pin13=0;
	  //GPIOA_ODR &=~(1<<13);   //clear bit
	  for(int i=0;i<5000;i++);
}

return 0 ;
}

