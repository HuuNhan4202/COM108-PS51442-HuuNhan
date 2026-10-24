#include <stdio.h>
#include <string.h>
int main (){
    //char* dsMSSV[30];
    //char* dsTenSV[30];
    //float dsDiem;

    //dsMSSV[0]= "PS51442";
   // dsTenSV[0]= "Lai Nguyen Huu Nhan";
   // dsDiem[0]=8.5;

    struct SinhVien{
        char mssv[10];
        char tenSV[30];
        float diem;
    } sv1;

    //struct SinhVien sv2;
    
    //sv1.mssv = "PS51442";
    //sv1.tenSV = "Huu Nhan";
    //sv1.diem = "7";

    //struct SinhVien dsLop[3];

    for(int i = 0; i<3; i++){
        printf("Nhap MSSV: ");
        gets(sv1.mssv);
        printf("Nhap ten SV: ");
        gets(sv1.tenSV);
        printf("Nhap diem: ");
        scanf("%f",&sv1.diem);
        printf("MSSV: %s\tTen SV: %s\tDiem: %.2f\n",sv1.mssv,sv1.tenSV,sv1.diem);
    }
    
    return 0;
}