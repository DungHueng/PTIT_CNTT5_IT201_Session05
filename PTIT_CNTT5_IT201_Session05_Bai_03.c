#include <stdio.h>

int product(int n) {
    if (n == 0) return 1;
    return n * product(n - 1);
}
int main() {
    int n;
    printf("Moi ban nhap so n: ");
    scanf("%d", &n);

    if (n<0) {
        printf("Gia tri khong hop le");
    } else {
        int tich=product(n);
        printf("Tich tu 1 den %d = %d", n, tich);
    }

    return 0;
}