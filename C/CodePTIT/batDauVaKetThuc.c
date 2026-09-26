#include <stdio.h>
#include <string.h>

int main()
{
  int a;
  scanf("%d", &a);
  for (a; a>0; a--){
    char b[10];
    scanf("%s", b);
    if (b[0] == b[strlen(b)-1]){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}