#include <stdio.h>
int main (){
    float diem_tb;
    int hanh_kiem;
    printf("Nhap diem trung binh: "); scanf("%f", &diem_tb);
    printf("Nhap hanh kiem: "); scanf("%d", &hanh_kiem);
    printf("Dieu kien diem trung binh >= 8: %d\n", diem_tb >= 8);
    printf("Dieu kien hanh kiem tot: %d\n", hanh_kiem == 1);
    printf("Ket qua xet hoc bong (1: Dat, 0: Khong dat): %d\n", (diem_tb >= 8) && (hanh_kiem ==1));
    return 0;
}