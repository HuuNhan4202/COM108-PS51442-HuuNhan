#include <stdio.h>
int main(){
    char mssv[10] = "PS51442";
    char hoTen[30] = "Lai Nguyen Huu Nhan";
    float diemToan = 8.5;
    float diemLy = 7.0;
    float diemHoa = 9.0;
    float diemTB = (diemToan * 2 + diemLy + diemHoa)/4.0f;
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", hoTen);
    printf("Diem trung binh: %.2f\n", diemTB);
    return 0;
}