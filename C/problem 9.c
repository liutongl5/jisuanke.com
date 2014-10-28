//passed 已通过
#include <stdio.h>

int removeElement(int A[], int n, int elem);
int main ()
{
    int n;
    scanf("%d", &n);
    
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (A+i));
    }
    
    int removed;
    scanf("%d", &removed);
    
    int result;
    result = removeElement(A, n, removed);
    
    printf("%d", result);
}

int removeElement(int A[], int n, int elem)
{
    int j, r = 0;
    
    for (j = 0; j < n; j++)
    {
        if(A[j] == elem)
            r++;
    }
    
    return (n - r);
}
