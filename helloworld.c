#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
  int start = 0;
  int end = strlen(str) - 1;
  char buffer;

  while (start < end)
  {
    buffer = str[start];
    str[start] = str[end];
    str[end] = buffer;

    start++;
    end--;
  }
}

int main()
{
  char str[] = "Hello, World!\n";

  printf(str);

  reverse(str);
  printf(str);

  return 0;
}