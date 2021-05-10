#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void generate_items(float *p)
{
  time_t t;
  srand((unsigned) time(NULL));
  for(int a = 0; a < 10; a++)
    {
     *(p + a) = rand();
     *(p + a) = *(p + a) / rand();
    }
}

void show_items(float *p)
{
    for(int a = 0; a < 10; a++)
      {
         printf("%f\n", *(p + a));
      }
      printf("\n");
}

void round_items(float *p)
{
  for (int a = 0; a < 10; a++)
    {
            *(p + a) = *(p + a)*10;
      *(p + a) = round(*(p + a));
            *(p + a) = *(p + a)/10;
    }
}

int main() {

  float array [10];

  generate_items(array);
    show_items(array);
      round_items(array);
    show_items(array);
  return 0;

}