#include <stdio.h>


long long calculatefactorial(int n) {
    long long factorial = 1;
    int i;
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n, select;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("\nChon lua chon cua ban:\n");
    printf("1. Tinh giai thua\n");
    printf("2. Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &select);

    switch (select) {
        case 1:
            if (n < 0) {
                printf("Khong tinh giai thua cho so am.\n");
            } else {
                printf("Giai thua cua %d la: %lld\n", n, calculatefactorial(n));
            }
            break;
        case 2:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le.\n");
            break;
    }

    return 0;
}
