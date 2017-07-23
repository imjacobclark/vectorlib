#include <stdio.h>
#include "vector.h"

int main(){
    Vector vector;

    init(&vector);

    for(int i = 0; i < 500; i++){
        append(&vector, i);
        printf("%d\n", get(&vector, i));
    }

    free_memory(&vector);
}
