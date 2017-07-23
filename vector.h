#include <stdbool.h>
#define VECTOR_INITIAL_CAPACITY 16

typedef struct {
    int size;
    int capacity;
    int *data;
} Vector;

void init(Vector *vector);
void append(Vector *vector, int value);
void prepend(Vector *vector, int value);
int pop(Vector *vector);
void delete(Vector *vector, int index);
void set(Vector *vector, int index, int value);
void resize(Vector *vector);
int size(Vector *vector);
int capacity(Vector *vector);
bool is_empty(Vector *vector);
void free_memory(Vector *vector);

int get(Vector *vector, int value);
