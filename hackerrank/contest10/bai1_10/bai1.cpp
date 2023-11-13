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
        if(isdigit(chuoi[i]))   digit++;
        else if(isalpha(chuoi[i]))  letter++;
        else    other++;
    }
    printf("%d %d %d",letter,digit,other);
    return 0;
}