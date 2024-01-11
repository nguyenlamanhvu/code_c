#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100001];

int main() {
    gets(chuoi);
    //chuoi[strlen(chuoi)-1]='\0';
    char *token;
    int cnt=0;
    token = strtok(chuoi, " ");
    while(token !=NULL){
        cnt++;
        token = strtok(NULL, " ");
    }
    printf("%d",cnt);
    return 0;
}