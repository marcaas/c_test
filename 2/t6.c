// 修改t5,使用HORNER法则
#include <stdio.h>

int main()
{
    int x;
    // 输入
    printf("请输入x的值: ");
    scanf("%d", &x);
    // 输出
    printf("多项式的值为: %d\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    // 终止
    return 0;
}