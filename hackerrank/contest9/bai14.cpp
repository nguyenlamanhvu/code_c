#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
int check(char token[]){
    for(int i=0;i<strlen(token);i++){
        token[i]=tolower(token[i]);
    }
    if(strcmp(token,"28tech")==0) return 1;
    else return 0;
}
int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int cnt=0;
    while(token !=NULL){
        if(check(token))
            ++cnt;
        token = strtok(NULL, " ");
    }
    printf("%d",cnt);
    return 0;
}