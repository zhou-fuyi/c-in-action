#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;
    scanf("%d", &number);
    int code = 1;
    while ((number = number/10) >0)
    {
        code +=1;
    }
    printf("一共有%d位数字\n", code);
    return 0;
}
