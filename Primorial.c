#include <stdio.h>

int main()
{
  int n, i = 3, count, c, primorial;
  primorial = 2;

  printf("Enter the number of prime numbers for Primorial function\n");
  scanf("%d", &n);

  if (n >= 1) {
    printf("Primorial number is:\n");
  } else {
    printf("Primorial number is:\n");
  primorial = 1;
  }

  for (count = 2; count <= n;)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
      primorial *= i;
      count++;
    }
    i++;
  }
printf("%i", primorial);

  return 0;
}