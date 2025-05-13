//输入N个数（N小于等于100），输出数字2的出现次数；
//
//解题提示：
//
//整型数组读取5个整型数的方法如下：
//
//int a[100];
//
//for(int i=0;i<5;i++)
//
//{
//
//scanf("%d",&a[i]);
//
//}
#include <stdio.h>

int main() {
    int a[10];
    int n,i,total=0;
    scanf("%d\n",&n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<n)
    {
        if(a[i]==2){
            total+=1;
        }
         i++;
    }
    printf("%d\n",total);
    return 0;
}
