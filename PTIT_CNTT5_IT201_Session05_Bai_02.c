#include <stdio.h>

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    printf("Moi ban nhap so n: ");
    scanf("%d", &n);

    int tong = sum(n);
    printf("Tong tu 1 den %d = %d", n, tong);

    return 0;
}
