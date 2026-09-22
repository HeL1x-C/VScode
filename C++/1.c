#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int c;
    c = add(5,6);
    printf("%d",c);
    return 0;
}