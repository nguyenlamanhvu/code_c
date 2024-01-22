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
    if(x->number != y->number)  return (y->number - x->number);
    else    return(strcmp(x->word,y->word));
}

int main(){
    char tmp[100];
    while (scanf("%s",tmp)!=-1)
    {
        if(strcmp(tmp,"good")==0){
            strcpy(a[0].word,"good");
            a[0].number++;
        } else if(strcmp(tmp,"bad")==0){
            strcpy(a[1].word,"bad");
            a[1].number++;
        } else if(strcmp(tmp,"wonderful")==0){
            strcpy(a[2].word,"wonderful");
            a[2].number++;
        } else if(strcmp(tmp,"terrible")==0){
            strcpy(a[3].word,"terrible");
            a[3].number++;
        }
    }
    qsort(a,4,sizeof(a[0]),sort);
    for(int i=0;i<4;i++){
        if(a[i].number!=0)  printf("%s %d",a[i].word,a[i].number);
    }
    return 0;
}
