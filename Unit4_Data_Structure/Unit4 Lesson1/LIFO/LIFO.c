#include"LIFO.h"

LIFO_STATUS LIFO_add_item(LIFO_buf_t *LIFO_buf , unsigned int item){
     if(!LIFO_buf->base || !LIFO_buf->head)
        return LIFO_NULL ;

     if(LIFO_buf->count == LIFO_buf->length)
        return LIFO_FULL ;

     *(LIFO_buf->head) = item ;
     LIFO_buf->head++;
     LIFO_buf->count++;

     return LIFO_NO_ERROR ;

}

LIFO_STATUS LIFO_get_item(LIFO_buf_t *LIFO_buf , unsigned int *item){
     if(!LIFO_buf->base || !LIFO_buf->head)
        return LIFO_NULL ;

     if (LIFO_buf->count==0)
        return LIFO_EMPTY ;

    LIFO_buf->head--;
    *item = *(LIFO_buf->head) ;
    LIFO_buf->count--;

    return LIFO_NO_ERROR ;
}

LIFO_STATUS LIFO_init(LIFO_buf_t *LIFO_buf , unsigned int *buf , unsigned int length ){

     if(buf==NULL)
        return LIFO_NULL ;

     LIFO_buf->base   = buf;
     LIFO_buf->head   = buf;
     LIFO_buf->length = length ;
     LIFO_buf->count  = 0 ;

     return LIFO_NO_ERROR ;
}
