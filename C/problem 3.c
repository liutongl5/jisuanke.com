//passed 已通过
#include <stdio.h>

int main()
{
    int i, N;
    scanf("%d", &N);
    
    for (i = 2; i < N; i++)
    {
        if(N%i == 0)
        {
            printf("NO");
            break;
        }
    }
    if (i == N)
        printf("YES");
    
    return 0;
}
