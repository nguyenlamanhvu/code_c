#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
char digit[10000];
char letter[10000];
int indexDigit=0;
int indexLetter=0;
int main() {
    scanf("%s",chuoi);
    for(int i=0;i<strlen(chuoi);i++){
        if(isdigit(chuoi[i]))   digit[indexDigit++]=chuoi[i];
        else letter[indexLetter++]=chuoi[i];
    }
    printf("%s\n",digit);
    printf("%s",letter);
    return 0;
}