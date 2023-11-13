#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100];

int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, "/");
    while(token !=NULL){
        if(strlen(token)==1) printf("0%s",token);
        else    printf("%s",token);
        if(strlen(token)!=4)    printf("/");
        token = strtok(NULL, "/");
    }
    return 0;
}