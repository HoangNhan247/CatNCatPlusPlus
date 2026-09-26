#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  c = b*b - 4*a*c;

  if (c < 0) {
    printf("NO");
  } else {
    if (c > 0){
      printf("%.2f %.2f", ( -b + sqrt(c) ) / (2*a) , ( -b - sqrt(c) ) / (2*a) );
    } else {
      printf("%.2f", ( -b + sqrt(c) ) / (2*a) );
    }
  }

  return 0;
}