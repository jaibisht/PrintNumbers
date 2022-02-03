#include <stdio.h>

int main() {
    int a, n;

    printf("Type the value of n: ");
    scanf("%d", &n);

    a = 1;

    while (a <= n) {
        printf("%d\n", a);
        a++;
    }
}