#include <stdio.h>

int main() {
    int a, b;
    float sum = 0;
    do {
        printf("1.Coffee(2.50)$\n");
        printf("2.Tea(2.00$)\n");
        printf("3.Smoothie(3.00)\n");
        printf("4.Quit\n");
        printf("Please enter your choice(1-4)");
        scanf("%d", &a);
        switch (a) {
            case 1:
                sum += 2.50;
                break;
            case 2:
                sum += 2.00;
                break;
            case 3:
                sum += 3.00;
                break;
            case 4:
                b = 1;
                break;
        }
    } while (b != 1);
    printf("Sum= %f", sum);
}

