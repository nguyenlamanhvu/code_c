#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct sinhvien{
    char name[1000];
    char birth[100];
    char address[100];
    double gpa;
    int stt;
};

typedef struct sinhvien sinhvien;
int sort(void const *a, void const *b){
    sinhvien *x=(sinhvien*)a;
    sinhvien *y=(sinhvien*)b;
    if(x->name != y->name)  return strcmp(x->name,y->name);
    else    return x->stt - y->stt;
}
int main(){
    int n;
    scanf("%d",&n);
    sinhvien a[n];
    for(int i=0;i<n;i++){
        getchar();
        fgets(a[i].name,sizeof(a[i].name),stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        fgets(a[i].birth,sizeof(a[i].birth),stdin);
        a[i].birth[strlen(a[i].birth)-1]='\0';
        fgets(a[i].address,sizeof(a[i].address),stdin);
        a[i].address[strlen(a[i].address)-1]='\0';
        scanf("%lf",&a[i].gpa);
        a[i].stt=i;
    }
    qsort(a,n,sizeof(a[0]),sort);
    for(int i=0;i<n;i++){
        printf("%s %s %s %.2lf\n",a[i].name,a[i].birth,a[i].address,a[i].gpa);
    }
    return 0;
}