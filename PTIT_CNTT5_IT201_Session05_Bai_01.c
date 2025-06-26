#include <stdio.h>

int recurse(int n) {
    if (n == 0) return;
    recurse(n - 1);
    printf("%d\t", n);
}

int main() {
    int n;
    printf("Moi ban nhap so n: ");
    scanf("%d", &n);

    recurse(n);
    return 0;
}
