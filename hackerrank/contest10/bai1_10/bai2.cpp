#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[1000];
int digit,letter,other;
int main() {
    gets(chuoi);
    for(int i=0;i<strlen(chuoi);i++){
        chuoi[i]=(char)toupper(chuoi[i]);
    }
    printf("%s",chuoi);
    for(int i=0;i<strlen(chuoi);i++){
        chuoi[i]=(char)tolower(chuoi[i]);
    }
    printf("\n%s",chuoi);
    return 0;
}