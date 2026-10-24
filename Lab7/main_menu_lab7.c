#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

void bai1();
void bai2();
void bai3();
void bai4();

int main() {
    int chon;
    do {
        printf("+---------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 7              |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem nguyen am va phu am cua chuoi              |\n");
        printf("| 2. Dang nhap bang Username va Password            |\n");
        printf("| 3. Sap xep chuoi theo chu cai                     |\n");
        printf("| 4. Doi so thap phan sang thap luc phan            |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch (chon) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: printf("Thoat chuong trinh!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
        printf("\n");
    } while (chon != 5);

    return 0;
}

void bai1() {
    char s[100];
    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    int nguyenAm = 0, phuAm = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            nguyenAm++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            phuAm++;
        }
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, nguyenAm, phuAm);
}

void bai2(){
    char username[50];
    char password[50];
    char correctUser[] = "admin";
    char correctPass[] = "12345";

    printf("Nhap username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Nhap password: ");
    int i = 0;
    char ch;
    while (1) {
        ch = getch(); 
        if (ch == 13 || ch == 10) { 
            password[i] = '\0';
            printf("\n");
            break;
        } else if (ch == 8 || ch == 127) {
            if (i > 0) {
                i--;
                printf("\b \b"); 
            }
        } else {
            if (i < (int)sizeof(password) - 1) {
                password[i++] = ch;
                printf("*"); 
            }
        }
    }

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
}

void bai3() {
    char s[5][50];
    char temp[50];

    printf("Nhap 5 chuoi:\n");
    for (int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Cac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}

void bai4() {
    int n;
    printf("Nhap vao mot so nguyen khong am: ");
    scanf("%d", &n);
    getchar();

    int goc = n;
    if (n == 0) {
        printf("So thap luc phan cua 0 la: 0\n");
        return;
    }

    int du;
    char ketQua[100];
    int dem = 0;

    while (n > 0) {
        du = n % 16;
        if (du < 10) {
            ketQua[dem] = du + '0';
        } else {
            ketQua[dem] = du - 10 + 'A';
        }
        dem++;
        n /= 16;
    }
    ketQua[dem] = '\0';

    printf("So thap luc phan cua %d la: ", goc);
    for (int j = dem - 1; j >= 0; j--) {
        printf("%c", ketQua[j]);
    }
    printf("\n");
}