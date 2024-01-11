#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100001];
char mem1[20000][100];

void sort(int n){
    for(int i=1;i<n;i++){
        int pos=i-1;
        char tmp[100];
        strcpy(tmp,mem1[pos]);
        while(pos>=0 && strlen(mem1[pos])>strlen(tmp)){
            strcpy(mem1[pos+1],mem1[pos]);
            pos--;
        }
        strcpy(mem1[pos+1],tmp);
    }
}
// int sort(const void *a, const void *b){
//     char *x=(char*)a;
//     char *y=(char*)b;
//     return strlen(x)-strlen(y);
// }
int ThuanNghich(char *token,int n){
    int l=0,r=n-1;
    while(r>=l){
        if(token[r]!=token[l])  return 0;
        l++;r--;
    }
    return 1;
}
int main() {
    gets(chuoi);
    //chuoi[strlen(chuoi)-1]='\0';
    char *token;
    int cnt=0;
    token = strtok(chuoi, " ");
    while(token !=NULL){
        if(ThuanNghich(token,strlen(token))){
            int check=1;
            for(int j=0;j<cnt;j++){
                if(strcmp(mem1[j],token)==0){
                    check=0; break;
                }
            }
            if(check){
                strcpy(mem1[cnt],token); cnt++;
            }
        }
        token = strtok(NULL, " ");
    }
    //qsort(mem1,cnt,sizeof(mem1[0]),sort);
    sort(cnt);
    for(int i=0;i<cnt;i++){
        printf("%s ",mem1[i]);
    }
    return 0;
}