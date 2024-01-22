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
int namsinh[3];
int checkMonth(char c[]){
    char chuoi[100];
    strcpy(chuoi,c);
    char *token;
    int cnt=0;
    token = strtok(chuoi, "/");
    while(token !=NULL){
        namsinh[cnt++]=atoi(token);
        token = strtok(NULL, "/");
    }
    if(namsinh[1]==4)   return 1;
    else return 0;
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
        
    }
    for(int i=0;i<n;i++){
        if(checkMonth(a[i].birth))  printf("%s %s %s %.2lf\n",a[i].name,a[i].birth,a[i].address,a[i].gpa);
    }
    return 0;
}