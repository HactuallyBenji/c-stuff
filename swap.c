#include <stdio.h>

void inplace_swap (int* x, int* y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main() {
    int x = 0xFF;
    int y = 0x0;

    printf("%x\n", x);
    printf("%x\n", y);

    inplace_swap(&x, &y);

    printf("%x\n", x);
    printf("%x\n", y);

    return 0;
}
