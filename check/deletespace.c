#include <stdio.h>
#include <string.h>
void nhapchuoi(char c[]){
    int i=0;
    char tem;
    do
    {
        tem=getchar();
        c[i]=tem;
        i++;
    } while (tem!='\n');
}
void deletespace(char c[],char chuoi[]){
    int j=0;
    for(int i=0;i<=strlen(c);i++){
        if((c[i]==' ')|(c[i]=='\t'))
            continue;
        else{
            chuoi[j]=c[i];
            j++;
        }
    }
}
int main(){
    char c[100000]="";
    char chuoi[1000000]="";
    printf("Nhap chuoi:");
    nhapchuoi(c);
    //gets(c);      cach nhap chuoi bang cach dung thu vien string.h
    deletespace(c,chuoi);
    printf("Sau khi xoa khoang trang:%s",chuoi);
    return 0;
}
