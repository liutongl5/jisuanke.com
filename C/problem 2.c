#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    M%N == 0 ? printf("YES") : printf("NO");
    return 0;
}
