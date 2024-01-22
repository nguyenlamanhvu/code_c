#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct phanso{
    int tuso;
    int mauso;
};
typedef struct phanso phanso;

int ucln(int a, int b){
   while(b != 0){
      int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

int main() {
    phanso x,y;
    scanf("%d%d%d%d",&x.tuso,&x.mauso,&y.tuso,&y.mauso);
    int ucln_x =ucln(x.tuso,x.mauso);
    int ucln_y =ucln(y.tuso,y.mauso);
    printf("%d/%d\n",(x.tuso)/ucln_x,(x.mauso)/ucln_x);
    printf("%d/%d\n",(y.tuso)/ucln_y,(y.mauso)/ucln_y);
    phanso tong,hieu;
    tong.tuso=x.tuso*y.mauso+y.tuso*x.mauso;
    tong.mauso=x.mauso*y.mauso;
    hieu.tuso=x.tuso*y.mauso-y.tuso*x.mauso;
    hieu.mauso=tong.mauso;
    int ucln_tong=ucln(tong.tuso,tong.mauso);
    int ucln_hieu=ucln(abs(hieu.tuso),hieu.mauso);
    printf("%d/%d\n",(tong.tuso)/ucln_tong,(tong.mauso)/ucln_tong);
    printf("%d/%d\n",(hieu.tuso)/ucln_hieu,(hieu.mauso)/ucln_hieu);
    return 0;
}
