//not passed 未通过：目前乘法overflow加法貌似有点问题，正在尝试。
#include <stdio.h>

/*测试想用加法不过目测不能用
int main()
{
    int n;
    scanf("%d", &n);
    
    long result = 1;
    
    for (i = 2; i <= n; i++)
    {
        if (i%2 == 0)
            result = result * 2 + 1; \\????
        else
            result = result * 2; \\貌似不对╮(╯▽╰)╭
    }
}*/

unsigned long long select(int a, int b);
int main()
{
    int n;
    scanf("%d", &n);
    
    
    unsigned long long result = 1;
    
    for (int i = 1; i <= (n/2); i++)
    {
        result += select(i, (n-i) );
    }
    
    printf("%llu", result);
    return 0;
}

unsigned long long select(int a, int b)
{
    int i, j=1;
    unsigned long long r = 1;
    for (i = (b-a+1); i <= b; i++)
    {
        r *= i;
        if (j<a)
        {
            r /= j;
            j++;
        }
    }
    
    for (; j <= a; j++)
    {
        r /= j;
    }
    
    return r;
}
/*此方法同乘同除，既避免overflow又避免运算超时*/



/*运算超时，检测较小数值可以通过
unsigned long long select(int a, int b)
{
    unsigned long long r;
    if (a == 0)
        return 1;
    else if (b == 0)
        return b;
    else
    {
        r = select( a, b-1 )+select( a-1, b-1 );
    }
        return r;
}*/
/*第5组出错（溢出？）
unsigned long long select(int a, int b)
{
    int i;
    unsigned long long r = 1;
    for (i = (b-a+1); i <= b; i++)
    {
        r *= i;
    }
    
    for (i = 1; i <= a; i++)
    {
        r /= i;
    }
    
    return r;
}*/
/*逗逼想法
long select(int a, int b)
{
    int i;
    long r = b-a+1;
    for (i = 0; i < a; i++)
        r *= r;
    return (r / (b-a+1) );
}*/
