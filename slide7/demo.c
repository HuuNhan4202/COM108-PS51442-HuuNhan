#include<stdio.h>
#include<string.h>
int main(){
    char ho[30];
    char tenlot[30];
    char ten[30];
    char hoten[100];

    printf("Nhap ho : ");
    gets(ho);

    printf("Nhap lot : ");
    gets(tenlot);

    printf("Nhap ten : ");
    gets(ten);
    
    strcat(hoten,ho);
    strcat(hoten,tenlot);
    strcat(hoten,ten);

    printf("Ho ten vua nhap: %s  %s  %s\n",ho,tenlot,ten);
    printf("Ho ten vua nhap: %s", hoten);
    return 0;
}