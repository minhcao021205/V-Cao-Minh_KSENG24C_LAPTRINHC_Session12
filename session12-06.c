#include <stdio.h>
#include <stdbool.h>


bool isPerfectNumber(int num) {
    if (num <= 0)
        return false;

    int sum = 0;
    int i;
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    return sum == num;
}

int main() {
    int num1, num2, choice;

    
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    do {
       
        printf("\n-----MENU-----:\n");
        printf("1. Kiem tra so thu nhat\n");
        printf("2. Kiem tra so thu hai\n");
        printf("3. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isPerfectNumber(num1))
                    printf("So %d là so hoan hao.\n", num1);
                else
                    printf("So %d khong phai là so hoan hao.\n", num1);
                break;
            case 2:
                if (isPerfectNumber(num2))
                    printf("So %d là so hoan hao.\n", num2);
                else
                    printf("So %d khong phai là so hoan hao.\n", num2);
                break;
            case 3:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop li. Vui long tra loi lai.\n");
        }
    } while (choice != 3);

    return 0;
}
