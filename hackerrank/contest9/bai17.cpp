#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[1000];
char mem[1000][1000];

void sort( int cnt){
    for(int i=0;i<cnt;i++){
        int min_pos=i;
        for(int j=i+1;j<cnt;j++){
            if(strcmp(mem[min_pos],mem[j])>0){
                min_pos=j;
            }
        }
        char tmp[1000];
        strcpy(tmp,mem[i]);
        strcpy(mem[i],mem[min_pos]);
        strcpy(mem[min_pos],tmp);
    }
}

int main() {
    gets(chuoi);
    char *token;
    token = strtok(chuoi, " ");
    int cnt=0;
    while(token !=NULL){
        strcpy(mem[cnt++],token);
        token = strtok(NULL, " ");
    }
    sort(cnt);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem[i]);
    }
    printf("\n");
    for(int i=cnt-1;i>=0;i--){
        printf("%s ",mem[i]);
    }
    return 0;
}