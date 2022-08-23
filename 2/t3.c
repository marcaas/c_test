// 修改t2中的程序，使用户可以自行录入球体的半径。
#include <stdio.h>

#define PI 3.14f

int main()
{
    float r;

    printf("the r of ball is: ");
    scanf("%f",&r);
    
    printf("the volume of ball is %f m^3\n",(4.0f/3.0f)*PI*r*r*r);
    
    return 0;
}