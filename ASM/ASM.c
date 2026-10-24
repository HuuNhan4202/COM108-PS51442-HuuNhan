#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int timUCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
    void KiemTraSoNguyen(){
        printf("Kiem tra so nguyen\n");
        float x;
    printf("Nhap vao so x: ");
    scanf("%f", &x);
    if (x == (int)x) {
        int n = (int)x;
        printf("%.0f la so nguyen.\n", x);
        int laSoNguyenTo = 1;
        if (n < 2) laSoNguyenTo = 0;
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0) {
                laSoNguyenTo = 0;
                break;
            }
        }
        if (laSoNguyenTo) printf("%d la so nguyen to.\n", n);
        else printf("%d KHONG phai so nguyen to.\n", n);

        int sq = sqrt(n);
        if (sq * sq == n) printf("%d la so chinh phuong.\n", n);
        else printf("%d KHONG phai so chinh phuong.\n", n);

    }else{
        printf("%.2f KHONG phai la so nguyen.\n", x);
    }
}
    void TimUCLNvaBCNN(){
        printf("\n--- TIM UCLN VA BCNN ---\n");
        int x, y;
        printf("Nhap 2 so nguyen x va y: ");
        scanf("%d%d", &x, &y);

        int ucln = timUCLN(x, y);
        double bcnn = (double)abs(x * y) / ucln;
        
        printf("UCLN cua %d va %d la: %d\n", x, y, ucln);
        printf("BCNN cua %d va %d la: %.0f\n", x, y, bcnn);
    } 
    void TinhTienKaraoke(){
        printf("Tinh tien Karaoke\n");
    }
    void TinhTienDien(){
        printf("Tinh tien dien\n");
    }
    void DoiTien(){
        printf("Doi tien\n");
    }
    void TinhLaiSuatVayTraGop(){
        printf("Tinh lai suat vay tra gop\n");
    }
    void VayTienMuaXe(){
        printf("Vay tien mua xe\n");
    }
    void SapXepThongTinSinhVien(){
        printf("Sap xep thong tin sinh vien\n");
    }
    void GameFPOLYLOTT(){
        printf("Game FPOLY-LOTT\n");
    }
    void TinhToanPhanSo(){
        printf("Tinh toan phan so\n");
    }
    int main(){
        int chon; 
        do{
        printf("\n+------------------- MENU ------------------+\n");
        printf("| 1. Kiem tra so nguyen                     |\n");
        printf("| 2. Tim UCLN va BCNN                       |\n");
        printf("| 3. Tinh tien Karaoke                      |\n");
        printf("| 4. Tinh tien dien                         |\n");
        printf("| 5. Doi tien                               |\n");
        printf("| 6. Tinh lai suat vay tra gop              |\n");
        printf("| 7. Vay tien mua xe                        |\n");
        printf("| 8. Sap xep thong tin sinh vien            |\n");
        printf("| 9. Game FPOLY-LOTT                        |\n");
        printf("| 10. Tinh toan phan so                     |\n");
        printf("| 0. Thoat                                  |\n");
        printf("+-------------------------------------------+\n");
        printf("Moi ban chon chuc nang (0-10): ");
        scanf("%d", &chon);
        switch (chon){
            case 1:
                KiemTraSoNguyen();
                break;
            case 2:
                TimUCLNvaBCNN();
                break;
            case 3:
                TinhTienKaraoke();
                break;
            case 4:
                TinhTienDien();
                break;
            case 5:
                DoiTien();
                break;
            case 6:
                TinhLaiSuatVayTraGop();
                break;
            case 7:
                VayTienMuaXe();
                break;
            case 8:
                SapXepThongTinSinhVien();
                break;
            case 9:
                GameFPOLYLOTT();
                break;
            case 10:
                TinhToanPhanSo();
                break;
            default:
                printf("Lua chon khong hop le, chon tu 0 - 10: \n");
        }
    } while (chon!=0);
    return 0;
}