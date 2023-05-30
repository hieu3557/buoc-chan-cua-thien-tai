#include <stdio.h>

float balance = 1000.0; // Số dư ban đầu

// Hàm kiểm tra số dư
void checkBalance() {
    printf("Số dư hiện tại: %.2f\n", balance);
}

// Hàm rút tiền
void withdraw() {
    float amount;
    printf("Nhập số tiền muốn rút: ");
    scanf("%f", &amount);

    if (amount <= balance) {
        balance -= amount;
        printf("Rút tiền thành công. Số dư hiện tại: %.2f\n", balance);
    } else {
        printf("Số dư không đủ để thực hiện giao dịch.\n");
    }
}

// Hàm gửi tiền
void deposit() {
    float amount;
    printf("Nhập số tiền muốn gửi: ");
    scanf("%f", &amount);

    balance += amount;
    printf("Gửi tiền thành công. Số dư hiện tại: %.2f\n", balance);
}

int main() {
    char choice;

    do {
        printf("MENU:\n");
        printf("a. Kiểm tra số dư\n");
        printf("b. Rút tiền\n");
        printf("c. Gửi tiền\n");
        printf("d. Thoát\n");
        printf("Chọn một lựa chọn: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                checkBalance();
                break;
            case 'b':
                withdraw();
                break;
            case 'c':
                deposit();
                break;
            case 'd':
                printf("Thoát khỏi chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
                break;
        }

        printf("\n");
    } while (choice != 'd');

    return 0;
}