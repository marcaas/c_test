#include <stdio.h>
// <stdio.h> “包含”了C语言标准输入/输出库的相关信息

int main(void)  // 主程序
{
    printf("To C,or not to C: that is a question.\n");  // printf函数来自于<stdio.h>标准输入/输出库，可以产生完美的格式化输出
    printf("Brevity is the soul of wit. \n  --Shakespeare\n");
    return 0;   // 程序终止时会向操作系统返回值0
}

// C语言不同于其他的编程语言，它没有内置的“读”和“写”命令。输入/输出功能由标准库中的函数实现。
// 虽然一个C程序可以包含多个函数，但只有main函数是必须有的，它是一个十分特殊的函数。
// main函数的名字是至关重要的，绝不能随意改写为其他。
// 如果main函数的末尾没有return语句，程序仍然能终止。但是，许多编译器会产生一条井盖消息（因为函数理应返回一个整数却没有这么做）。