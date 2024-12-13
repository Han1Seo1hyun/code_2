#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  double money, year;
  
  printf("연봉을 입력하시오(단위: 만원): ");
  scanf("%lf", &money);
  
  year = 100000 / money;
  
  printf("10억을 모으는데 걸리는 시간(단위: 년): %.2f", year);
  
  return 0;
}
