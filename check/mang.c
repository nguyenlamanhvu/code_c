#include <stdio.h>
#include <math.h>
void nhapmang(int hang,int cot,int a[100][100]){
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int hang,int cot,int a[100][100]){
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int songuyento(int n){
    if(n<2) return 0;
    else
    {
        for(int i=2;i<=sqrt((double)n);i++){
            if((n%i)==0)    return 0;
            else continue;
        }
        return 1;
    }
}
int countsonguyento(int hang,int cot, int a[100][100]){
    int count=0;
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            if(songuyento(a[i][j]))  count++;
        }
    }
    return count;
}
void xuatsonguyento(int hang, int cot,int a[100][100]){
    printf("So nguyen to:");
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            if(songuyento(a[i][j]))  printf("%d ",a[i][j]);
        }
    }
    printf("\n");
}
int sochinhphuong(int n){
    int tempt=sqrt(n);
    if((tempt*tempt==n)) return 1;
    else return 0;
}
int countsochinhphuong(int hang,int cot, int a[100][100]){
    int count=0;
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            if(sochinhphuong(a[i][j]))  count++;
        }
    }
    return count;
}
void xuatsochinhphuong(int hang, int cot,int a[100][100]){
    printf("So chinh phuong:");
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            if(sochinhphuong(a[i][j]))  printf("%d ",a[i][j]);
        }
    }
    printf("\n");
}
int sumtamgiacduoi(int hang, int cot, int a[100][100]){
    int sumtamgiacduoi=0;
    for(int i=0;i<cot;i++){
        for(int j=0;j<=i;j++){
            sumtamgiacduoi+=a[i][j];
        }
    }
    return sumtamgiacduoi;         
}
int sumtamgiactren(int hang, int cot, int a[100][100]){
    int sumtamgiactren=0;
    for(int i=0;i<cot;i++){
        for(int j=hang-1;j>=i;j--){
            sumtamgiactren+=a[i][j];
        }
    }
    return sumtamgiactren;         
}
void xoay180(int hang,int cot, int a[100][100]){
    int count=0;
    for(int i=0;i<hang;i++){
        for(int j=0;j<cot;j++){
            count++;
            int temp=a[i][j];
            a[i][j]=a[hang-i-1][cot-j-1];
            a[hang-i-1][cot-j-1]=temp;
            if(count==(cot*hang)/2)     goto loop;
        }
    }
    loop:
    xuatmang(hang,cot,a);
}
void matranchuyenvi(int hang, int cot, int a[100][100], int b[100][100]){
    for(int i=0;i<cot;i++){
        for(int j=0;j<hang;j++){
            b[i][j]=a[j][i];
        }
    }
    xuatmang(cot,hang,b);
}
int main(void){
    int hang,cot;
    printf("Nhap so luong hang va cot:");
    scanf("%d%d",&hang,&cot);
    int a[100][100]={};
    int b[100][100]={};
    nhapmang(hang,cot,a);
    xuatmang(hang,cot,a);
    printf("So luong so nguyen to: %d\n",countsonguyento(hang,cot,a));
    xuatsonguyento(hang,cot,a);
    printf("So luong so chinh phuong: %d\n",countsochinhphuong(hang,cot,a));
    xuatsochinhphuong(hang,cot,a);
    if(hang==cot){
        printf("Tong tam giac duoi: %d\n",sumtamgiacduoi(hang,cot,a));
        printf("Tong tam giac tren: %d\n",sumtamgiactren(hang,cot,a));
    }
    else printf("Khong co ma tran tam giac\n");
    //printf("Ma tran sau khi xoay 180 do:\n");
    //xoay180(hang,cot,a);
    printf("Ma tran chuyen vi:\n");
    matranchuyenvi(hang,cot,a,b);
    return 0;
}