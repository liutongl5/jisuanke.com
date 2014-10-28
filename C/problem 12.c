//not passed 未通过：结尾可能为空格（不过题意不是可以输出0吗=_=||，这种不应该算是没有单词吗=_=||）总之，参考答案：http://blog.csdn.net/cnshsh/article/details/39582601

//以下为我的未通过代码
#include <stdio.h>

int main()
{
    char input[100];
    gets(input);
    
    int length = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        length++;
        if (input[i] == " ")
            length = 0;
    }
    
    printf("%d", (length-2));
    return 0;
}
