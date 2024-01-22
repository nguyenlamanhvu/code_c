#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct data{
    char website[100];
    int number;
};
typedef struct data data;
data a[1000];
int m=0;
int position(char chuoi[]){
    for(int i=0;i<m;i++){
        if(strcmp(chuoi,a[i].website)==0)   return i;
    }
    return -1;
}
int sort(void const *a, void const *b){
    data *x=(data*)a;
    data *y=(data*)b;
    if(x->number != y->number)  return (y->number - x->number);
    else    return(strcmp(x->website,y->website));
}

int main(){
    char day[100],time[100],website[100];
    while (scanf("%s%s%s",day,time,website)!=-1)
    {
        int pos=position(website);
        if(pos==-1){
            strcpy(a[m].website,website);
            a[m].number=1;
            m++;
        }
        else    a[pos].number++;
    }
    qsort(a,m,sizeof(a[0]),sort);
    for(int i=0;i<m;i++){
        printf("%s %d\n",a[i].website,a[i].number);
    }
    return 0;
}
