//passed 已通过
#include <stdio.h>
#include <math.h>

/*int sqrt(int x);*/
int main()
{
    int x;
    while (scanf("%d", &x) != EOF )
    {
        printf("%d\n", (int)sqrt(x));
    }
}
/*int sqrt(int x)
{
    int i = 0;
    for (i = 0; i>-1 ;i++)
    {
        if ( (i*i) > x )
            break;
    }
    return (i-1);
}*/
/*调用math.h才能过这题有问题吧。。。*/
