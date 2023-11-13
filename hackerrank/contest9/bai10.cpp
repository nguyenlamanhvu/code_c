#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
int kitu[256];

int main() {
    scanf("%s",chuoi);
    getchar();
    for(int i=0;i<strlen(chuoi);i++){
        if(kitu[chuoi[i]]==1){
            printf("%c",chuoi[i]);
            return 0;
        }
        kitu[chuoi[i]]=1;
    }
    printf("NONE");
    return 0;
}