//Access breach
#include <stdio.h>


int main() {
    int a[5]={1,2,3,4,5};
    int j=20;
    int i=10;
    a[5]=5;
    a[6]=7;//访问越界
    printf("i=%d\n",i);
    return 0;
}
