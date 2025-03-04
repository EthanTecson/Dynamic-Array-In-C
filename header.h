// * header.h - Declarations for Dynamic Array Data Strucutre


#ifndef HEADER_H 
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int* data;
    size_t size;
    size_t capacity;
} DynamicArray;

#endif /* HEADER_H */
