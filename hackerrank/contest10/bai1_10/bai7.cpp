#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100000];
int count[256];

int main() {
    fgets(chuoi,100000,stdin);
    chuoi[strlen(chuoi)-1]='\0';
    for(int i=0;i<strlen(chuoi)/2;i++){
        if(chuoi[i]!=chuoi[strlen(chuoi)-i-1]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}