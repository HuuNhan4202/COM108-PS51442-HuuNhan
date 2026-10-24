#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

struct SinhVien ds[50];
int n = 0;

void bai1();
void bai2();
void bai3();
void bai4();

int main() {
    int chon;
    do {
        printf("+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 8              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhap va xuat danh sach sinh vien               |\n");
        printf("| 2. Sap xep sinh vien theo diem tang dan           |\n");
        printf("| 3. Tim kiem sinh vien theo MSSV                   |\n");
        printf("| 4. Xuat sinh vien nhan hoc bong theo nganh        |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch (chon) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                bai4();
                break;
            case 5:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
        printf("\n");
    } while (chon != 5);

    return 0;
}

void bai1() {
    printf("Nhap so luong sinh vien (toi da 50): ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("MSSV: ");
        fgets(ds[i].mssv, sizeof(ds[i].mssv), stdin);
        ds[i].mssv[strcspn(ds[i].mssv, "\n")] = '\0';

        printf("Ten SV: ");
        fgets(ds[i].tenSV, sizeof(ds[i].tenSV), stdin);
        ds[i].tenSV[strcspn(ds[i].tenSV, "\n")] = '\0';

        printf("Nganh hoc: ");
        fgets(ds[i].nganhHoc, sizeof(ds[i].nganhHoc), stdin);
        ds[i].nganhHoc[strcspn(ds[i].nganhHoc, "\n")] = '\0';

        do {
            printf("Diem TB (0.0 - 10.0): ");
            scanf("%f", &ds[i].diemTB);
            getchar();
            if (ds[i].diemTB < 0.0 || ds[i].diemTB > 10.0) {
                printf("Diem khong hop le! Vui long nhap lai.\n");
            }
        } while (ds[i].diemTB < 0.0 || ds[i].diemTB > 10.0);
    }

    printf("\nDANH SACH SINH VIEN:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu [%d]:\n", i + 1);
        printf("MSSV: %s\n", ds[i].mssv);
        printf("Ten SV: %s\n", ds[i].tenSV);
        printf("Nganh hoc: %s\n", ds[i].nganhHoc);
        printf("Diem TB: %.2f\n", ds[i].diemTB);
    }
}

void bai2() {
    if (n == 0) {
        printf("Chua co sinh vien nao! Vui long nhap danh sach o chuc nang 1 truoc.\n");
        return;
    }

    struct SinhVien svTemp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].diemTB > ds[j].diemTB) {
                svTemp = ds[i];
                ds[i] = ds[j];
                ds[j] = svTemp;
            }
        }
    }


    printf("DANH SACH SAU KHI SAP XEP TANG DAN THEO DIEM:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien thu [%d]:\n", i + 1);
        printf("MSSV: %s\n", ds[i].mssv);
        printf("Ten SV: %s\n", ds[i].tenSV);
        printf("Nganh hoc: %s\n", ds[i].nganhHoc);
        printf("Diem TB: %.2f\n", ds[i].diemTB);
    }
}

void bai3() {
    if (n == 0) {
        printf("Chua co sinh vien nao! Vui long nhap danh sach o chuc nang 1 truoc.\n");
        return;
    }

    char tuKhoa[50];
    printf("Nhap MSSV can tim: ");
    fgets(tuKhoa, sizeof(tuKhoa), stdin);
    tuKhoa[strcspn(tuKhoa, "\n")] = '\0';

    int timThay = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].mssv, tuKhoa) == 0) {
            printf("\nTim thay sinh vien:\n");
            printf("MSSV: %s\n", ds[i].mssv);
            printf("Ten SV: %s\n", ds[i].tenSV);
            printf("Nganh hoc: %s\n", ds[i].nganhHoc);
            printf("Diem TB: %.2f\n", ds[i].diemTB);
            timThay = 1;
            break;
        }
    }

    if (!timThay) {
        printf("Khong tim thay sinh vien co MSSV: %s\n", tuKhoa);
    }
}

void bai4() {
    if (n == 0) {
        printf("Chua co sinh vien nao! Vui long nhap danh sach o chuc nang 1 truoc.\n");
        return;
    }

    int coHocBong = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8.0) {
            coHocBong = 1;
            break;
        }
    }

    if (!coHocBong) {
        printf("Khong co sinh vien nao dat hoc bong.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8.0) {
            int daInNganh = 0;
            for (int k = 0; k < i; k++) {
                if (ds[k].diemTB >= 8.0 && strcmp(ds[i].nganhHoc, ds[k].nganhHoc) == 0) {
                    daInNganh = 1;
                    break;
                }
            }

            if (!daInNganh) {
                printf("\nNganh: %s\n", ds[i].nganhHoc);
                for (int j = i; j < n; j++) {
                    if (ds[j].diemTB >= 8.0 && strcmp(ds[i].nganhHoc, ds[j].nganhHoc) == 0) {
                        printf("- %s - %s - Diem TB: %.2f\n", ds[j].mssv, ds[j].tenSV, ds[j].diemTB);
                    }
                }
            }
        }
    }
}