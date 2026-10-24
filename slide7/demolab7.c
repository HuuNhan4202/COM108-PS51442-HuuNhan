#include<stdio.h>
#include<string.h>
int main(){
    int soNA=0; soPA=0;
    char nguyenAm[6]="ueoai";
    char chuoi[50]="nguyen thi hoa";
    for (int i = 0; i <strlen(chuoi)-1; i++){
        if (strchr(nguyenAm,chuoi[i])!=NULL){
            soNA++;
            // printf("%c",chuoi[i]);
        }else{
            soPA++;
        }
        
    }
    
    return 0;
}