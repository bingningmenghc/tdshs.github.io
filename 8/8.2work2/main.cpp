
//练习c++的引用的使用


#include <iostream>
#include<stdlib.h>
#include<stdio.h>

void hello(char *&p) {
    p=(char*) malloc(100);
    fgets(p,100,stdin);
}
int main(){
    char *p=NULL;
    hello(p);
    puts(p);
    return 0;
};