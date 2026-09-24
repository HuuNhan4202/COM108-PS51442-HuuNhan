#include <stdio.h>
int main (){
    float Toan, Ly, Hoa;
    printf(" Nhap diem Toan: ");
    scanf("%f", &Toan);
    printf(" Nhap diem Ly: ");
    scanf("%f", &Ly);
    printf(" Nhap diem Hoa:");
    scanf("%f", &Hoa);
    printf("Diem TB = %.2f\n", (Toan * 3 + Ly * 2 + Hoa * 1) / 6 );
    return 0;
}