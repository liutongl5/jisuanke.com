//passed 已通过
#include <stdio.h>

int main()
{
    int M, N, T, i, j;
    scanf("%d %d %d", &M, &N, &T);
    int arr[M][N];
    
    
    if (T == 0)
    {
        for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                scanf("%d", &arr[i][N-1-j]);
            }
        } 
    }
    else if (T == 1)
    {
                for (i = 0; i < M; i++)
        {
            for (j = 0; j < N; j++)
            {
                scanf("%d", &arr[M-1-i][j]);
            }
        } 
    }
    
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
