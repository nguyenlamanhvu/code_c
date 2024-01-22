#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data{
    char word[100];
    int number;
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
    return strcmp(y->word,x->word); 
}
int main(){
    char tmp[100];
    while (scanf("%s",tmp)!=-1)
    {
        int pos=position(tmp);
        if(pos==-1){
            strcpy(a[m].word,tmp);
            a[m].number=1;
            m++;
        }
        else    a[pos].number++;
    }
    int max=0; char res[100];
    qsort(a,m,sizeof(a[0]),sort);
    for(int i=0;i<=m;i++){
        if(a[i].number >= max){
            strcpy(res,a[i].word);
            max=a[i].number;
        }
    }
    printf("%s\n",res);
    return 0;
}
