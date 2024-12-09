#include <stdio.h>

int find_the_largest_number(int arr[], int n) {
    int max = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n, select;
    int i;
	printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nChon lua chon cua ban:\n");
    printf("1. Tim so lon nhat trong mang\n");
    printf("2. Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &select);

    switch (select) {
        case 1:
            printf("So lon nhat trong mang la: %d\n", find_the_largest_number(arr, n));
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
