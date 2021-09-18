#include <stdio.h>

int main() {
  printf("\n---Int Array Stuff---\n\n");

  int numsUnderfilled[10] = {0, -1, -2, -3, -4, -5};
  int numsOverfilled[2];

  for (int i = 0; i < 5; i += 1) {
    printf("Number to be added to arrays: %d\n", i);
    numsUnderfilled[i] = i;
    numsOverfilled[i] = i;
  }

  printf("\nArray #0 (initialLen = 10, filledSpots = 5, initialContents: {0, -1, -2, -3, -4, -5}): ");
  for (int i = 0; i < 10; i += 1) {
    printf("%d", numsUnderfilled[i]);
    if (i == 9) printf("\n");
    else printf(", ");
  }

  printf("Array #1 (initialLen = 2, filledSpots = 5): ");
  for (int i = 0; i < 5; i += 1) {
    printf("%d", numsOverfilled[i]);
    if (i == 4) printf("\n");
    else printf(", ");
  }

  printf("\n\n---Char Stuff---\n\n");

  printf("Going out of bounds:\n");

  char a = 'A';
  int first = 0;
  while (a != 'A' || first == 0) {
    first = 1;
    a += 1;
    printf("%c", a);
    if (a == 'A') printf("\n");
  }

  printf("\n\n---Print Stuff---\n\n");

  printf("Int: %d\n", 4 + 9);
  printf("Long: %ld\n", 123456789123456789);
  printf("Float: %0.3f\n", 1.123456789);
  printf("Double: %lf\n", 0.5 + 0.5 - 0.2);
  printf("Char: %c\n", 54 + '0');
  printf("String: %s\n", "Hello hello!");

  int num = 50;
  int *pointer = &num;
  printf("Address in pointer: %p\n", pointer);
  printf("Num at address: %d\n", *pointer);

  return 0;
}
