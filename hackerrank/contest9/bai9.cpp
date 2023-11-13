#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
char chen[]="28tech";
char rong[]="";

int main() {
    scanf("%s",chuoi);
    getchar();
    int k;
    scanf("%d",&k);
    for(int i=0;i<strlen(chuoi);i++){
        if(i<k || (i>=k && !strcmp(chen,rong))) printf("%c",chuoi[i]);
        else{
            printf("%s",chen);
            strcpy(chen, rong);
            i--;
        }
    }
    return 0;
}