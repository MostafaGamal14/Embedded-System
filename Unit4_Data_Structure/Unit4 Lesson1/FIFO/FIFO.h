
#ifndef _FIFO_H__
#define _FIFO_H__

#include <stdio.h>
#include <stdlib.h>

#define FIFO_buf_length 5
#define element_type unsigned int



typedef struct {
   unsigned int length ;
   unsigned int count ;
   element_type *head ;
   element_type *base ;
   element_type *tail ;
} FIFO_buf_t ;

typedef enum {
    FIFO_FULL ,
    FIFO_EMPTY ,
    FIFO_NULL ,
    FIFO_NO_ERROR ,
} FIFO_STATUS ;


FIFO_STATUS FIFO_enqueue(FIFO_buf_t *FIFO_buf , element_type item);
FIFO_STATUS FIFO_dequeue(FIFO_buf_t *FIFO_buf , element_type *item);
FIFO_STATUS FIFO_init(FIFO_buf_t *FIFO_buf , element_type *buf , unsigned int length );
FIFO_STATUS FIFO_IS_FULL(FIFO_buf_t *FIFO_buf );
void FIFO_PRINT(FIFO_buf_t *FIFO_buf);


#endif // _FIFO_H__
