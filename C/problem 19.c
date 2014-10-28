//passed 已通过
#include <stdio.h>

int main()
{
    int n, i, adder = 1;
    scanf("%d", &n);
    
    int A[n], B[n];
    
    
    for (i = 0; i<n; i++)
    {
        scanf("%d", A+i);
    }
    
    
    for (i=n-1; i>-1; i--)
    {
        B[i] = A[i] + adder;
        if (B[i] == 10)
        {
            B[i] = 0;
            adder = 1;
        }
        else
            adder = 0;
    }
    
    if(adder == 1)
        printf("%d ", adder);
    for (i=0; i<n; i++)
    {
        printf("%d ", B[i]);
    }
    return 0;
}

/*当输入为N个9时，输出为N+1位！！！*/
