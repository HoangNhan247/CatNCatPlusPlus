#include <stdio.h>

int main() {
  int choice;
  float a, b;

  scanf("%d", &choice);
  scanf("%f %f", &a, &b);

  switch(choice){
    case 1:
      printf("%.1f", a+b);
      break;

    case 2:
      printf("%.1f", a-b);
      break;

    case 3:
      printf("%.1f", a*b);
      break;

    case 4:
      if (b==0){
        printf("Loi: chia cho 0");
      } else {
        printf("%.1f", a/b);
      }
      break;

    default:
      printf("Lua chon khong hop le");
  }
  
 return 0;
}