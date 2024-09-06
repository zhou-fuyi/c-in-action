#include <stdio.h>

void PrintN1(int N) {
    int i;
    for ( i = 0; i <= N; i++)
    {
        printf("%d\n", i);
    }
    return;
}

// 当数据规模变大，由于递归深度过深会导致堆栈溢出（比如：10万）
void PrintN2(int N) {
    if (N){
        PrintN2(N-1);
        printf("%d\n", N);
    }
    return;
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);
    // PrintN1(N);
    PrintN2(N);
    return 0;
}
