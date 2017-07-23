#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void init(Vector *vector){
    vector->size = 0;
    vector->capacity = VECTOR_INITIAL_CAPACITY;
    vector->data = malloc(sizeof(int) * vector->capacity);
}

int get(Vector *vector, int index){
    if(index > vector->capacity || index < 0){
        printf("Index %d out of bounds for vector of size %d\n", index, vector->size);
        exit(1);
    }

    return vector->data[index];
}

void set(Vector *vector, int index, int value){
    while(index >= vector->size){
        append(vector, 0);
    }

    vector->data[index] = value;
}

void append(Vector *vector, int value){
    resize(vector);

    vector->data[vector->size++] = value;
}

void resize(Vector *vector){
    if(vector->size >= vector->capacity){
        vector->capacity *= 2;
        vector->data = realloc(vector->data, sizeof(int) * vector->capacity);
    }
}

void free_memory(Vector *vector){
    free(vector->data);
}
