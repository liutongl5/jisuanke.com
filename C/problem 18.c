//passed 已通过
#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    
    int a[n];
    for (i = 0; i<n; i++)
    {
        scanf("%d", a+i );
    }
    
    i = 0;
    while (i<n)
    {
        i += *(a+i);
        if (i > (n-2))
        {
            printf("true");
            break;
        }
        else if (a[i] == 0)
        {
            printf("false");
            break;
        }
    }
    
    return 0;
}
