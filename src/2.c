#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    int z = add(x, y);
    printf("The result of adding %d and %d is %d\n", x, y, z);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
