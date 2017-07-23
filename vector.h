#define VECTOR_INITIAL_CAPACITY 100

typedef struct {
    int size;
    int capacity;
    int *data;
} Vector;

void init(Vector *vector);
void append(Vector *vector, int value);
void set(Vector *vector, int index, int value);
void resize(Vector *vector);
void free_memory(Vector *vector);

int get(Vector *vector, int value);
