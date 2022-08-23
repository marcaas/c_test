// 编程计算第一、第二、第三个月还贷后剩余的贷款金额：
#include <stdio.h>

int main()
{
    float amount, rate, month_pay;
    // 输入
    printf("Enter amount of loan: ");
    scanf("%f", &amount);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &month_pay);
    // 输出
    printf("Balance remaining after first payment: $%.2f\n", amount = amount * (1 + rate / 1200) - month_pay);
    printf("Balance remaining after second payment: $%.2f\n", amount = amount * (1 + rate / 1200) - month_pay);
    printf("Balance remaining after third payment: $%.2f\n", amount = amount * (1 + rate / 1200) - month_pay);
    // 终止
    return 0;
}