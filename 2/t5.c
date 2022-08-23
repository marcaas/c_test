// 编程要求用户输入x的值，然后显示如下多项式的值：
// 3x^5+2x^4-5x^3-x^2+7x-6
#include <stdio.h>

int main()
{
    int x;
    // 输入
    printf("请输入x的值: ");
    scanf("%d", &x);
    // 输出
    printf("多项式的值为: %d\n", 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6);
    // 终止
    return 0;
}