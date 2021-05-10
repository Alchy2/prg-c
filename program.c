#include <stdio.h>
/* Program pomocí operace násobení najde všechny čísla která nejsou prvočísla, potom vypíše zbytek (čili prvočísla) */
int main(void) {
  int max = 100;
  ++max;
  char array [max];
    for (int a = 0; a < max; a++)
    {
      array [a] = 1;
    }

  for (int a = 2; a < max; a++)
    for (int b = a * a ; b < max; b += a)
    {
          array [b] = 0;
    }

  for (int a = 2; a < max; a++)
  {
    if (array [a] == 1)
    {
      printf("%i\n", a);
    }
  }
  return 0;
}