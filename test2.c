#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float x, y;

  printf("������ �Է��Ͻÿ�: ");
  scanf("%f", &x);
  
  y = x * 1609;
  
  printf("%.1f������ %f �����Դϴ�.", x, y);	
  return 0;
}
