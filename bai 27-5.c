#include <stdio.h>

int main() {
    int n,a[31], sum= 0,b;
    printf("so luong ngay chi tieu");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("chi phi ngay thu %d la:",i+1);
        scanf("%d",&a[i]);
        sum+= a[i];
    }
    printf("tong chi tieu trong tat ca cac ngay la: %d\n",sum);
    printf("dat ra gioi han ngan sach:");
    scanf("%d",b);
    if(sum<b){
        printf("gia tri tieu nho hon ngan sach\n");
    } else {
        printf("gia tri tieu lon hon ngan sach\n");
    }
    int max = a[0];
    for (int i = 1; i < n; ++i) {
        if(max<a[i]){
            max=a[i];
        }
    }

    printf("chi phi cao nhat la: %d\n", max);
    return 0;
}