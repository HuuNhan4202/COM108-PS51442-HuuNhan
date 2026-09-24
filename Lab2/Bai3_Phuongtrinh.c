#include <stdio.h>
int main (){
    float a, b;
    printf("Nhap gia tri a: "); scanf("%f", &a);
    printf("Nhap gia tri b: "); scanf("%f", &b);
    float x = -b / a;
    printf("Nghiem cua phuong trinh la: %.2f\n", x);
    return 0;
}