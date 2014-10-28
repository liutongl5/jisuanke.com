//passed 已通过
#include <stdio.h>


void find(int A[],int n);
int main()
{
    int n;
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (array + i));
    }
    
    find(array, n);
    
    return 0;
}

void find(int A[],int n)
{
    int j, k;
    for (j = 0; j<n; j++)
    {
        for (k = 0; k<n; k++)
        {
            if (j == k)
                continue;
            else if (A[j] == A[k])
            {
                k = 0;
                break;
            }
        }
        
        if (k == n)
        {
            printf("%d", A[j]);
            break;
        }
    }
}
