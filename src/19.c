#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        if ((i % 2 == 0) && (i >= 4)) {
            printf("Odd multiple of 4\n");
            return 0;
        } else if ((i % 3 == 0) || ((n - i) % 7 == 0) || (n - i >= 6)) {
            printf("%d is a lucky number.\n", n);
            return 0;
        }
    }

    printf("All numbers are not even or odd.\n");
    return 0;
}
