#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
char chuoi[100000];
int count[256];

int main() {
    fgets(chuoi,100000,stdin);
    //chuoi[strlen(chuoi)-1]='\0';
    for(int i=0;i<strlen(chuoi);i++){
        if(isalpha(chuoi[i]) && chuoi[i]>='A' && chuoi[i]<='Z') chuoi[i]+=('a'-'A');   
    }
    for(int i=0;i<strlen(chuoi);i++){
        count[(int)chuoi[i]]++;
    }
    for(char i='a';i<='z';i++){
        if(count[(int)i]==0){
            printf("NO");
            return 0;
        }    
    }
    printf("YES");
    return 0;
}