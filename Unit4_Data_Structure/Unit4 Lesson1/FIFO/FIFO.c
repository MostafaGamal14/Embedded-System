#include "FIFO.h"

FIFO_STATUS FIFO_init(FIFO_buf_t *FIFO_buf , unsigned int *buf , unsigned int length ){
    if (buf==NULL)
        return FIFO_NULL ;

    FIFO_buf->base = buf;
    FIFO_buf->head = buf;
    FIFO_buf->tail = buf;
    FIFO_buf->length = length ;
    FIFO_buf->count = 0 ;

    return FIFO_NO_ERROR ;
}

FIFO_STATUS FIFO_enqueue(FIFO_buf_t *FIFO_buf , unsigned int item){
   if (!FIFO_buf->base || !FIFO_buf->head ||!FIFO_buf->tail)
        return FIFO_NULL ;

   if (FIFO_IS_FULL(FIFO_buf)==FIFO_FULL)
    return FIFO_FULL ;

    *(FIFO_buf->head)=item;
    FIFO_buf->count++;
    //Circular FIFO
    if (FIFO_buf->head ==(FIFO_buf->base+(FIFO_buf->length *sizeof(element_type))))
        FIFO_buf->head = FIFO_buf->base ;
    else
        FIFO_buf->head++;
   return FIFO_NO_ERROR ;
   }

FIFO_STATUS FIFO_dequeue(FIFO_buf_t *FIFO_buf , unsigned int *item){
    if (!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail)
        return FIFO_NULL ;
    if (FIFO_buf->count==0)
        return FIFO_EMPTY ;

    *item = FIFO_buf->tail ;
    FIFO_buf->count--;
    //Circular FIFO
    if (FIFO_buf->tail==(FIFO_buf->base+(FIFO_buf->length *sizeof(element_type))))
        FIFO_buf->tail = FIFO_buf->base ;
    else
        FIFO_buf->tail++;
   return FIFO_NO_ERROR ;


}
FIFO_STATUS FIFO_IS_FULL(FIFO_buf_t *FIFO_buf ){
    if (!FIFO_buf->base || !FIFO_buf->head || !FIFO_buf->tail)
        return FIFO_NULL ;
    if(FIFO_buf->count == FIFO_buf->length)
        return FIFO_FULL ;
    return FIFO_NO_ERROR ;
}
void FIFO_PRINT(FIFO_buf_t *FIFO_buf){
   element_type *temp ;
   int i ;
   if(FIFO_buf->count==0){
    printf("FIFO IS EMPTY");
   }
    else {
        temp=FIFO_buf->tail;
        printf("\n--------FIFO PRINT--------\n");
        for (i=0;i<FIFO_buf->count;i++){
            printf(" %d\n", *temp);
            temp++;
        }
            printf("-----------------\n");
    }
   }




