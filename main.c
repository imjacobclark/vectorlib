#include <stdio.h>
#include "vector.h"

int main(){
    Vector vector;
    init(&vector);

    printf("Is the vector empty: %s\n", is_empty(&vector) ? "true" : "false");

    for(int i = 0; i < 10; i++){
        append(&vector, i);
        printf("%d\n", get(&vector, i));
    }

    printf("Size of the vector: %d\n", size(&vector));
    printf("Capacity of the vector: %d\n", capacity(&vector));
    printf("Is the vector empty: %s\n", is_empty(&vector) ? "true" : "false");

    prepend(&vector, 1000);
    printf("Getting the prepended value: %d\n", get(&vector, 0));
    printf("Size of the vector: %d\n", size(&vector));

    printf("Popping the last item: %d\n", pop(&vector));
    printf("Size of the vector: %d\n", size(&vector));

    printf("Popping the last item: %d\n", pop(&vector));
    printf("Size of the vector: %d\n", size(&vector));

    // Should now be 5
    printf("Getting value 5: %d\n", get(&vector, 5));

    // Deleting it
    delete(&vector, 5);
    printf("Size of the vector: %d\n", size(&vector));

    printf("Getting value 3: %d\n", get(&vector, 3));
    printf("Getting value 4: %d\n", get(&vector, 4));
    // Should now be 6
    printf("Getting value 5: %d\n", get(&vector, 5));
    printf("Getting value 6: %d\n", get(&vector, 6));
    printf("Getting value 7: %d\n", get(&vector, 7));
    printf("Getting value 8: %d\n", get(&vector, 8));

    free_memory(&vector);
}
