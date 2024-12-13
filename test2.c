#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float x, y;

  printf("마일을 입력하시오: ");
  scanf("%f", &x);
  
  y = x * 1609;
  
  printf("%.1f마일은 %f 미터입니다.", x, y);	
  return 0;
}
