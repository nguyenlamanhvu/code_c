#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct sinhvien{
    char name[1000];
    char birth[100];
    char address[100];
    double gpa;
};
typedef struct sinhvien sinhvien;

struct TinhThanh
{
    char address[100];
    int number;
};
typedef struct TinhThanh TinhThanh;
TinhThanh b[1000];
int m=0;
int position(char a[]){
    for(int i=0;i<m;i++){
        if(strcmp(a,b[i].address)==0)   return i;
    }
    return -1;
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
        int pos=position(a[i].address);
        if(pos==-1)  m++;
        else    b[pos].number++;
    }
    int max=0;
    for(int i=0;i<m;i++){
        max=fmax(max,b[i].number);
    }
    for(int i=0;i<m;i++){
        if(max==b[i].number)    printf("%s\n",b[i].address);
    }
    return 0;
}