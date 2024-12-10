#include <stdio.h>


void createMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Nhap cac phan tu cua ma tran:\n");
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("\nMa tran vua nhap la:\n");
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    
    printf("Chon kich thuoc ma tran:\n");
    printf("1. Nhap so hang va so cot\n");
    printf("2. Su dung gia tri mac dinh\n");
    printf("Nhap lua chon cua ban: ");
    int choice;
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Nhap so hang: ");
            scanf("%d", &rows);
            printf("Nhap so cot: ");
            scanf("%d", &cols);
            break;
        case 2:
            rows = 3;
            cols = 3;
            printf("Su dung gia tri mac dinh: 3 hang và 3 cot\n");
            break;
        default:
            printf("Lua chon khong hop li! Ket thuc chuong trinh.\n");
            return 1;
    }
    
    int matrix[rows][cols];
    createMatrix(rows, cols, matrix);
    printMatrix(rows, cols, matrix);

    return 0;
}
