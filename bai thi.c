#include<stdio.h>

int isEvenNumber(int num);

int main() {
    int num, a, n, m;
    do {
        printf("\n1:Kiem tra 1 so cu the: \n");
        printf("\n2:Kiem tra so trong khoang: \n");
        printf("\n3:Exit\n");
        scanf("%d", &a);
        switch (a) {
            case 1:
                printf("\nNhap vao so muon kiem tra: \n");
                scanf("%d", &num);
                if (isEvenNumber(num)) {
                    printf("\n%d la so chan\n", num);
                } else {
                    printf("\n%d la so le\n", num);
                }
                break;
            case 2:
                printf("\nNhap vao khoang bat dau va ket thuc: \n");
                scanf("%d %d", &n, &m);
                printf("Cac so chan tu %d den %d la: ", n, m);
                for (int i = n; i <= m; i++) {
                    if (isEvenNumber(i)) {
                        printf("%d ", i);
                    }
                }
            case 3:
                a = 0;

        }

    } while (a != 0);
    printf("\nCam on ban da su dung dich vu\n");
}


int isEvenNumber(int num) {
    if (num % 2 == 0) {
        return 1; // số chẵn
    } else {
        return 0; // số lẻ
    }
}