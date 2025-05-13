#include <stdio.h>

int main() {
    int i=5;
    float f=i/2;//这里做的是整形运算，因为左右操作数都是整形。
    float k=(float)i/2;
    printf("%f\n",f);
    printf("%f\n",k);
    return 0;
}
