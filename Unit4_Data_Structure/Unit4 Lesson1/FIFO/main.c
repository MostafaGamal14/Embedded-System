#include "FIFO.h"

element_type buffer1[FIFO_buf_length];

int main()
{
    int item = 0;
  FIFO_buf_t uart_fifo ;
  if (FIFO_init(&uart_fifo,buffer1,FIFO_buf_length)==FIFO_NO_ERROR)
    printf("\n \n ----- FIFO IS DONE -----\n\n");
  for (int i=0;i<7;i++){
    printf("FIFO ENQUEUE(%d) \n" , i);
    if(FIFO_enqueue(&uart_fifo,i)==FIFO_NO_ERROR)
        printf("\t FIFO ENQUEUE--- Done \n");
    else
        printf("\t FIFO ENQUEUE--- Failed \n");
 }
 FIFO_PRINT(&uart_fifo);

 if(FIFO_dequeue(&uart_fifo,&item)==FIFO_NO_ERROR)
        printf("FIFO DEQUEUE--- Done \n",item);
if(FIFO_dequeue(&uart_fifo,&item)==FIFO_NO_ERROR)
        printf("FIFO DEQUEUE--- Done \n",item);

    FIFO_PRINT(&uart_fifo);

}
