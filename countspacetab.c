#include <stdio.h>

int main(void){
    int count=0;
    int c;
    printf("Nhap chuoi:");
    while ((c=getchar())!=EOF)
    {
        if((c==' ')|(c=='\t'))
            count++;
    }
    printf("So khoang trang: %d",count);
    return 0;
}