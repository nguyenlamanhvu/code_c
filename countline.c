#include <stdio.h>

int main(void){
    int count=0;
    char c;
    printf("Nhap chuoi:");
    while ((c=getchar())!= EOF)     //EOF: End of file(đây là 1 cờ), gõ ctrl+z để kt
    {
        if(c=='\n')
            count++;
    }
    printf("So dong la: %d",count);
    return 0;
}