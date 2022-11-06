#include <stdio.h>

int main() {

    int x = 10;
    int *y;
    y = &x;
    x = 20;

    printf("%i %i", x, *y);
    return 0;
}
