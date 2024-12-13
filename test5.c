#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double x, y;
    
    printf("실수를 입력하세요: ");
    scanf("%lf",&x);
    
    y = 3 * x * x + 7 * x + 11;
    
    printf("다항식의 값은 %f", y);
    
    return 0;
}
