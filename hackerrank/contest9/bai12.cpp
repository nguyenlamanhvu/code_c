#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];

int check(char token[]){
    for(int j=0;j<strlen(token);j++){
        if(islower(token[j]))  return 0;
    }
    return 1;
}
int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int count=0;
    while(token !=NULL){
        if(check(token))
            count++;
        token = strtok(NULL, " ");
    }
    printf("%d",count);
    return 0;
}