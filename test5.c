#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double x, y;
    
    printf("�Ǽ��� �Է��ϼ���: ");
    scanf("%lf",&x);
    
    y = 3 * x * x + 7 * x + 11;
    
    printf("���׽��� ���� %f", y);
    
    return 0;
}
