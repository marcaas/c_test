// 编写一个程序，要求用户输入一个美金数量，然后显示出如何用最少的20美元、10美元、5美元和1美元来付款：
#include <stdio.h>

int main()
{
    int dollar;
    // 输入
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);
    // 输出
    printf("$20 bills: %d\n", dollar / 20);
    printf("$10 bills: %d\n", (dollar % 20) / 10);
    printf(" $5 bills: %d\n", ((dollar % 20) % 10) / 5);
    printf(" $1 bills: %d\n", ((dollar % 20) % 10) % 5);
    // 终止
    return 0;
}