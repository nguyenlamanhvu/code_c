#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
char out[10000];
int index;
int main() {
    scanf("%s",chuoi);
    getchar();
    for(int i=0;i<strlen(chuoi);i++){
        if(chuoi[i]=='2' || chuoi[i]=='8' ||chuoi[i]=='t'||chuoi[i]=='e'||chuoi[i]=='c'||chuoi[i]=='h')
            continue;
        out[index++]=chuoi[i];
    }
    if(index==0)    printf("EMPTY");
    else    printf("%s",out);
}