//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每种票子至少一张。问：有几种换法？
#include <stdio.h>

int main() {
    int a, b, c, d, total=0;
    for (a = 1; a <= 10; a++)
    {
        for(b = 1; b <= 20; b++)
        {
            for(c = 1; c <= 40; c++)
            {
                for(d=1;d<=40;d++)

                {
                    if(a+b+c+d==40 && 10*a+5*b+2*c+d==100)
                    {
                        total++;
                    }

                }

            }

        }
    }
    printf("%d",total);
    return 0;
}