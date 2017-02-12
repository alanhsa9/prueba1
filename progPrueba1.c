#include <stdio.h>

int *prev = 0;

int main() {
    int a = 10;
    printf("%ld\n", prev-&a);
    prev = &a;
    main();
}
