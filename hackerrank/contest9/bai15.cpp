#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[10000];
void check(char token[], int cnt){
    if(cnt%2){
        for(int i=strlen(token)-1;i>=0;i--){
            printf("%c",token[i]);
        }
    }
    else    printf("%s",token);
}
int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int cnt=0;
    while(token !=NULL){
        check(token,cnt);
        ++cnt;
        token = strtok(NULL, " ");
        if(token!=NULL) printf(" ");
    }
    return 0;
}