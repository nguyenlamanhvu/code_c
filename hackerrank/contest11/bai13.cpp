#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data{
    char word[100];
    int number;
    int vitri;
};
typedef struct data data;
data a[1000];
int m=0;
int position(char chuoi[]){
    for(int i=0;i<m;i++){
        if(strcmp(chuoi,a[i].word)==0)   return i;
    }
    return -1;
}
int sort(void const *a, void const *b){
    data *x=(data*)a;
    data *y=(data*)b;
    if(x->number != y->number)  return (y->number - x->number);
    else    return(x->vitri - y->vitri);
}
int thuannghich(char c[]){
    int n=strlen(c);
    for(int i=0;i<n;i++){
        if(c[i]&1)  return 0;
    }
    for(int i=0;i<n/2;i++){
        if(c[i]!=c[n-i-1])  return 0;
    }
    return 1;
}
int main(){
    char tmp[100];
    while (scanf("%s",tmp)!=-1)
    {
        int pos=position(tmp);
        if(pos==-1){
            strcpy(a[m].word,tmp);
            a[m].number=1;
            a[m].vitri=pos;
            m++;
        }
        else    a[pos].number++;
    }
    qsort(a,m,sizeof(a[0]),sort);
    for(int i=0;i<m;i++){
        if(thuannghich(a[i].word)){
            printf("%s %d\n",a[i].word,a[i].number);
        }
    }
    return 0;
}
