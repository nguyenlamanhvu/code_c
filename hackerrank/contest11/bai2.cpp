#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct sophuc{
    int re;
    int im;
};
typedef struct sophuc sophuc;

int main() {
    sophuc x,y;
    scanf("%d%d%d%d",&x.re,&x.im,&y.re,&y.im);
    sophuc tong,hieu,tich;
    tong.re=x.re+y.re;
    tong.im=x.im+y.im;
    hieu.re=x.re-y.re;
    hieu.im=x.im-y.im;
    tich.re=x.re*y.re-x.im*y.im;
    tich.im=x.im*y.re+x.re*y.im;
    printf("%d %d\n",tong.re,tong.im);
    printf("%d %d\n",hieu.re,hieu.im);
    printf("%d %d\n",tich.re,tich.im);
    return 0;
}
