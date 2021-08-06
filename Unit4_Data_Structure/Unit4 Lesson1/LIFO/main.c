
#include "LIFO.h"


unsigned int Buffer1[LIFO_buf_length];
int main()
{
    int temp = 0;
    LIFO_buf_t uart_lifo ;
    LIFO_init(&uart_lifo,Buffer1,LIFO_buf_length);

    for (int i=0;i<5;i++){
      if ( LIFO_add_item(&uart_lifo,i) == LIFO_NO_ERROR )
           printf("%d \n",i);
        }
        printf("---------------------\n");
    for (int i=0;i<5;i++){
      if ( LIFO_get_item(&uart_lifo,&temp) == LIFO_NO_ERROR )
        printf("%d \n",temp);
        }

}
