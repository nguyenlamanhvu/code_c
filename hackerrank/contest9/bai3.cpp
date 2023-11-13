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
    int sum=0;
    for(int i=0;i<count;i++){
        if(chuoi[i]>='0'&& chuoi[i]<='9')   sum+=(chuoi[i]-'0');
    }
    printf("%d",sum);
    return 0;
}