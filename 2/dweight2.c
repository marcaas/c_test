#include <stdio.h>
#define INCHES_PER_POUND 166

int main()
{
    int length, width, height, volume, weight;
    printf("Enter length of box: ");        //输入长
    scanf("%d", &length);
    printf("Enter width of box: ");         //输入宽
    scanf("%d", &width);
    printf("Enter height of box: ");        //输入高
    scanf("%d",&height);
    volume = length * width * height;       //计算体积
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;          //计算空间重量

    printf("Volume (cubic inches): %d\n", volume);          //打印体积
    printf("Dimensional weight (pounds): %d\n",weight);     //打印空间重量

    return 0;       //终止
}