#include <stdio.h>

void ascending(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void space(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void descending(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void pattern(int n) {
    int i, spaces;
    for (i = n; i >= 1; i--) {
        ascending(i);
        spaces = 2 * (n - i);
        space(spaces);
        descending(i);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    pattern(n);

    return 0;
}
