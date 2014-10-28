//passed 已通过
#include <stdio.h>

int main()
{
    char roman[20];
    scanf("%s", roman);
    
    int length = 0, number = 0;
    int current[20];
    for (; roman[length] != '\0'; length++)
    {
        switch (roman[length])
        {
            case 'I' : current[length] = 1;     break;
            case 'V' : current[length] = 5;     break;
            case 'X' : current[length] = 10;    break;
            case 'L' : current[length] = 50;    break;
            case 'C' : current[length] = 100;   break;
            case 'D' : current[length] = 500;   break;
            case 'M' : current[length] = 1000;  break;
            default  : current[length] = 0;
        }
    }
    
    number = current[length - 1];
    
    for (int i = (length-1); i > 0; i--)
    {
        if (current[i-1] < current[i])
            number -= current[i-1];
        else
            number += current[i-1];
    }
    
    printf("%d", number);
    
    return 0;
}

/*最后一个for循环改进：
    for (int i = (length-2); i > 0; i--)
    {
        if (current[i] < current[i+1])
            number -= current[i];
        else
            number += current[i];
    }
