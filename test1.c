#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  double money, year;
  
  printf("������ �Է��Ͻÿ�(����: ����): ");
  scanf("%lf", &money);
  
  year = 100000 / money;
  
  printf("10���� �����µ� �ɸ��� �ð�(����: ��): %.2f", year);
  
  return 0;
}
