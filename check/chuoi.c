#include <stdio.h>
#include <string.h>

int count=0;
void xuatchuoi(char c[]){
    //printf("%s",c);           //cách xuất chuỗi 1
    for(int i=0;i<=strlen(c);i++){
        char tem=c[i];      // xuất bằng cách dùng hàm putchar
        putchar(tem);
    }
}
void nhapchuoi(char c[]){
    int i=0;
    char tem;
    do
    {
        tem=getchar();      //getchar = scanf("%c",&tem)
        //scanf("%c",&tem);
        c[i]=tem;
        i++;
    } while (tem != '\n');
    
}
int hamdem(char c[]){
    //return count=strlen(c)-1;       //do tính cả ký tự xuống dòng nên ta trừ đi 1
    int i=0;
    while(c[i]!= '\n'){
        count++;
        i++;
    }
    return count;
}
int main(void)
{
    char c[1000000]="";
    printf("Nhap chuoi can dem vao:");
    nhapchuoi(c);
    xuatchuoi(c);
    printf("So ky tu trong chuoi la: %d",hamdem(c));
    return 0;
}