#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char chuoi[100];

int sort(const void *a, const void *b){
    char* x=(char*)a;
    char* y=(char*)b;
    return *x-*y;
}
int main() {
    scanf("%s",chuoi);
    qsort(chuoi,strlen(chuoi),sizeof(char),sort);
    for(int i=0;i<strlen(chuoi);i++){
        if(chuoi[i]=='0' && i<strlen(chuoi)-1) continue;
        else    printf("%c",chuoi[i]);
    }
    return 0;
}