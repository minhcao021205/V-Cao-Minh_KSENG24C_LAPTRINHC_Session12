#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b, sum;
    
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("\n-----MENU-----\n");
    printf("\nChon lua chon cua ban:\n");
    printf("1. Tinh tong hai so\n");
    printf("2. Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &sum);

    switch (sum) {
        case 1:
        	sum = a + b;
            printf("Tong cua %d va %d la: %d\n", a, b, sum);
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
