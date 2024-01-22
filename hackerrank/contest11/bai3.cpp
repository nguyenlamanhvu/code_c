#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct sinhvien{
    char name[1000];
    char birth[100];
    char address[100];
    int toan;
    int ly;
    int hoa;
    int tongket;
    char kq[10];
};

typedef struct sinhvien sinhvien;

int main(){
    int n;
    scanf("%d",&n);
    sinhvien a[n];
    int max=0;
    for(int i=0;i<n;i++){
        getchar();
        fgets(a[i].name,sizeof(a[i].name),stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        fgets(a[i].birth,sizeof(a[i].birth),stdin);
        a[i].birth[strlen(a[i].birth)-1]='\0';
        fgets(a[i].address,sizeof(a[i].address),stdin);
        a[i].address[strlen(a[i].address)-1]='\0';
        scanf("%d%d%d",&a[i].toan,&a[i].ly,&a[i].hoa);
        a[i].tongket=a[i].toan+a[i].ly+a[i].hoa;
        max=fmax(max,a[i].tongket);
        if(a[i].tongket>=24)    strcpy(a[i].kq,"DO");
        else    strcpy(a[i].kq,"TRUOT");
    }
    printf("DANH SACH THU KHOA :\n");
    for(int index=0;index<n;index++){
        if(max==a[index].tongket)   printf("%s %s %s %d\n",a[index].name,a[index].birth,a[index].address,a[index].tongket);
    }
    printf("KET QUA XET TUYEN:\n");
    for(int i=0;i<n;i++){
        printf("%s %s %s %d %s\n",a[i].name,a[i].birth,a[i].address,a[i].tongket,a[i].kq);
    }
    return 0;
}