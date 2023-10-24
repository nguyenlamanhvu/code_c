#include <stdio.h>
#include <string.h>

int main(void){
    const char ten1[]="Nguyen Lam Anh Vu"\
                            " khoa Dien\n";
    printf("%s",ten1);
    const char ten2[]="Nguyen Lam Anh Vu\0"" khoa Dien";
    printf("%s",ten2);
    const char ten3[]="\nNguyen Lam Anh Vu"" khoa Dien";
    printf("%s",ten3);
    return 0;
}