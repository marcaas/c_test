#include <stdio.h>
#define INCHES_PER_POUND 166

int main()
{
    int height, length, width, volume, weight;

    height = 8;     //高
    length = 12;    //长
    width = 10;     //宽
    volume = height * length * width;       //体积
    weight = (volume + INCHES_PER_POUND - 1)/INCHES_PER_POUND;            //空间重量

    printf("Dimensions: %dx%dx%d\n", length, width, height);        //打印长宽高
    printf("Volume (cubic inches): %d\n", volume);                  //打印体积
    printf("Dimensional weight (pounds): %d\n",weight);             //打印空间重量

    return 0;       //终止
}