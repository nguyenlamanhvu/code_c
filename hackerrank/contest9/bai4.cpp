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
int check(){
    for(int i=0;i<count-2;i++){
        if(abs(chuoi[i]-chuoi[i+1])!=1)
            return 0;
    }
    return 1;
}
int main() {
    nhapchuoi();
    if(check()) printf("YES");
    else    printf("NO");
    return 0;
}