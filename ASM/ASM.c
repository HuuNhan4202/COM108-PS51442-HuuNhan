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
         int gioBD, gioKT;
    printf("Nhap gio bat dau (12h - 23h): ");
    scanf("%d", &gioBD);
    printf("Nhap gio ket thuc (12h - 23h): ");
    scanf("%d", &gioKT);

    if (gioBD < 12 || gioKT > 23 || gioBD >= gioKT){
        printf("Gio khong hop le!\n");
        return;
    }

    int tongGio = gioKT - gioBD;
    double tongTien = 0;

    if (tongGio <= 3) {
        tongTien = tongGio * 150000;
    } else {
        tongTien = 3 * 150000 + (tongGio - 3) * 150000 * 0.7;
    }
    if (gioBD >= 14 && gioBD <= 17) {
        tongTien = tongTien * 0.9;
    }

    printf("Tong tien can thanh toan: %.0f VND\n", tongTien);
    }
    void TinhTienDien(){
        printf("Tinh tien dien\n");
        double kWh, tienDien = 0;
    printf("Nhap so kWh dien su dung: ");
    scanf("%lf", &kWh);

    if (kWh <= 50) {
        tienDien = kWh * 1678;
    } else if (kWh <= 100) {
        tienDien = 50 * 1678 + (kWh - 50) * 1734;
        } else if (kWh <= 200) {
        tienDien = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
    } else if (kWh <= 300) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
    } else if (kWh <= 400) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
    } else {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;
    }

    printf("Tien dien phai tra: %.0f VND\n", tienDien);
    }
    void DoiTien(){
        printf("Doi tien\n");
         int soTien;
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Nhap so tien: ");
    scanf("%d", &soTien);

    printf("Ket qua doi tien: ");
    for (int i = 0; i < 9; i++) {
        int soTo = soTien / menhGia[i];
        if (soTo > 0) {
            printf("%d to menh gia %d\n", soTo, menhGia[i]);
            soTien %= menhGia[i];
        }
    }
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