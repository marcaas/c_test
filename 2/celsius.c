#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main()
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}

// 语句可以分开放在任意多行内。
// 记号间的空格可以使我们更容易区分记号，建议在运算符前后都放一个空格。
// 缩进有助于轻松识别程序嵌套。
// 空行可以把程序划分成逻辑单元，从而使读者更容易分辨程序的结构。没有空行的程序很难阅读，就像没有章节的书一样。