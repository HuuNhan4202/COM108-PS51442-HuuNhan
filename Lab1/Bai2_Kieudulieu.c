#include <stdio.h>
int main (){
    int namSinh;
    float diemTB;
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);
    printf("Nam sinh: %d\n", namSinh);
    printf("Diem trung binh: %.2f\n", diemTB);
    return 0;
}