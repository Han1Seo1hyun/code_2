#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double b, h, s;

  printf("�ﰢ���� �غ�: ");
  scanf("%lf", &b);
  printf("�ﰢ���� ����: ");
  scanf("%lf", &h);
  
  s = b * h / 2;
  
  printf("�ﰢ���� ����: %f", s);
  return 0;
}
