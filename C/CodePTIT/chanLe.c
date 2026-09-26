#include <stdio.h>
int main()
{
  int a;
  scanf("%d", &a);
  if (a!=0){
    if (a%2==0){
      printf("CHAN");
    } else {
      printf("LE");
    }
  } else {
    printf("KHONG");
  }
}