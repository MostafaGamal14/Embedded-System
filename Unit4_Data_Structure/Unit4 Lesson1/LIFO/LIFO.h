#ifndef _LIFO_H__
#define _LIFO_H__

#define LIFO_buf_length 5

#include <stdio.h>
#include <stdlib.h>

typedef struct {
   unsigned int length ;
   unsigned int count ;
   unsigned int *head ;
   unsigned int *base ;
} LIFO_buf_t ;

typedef enum {
    LIFO_FULL ,
    LIFO_EMPTY ,
    LIFO_NULL ,
    LIFO_NO_ERROR ,
} LIFO_STATUS ;


LIFO_STATUS LIFO_add_item(LIFO_buf_t *LIFO_buf , unsigned int item);
LIFO_STATUS LIFO_get_item(LIFO_buf_t *LIFO_buf , unsigned int *item);
LIFO_STATUS LIFO_init(LIFO_buf_t *LIFO_buf , unsigned int *buf , unsigned int length );


#endif // _LIFO_H__
