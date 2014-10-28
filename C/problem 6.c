//passed 已通过
#include <stdio.h>

typedef struct student
{
    int l;
    int w;
    int h;
    char name[8];
}student;

int main()
{
    int n, j;
    //char stealer[8], victim[8];
    int stealer, victim;
    scanf("%d", &n);
    
    student stu[9];
    int volumn[9];
    int vol, average;
    
    while ( n != -1 )
    {
        vol = 0;
        
        for (j = 0; j < n; j++)
        {
            scanf("%d %d %d %s", &stu[j].l, &stu[j].w, &stu[j].h, stu[j].name);
            volumn[j] = stu[j].l * stu[j].w * stu[j].h;
            vol += volumn[j];
        }
        
        average = vol / n;
        
        for (j = 0; j < n; j++)
        {
            if (volumn[j] < average)
            {
                //victim = stu[j].name;
                victim = j;
            }
            else if (volumn [j] > average)
            {
                //stealer = stu[j].name;
                stealer = j;
            }
        }
        printf("%s took clay from %s.\n", stu[stealer].name, stu[victim].name);
        scanf("%d", &n);
    }
        
    return 0;
}
