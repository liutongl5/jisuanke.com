//passed 已通过
#include <stdio.h>

int delete(int A[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    int result = delete(array, n);
    printf("%d", result);
    
    return 0;
}

int delete(int A[], int n)
{
    int repeat;
    
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<i; j++)
        {
            if (A[i] == A[j])
            {
                repeat ++;
                break;
            }
        }
    }
    
    return (n - repeat);
}
