#include <stdio.h>
#include <string.h>

int la_palindrome(const char *str) {
  int trai = 0, phai = strlen(str) - 1;

  while (trai < phai) {
    if (str[trai] != str[phai]) return 1;
    trai++;
    phai--;
  }

  return 0;
}

int main() {
  char a[100];
  fgets(a, sizeof(a), stdin);
  a[strcspn(a, "\n")] = '\0';

  printf("%d", la_palindrome(a));

  return 0;
}