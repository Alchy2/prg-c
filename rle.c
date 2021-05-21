#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compression (char *addr, int size)
{
  int count = 1;

for (int i = 0; i < size; i++)
  {

    if (*(addr + i) != *(addr + i + 1)) {

      printf("%i", count);
      printf("%c", *(addr + i));
      count = 1;

    } else {
      
      count += 1;

    }

  }

}


int main(void) {
    char input[] = "AAAAABBCCC";
    int inputsize = strlen(input);
    compression(input, inputsize);


  return 0;
}