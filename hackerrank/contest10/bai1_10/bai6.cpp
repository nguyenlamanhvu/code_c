#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi1[100000];
char chuoi2[100000];
int count1[256];
int count2[256];
int sort(void const *a,void const *b){
    char* x=(char*)a;
    char* y=(char*)b;
    return strcmp(x,y);
}
void counter(char a[],int b[], int n){
    for(int i=1;i<n;i++){
        b[(int)a[i]]++;
    }
}
int main() {
    fgets(chuoi1,100000,stdin);
    fgets(chuoi2,100000,stdin);
    chuoi1[strlen(chuoi1)-1]='\0';
    chuoi2[strlen(chuoi2)-1]='\0';
    qsort(chuoi1,strlen(chuoi1),sizeof(char),sort);
    qsort(chuoi2,strlen(chuoi2),sizeof(char),sort);
    for(int i=0;i<strlen(chuoi1);i++){
        count1[(int)chuoi1[i]]++;
    }
    for(int i=0;i<strlen(chuoi2);i++){
        count2[(int)chuoi2[i]]++;
    }
    counter(chuoi1,count1,strlen(chuoi1));
    counter(chuoi2,count2,strlen(chuoi2));
    for(int i=0;i<256;i++){
        if(count1[i]!=0 && count2[i]==0)    printf("%c",(char)i);
    }
    printf("\n");
    for(int i=0;i<256;i++){
        if(count1[i]==0 && count2[i]!=0)    printf("%c",(char)i);
    }
    return 0;
}