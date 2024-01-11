#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100000];
int count[256];
int sort(void const *a,void const *b){
    char* x=(char*)a;
    char* y=(char*)b;
    return *x-*y;
}
int main() {
    fgets(chuoi,100000,stdin);
    for(int i=0;i<strlen(chuoi);i++){
        count[chuoi[i]]++;
    }
    char mem[100000];
    int count_mem[256];
    strcpy(mem,chuoi);
    for(int i=0;i<256;i++){
        count_mem[i]=count[i];
    }
    qsort(chuoi,strlen(chuoi)-1,sizeof(char),sort);
    for(int i=0;i<strlen(chuoi)-1;i++){
        if(count[chuoi[i]]){
            printf("%c %d\n",chuoi[i],count[chuoi[i]]);
            count[chuoi[i]]=0;
        }
    }
    for(int i=0;i<strlen(mem)-1;i++){
        if(count_mem[mem[i]]){
            printf("\n%c %d",mem[i],count_mem[mem[i]]);
            count_mem[mem[i]]=0;
        }
    }
    return 0;
}