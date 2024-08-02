#include <stdio.h>

int main(void) {
  char buf[100];
  fgets(buf, sizeof(buf), stdin);

  int count;
  sscanf(buf, "%d", &count);
  printf("%d\n", count);

  char greeting[100] = "Hello world";
  for (int i = 0; i < count; i++) {
    printf("%s\n", greeting);
  }
}
