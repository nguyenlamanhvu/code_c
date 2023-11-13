#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char chuoi[10000];
int count=0;
void nhapchuoi(){
    char tem;
    do
    {
        tem=getchar();
        chuoi[count]=tem;
        count++;
    } while (tem!='\n');
}
int main() {
    nhapchuoi();
    for(int i=count-2;i>=0;i--){
        printf("%c",chuoi[i]);
    }
    printf("\n");
    for(int i=0;i<count;i++){
        if(chuoi[i]>='A' && chuoi[i]<='Z')  printf("%c",chuoi[i]+('a'-'A'));
        else    printf("%c",chuoi[i]);
    }
    for(int i=0;i<count;i++){
        if(chuoi[i]>='a' && chuoi[i]<='z')  printf("%c",chuoi[i]-('a'-'A'));
        else    printf("%c",chuoi[i]);
    }
    return 0;
}