//passed 已通过

#include <stdio.h>

int skip(int A[], int length, int current);
int main()
{
    int n, i;
    scanf("%d", &n);
    
    
    int A[n];
    for (i=0; i<n; i++)
    {
        scanf("%d", A+i);
    }
    
    printf("%d", skip(A, n, 0));
    
    return 0;
}

int skip(int A[], int length, int current)
{
    int i, j;
    int minimum[length];
    for(i = (length-2); i>-1; i--)
    {
        minimum[i] = 1;
        if (A[i] == 0)
            minimum[i] = 100000000;
        else if((i + A[i]) < (length-1))
        {
            for (j = 0; j<=A[i]; j++)
            {
                if(j==1)
                    minimum[i] = minimum[i+j]+1;
                else if((minimum[i+j]+1) < minimum[i])
                    minimum[i] = minimum[i+j]+1;
            }
        }
       
    }
    if (length == 1)
    return 0;
    
    return minimum[current];
}

/*int skip(int A[], int length, int current)
{
    int i, currentStep, minimum;
    for (i = A[current]; i>0; i--)
    {
        currentStep = 0;
        if((current+i) < (length-1))
        {
            currentStep = skip(A, length, current+i) + 1;
            if (i == 1)
                minimum = currentStep;
            else if (currentStep < minimum)
                minimum = currentStep;
        }
        else
        {
            minimum = 1;/*好像也可以直接"return 1;"
            break;
        }
    }
    return minimum;
}*/

/*int skip(int A[], int num, int length, int current)
{
    int i, steps = 0, minimum, first = 0;
    for (i=1; i<=num; i++)
    {
        current += i;
        num = A[current];
        skip(A, num, length, current);
        step++;
        first++;
        if (first == 0)
        {
            minimum = steps;
        }
        else if(steps < minimum)
        {
            minimum = steps;
        }
        
    }
    
    return minimum;
}*/
