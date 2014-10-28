//passed 已通过
#include <stdio.h>

int searchInsert(int A[], int n, int target);
int main()
{
    int n;
    scanf("%d", &n);
    
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", A+i);
    }
    
    int target;
    scanf("%d", &target);
    
    printf("%d", searchInsert(A, n, target));
    
    return 0;
}

int searchInsert(int A[], int n, int target)
{
    int j;
    for (j = 0; j < n; j++)
    {
        if (A[j] >= target)
            break;
    }
    
    return j;
}
