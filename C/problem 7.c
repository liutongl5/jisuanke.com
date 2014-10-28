//passed 已通过
#include <stdio.h>

int main()
{
    char a[50], b[50];
    int i, result[50];
    
    scanf("%s", a);
    scanf("%s", b);
    
    
    for (i = 0; (a[i] != '\0'); i++)
    {
        result[i] = ( (a[i])==(b[i]) );
        printf("%d", result[i]);
    }
    
    return 0;
}
