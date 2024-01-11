 #include <stdio.h>
int f(int n){
    if(n==1)    return 0;
    else if(n==2)    return 1;
    else{
        return f(n-1)+f(n-2);
    } 
}
int f2(int n){
    int f1=0;
    int f2=1;
    int fn;
    if(n==1)    return f1;
    else if(n==2)   return f2;
    else{
        for(int i=3;i<=n;i++){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
        return fn;
    } 
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f2(n));
    printf("%d",f(n));
}
