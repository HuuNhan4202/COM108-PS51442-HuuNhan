#include <stdio.h>
int main() {
    char mssv[] = "PS51442";
    char hoTen[] = "Lại Nguyễn Hữu Nhân";
    float diemToan = 8.5;
    float diemLy = 7.0;
    float diemHoa = 9.0;
    float diemTB = (float)(diemToan * 2 + diemLy + diemHoa) / 4.0f;
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTB);

    return 0;
}