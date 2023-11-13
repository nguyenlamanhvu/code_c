#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];

int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, ". ,!?");
    while(token !=NULL){
        printf("%s",token);
        token = strtok(NULL, ". ,!?");
        if(token!=NULL) printf(" ");
    }
    return 0;
}