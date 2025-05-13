//利用while或者for循环计算n！的值。
//
//提示：n！＝1*2*3…*n
#include <stdio.h>

int main() {
    int n,i,total=1;
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       total *= i;
   }
   printf("%d", total);
   return 0;
}
