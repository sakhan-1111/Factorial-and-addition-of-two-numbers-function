#include <stdio.h>
#include <conio.h>

int fact(int a);
int add(int b, int c);
int main(void)
{
    int x,y;
    x=fact(5);
    printf("%d\n",x);
    y=fact(4);
    printf("%d\n",y);
    printf("%d\n",add(x, y));
    return 0;
}
int fact(int a)
{
    int i,r=1;

    for(i=1; i<=a; i++)
    {
        r=r*i;
    }
    return r;
}
int add(int b, int c)
{
    int s;
    s=b+c;
    return s;
}
