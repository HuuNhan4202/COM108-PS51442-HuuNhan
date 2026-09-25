#include <stdio.h>
#define PI 3.14159
int main (){
    float cd, cr, bk;
    printf("Nhap chieu dai hcn: "); scanf ("%f", &cd);
    printf("Nhap chieu rong dcn: "); scanf ("%f", &cr );
    printf("Nhap ban kinh hinh tron: "); scanf("%f", &bk);

    printf("Chu vi hinh chu nhat: %.2f\n", (cd + cr) * 2);
    printf(" Dien tich hinh chu nhat: %.2f\n", cr * cd);
    printf("Chu vi hinh tron: %.2f\n", 2 * PI * bk);
    printf("Dien tich hinh tron: %.2f", PI * bk * bk);
    return 0;
}