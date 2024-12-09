#include <stdio.h>

void printarray(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    printf("1. In ra cac phan tu cua mang\n");
    printf("2. Thoat\n");
    printf("Nhap lua chon: ");
    scanf("%d", &select);

    switch (select) {
        case 1:
            printf("Cac phan tu trong mang la: ");
        	printarray(arr, n);
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
