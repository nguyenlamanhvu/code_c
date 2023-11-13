#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char number[18];
int tachso(int n){
    int count=0;
    while (n)
    {
        number[count++]=n%10;
        n/=10;
    }
    return count;
}
int main() {
    unsigned long long n;
    scanf("%lld",&n);
    int count=tachso(n);
    if(count&1) printf("%d",number[count/2+1]);
    else    printf("NOT FOUND");
    return 0;
}