#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) {
	int i;
    if (num <= 1)
        return false;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
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
                if (isPrime(num1))
                    printf("So %d là so nguyen to.\n", num1);
                else
                    printf("So %d khong phai là so nguyen to.\n", num1);
                break;
            case 2:
                if (isPrime(num2))
                    printf("So %d là so nguyen to.\n", num2);
                else
                    printf("So %d khong phai là so nguyen to.\n", num2);
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
