#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double c, f;
    
    printf("화씨값을 입력하시오: ");
    scanf("%lf", &f);
    
    c = (f-32) * 5/9;
    
    printf("섭씨값은 %f도 입니다.", c);
    
    return 0;
}
