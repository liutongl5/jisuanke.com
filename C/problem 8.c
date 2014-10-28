//passed 已通过
#include <stdio.h>
#include <stdlib.h>

int main(){
  char *str = (char*)malloc(100*sizeof(char));
  scanf("%s", str);
  printf("%d", str_len(str));
  free(str);
  return 0;
}

int str_len(){

//请在这里完成你的函数
    int i;
    for (i = 0; i < 100; i++)
    {
        if (*str ++ == '\0')
            break;
    }
    return i;

}
