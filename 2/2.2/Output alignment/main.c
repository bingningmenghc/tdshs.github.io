#include <stdio.h>

int main() {
    int i=10;
    float f=96.3;
    printf("Student number=%3d score=%5.2f\n",i,f);//加3代表3个输出位置
    printf("Student number=%-3d score=%5.2f\n",i,f);//默认右对齐，加负号代表左对齐
    return 0;
}
