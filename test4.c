#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double c, f;
    
    printf("ȭ������ �Է��Ͻÿ�: ");
    scanf("%lf", &f);
    
    c = (f-32) * 5/9;
    
    printf("�������� %f�� �Դϴ�.", c);
    
    return 0;
}
