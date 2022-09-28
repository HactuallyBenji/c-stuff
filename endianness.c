#include <stdio.h>

typedef unsigned char* byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void* x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}


int main() {
    int firstInteger = 2;
    int secondInteger = 555;
    show_int(firstInteger);
    show_int(secondInteger);

    float firstFloat = 2.3;
    float secondFloat = 555.89127876;
    show_float(firstFloat);
    show_float(secondFloat);

    void* firstPointer = &firstInteger;
    void* secondPointer = &secondFloat;
    show_pointer(firstPointer);
    show_pointer(secondPointer);

    return 0;
}
