// 编写一个程序，要求用户输入一个美元数量，然后显示出增加5%税率后的相应金额。
#include <stdio.h>

#define TAX_ADD 0.05

int main()
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);
    
    printf("With tax added: $%f\n", amount*(1+TAX_ADD));
    
    return 0;
}