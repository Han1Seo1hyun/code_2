#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double b, h, s;

  printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
  scanf("%lf", &b);
  printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
  scanf("%lf", &h);
  
  s = b * h / 2;
  
  printf("»ï°¢ÇüÀÇ ³ĞÀÌ: %f", s);
  return 0;
}
