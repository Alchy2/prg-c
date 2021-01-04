#include <stdio.h>

int main()
{
int num = 8;
int a;
int a2;

int b = 0;
for (a = 0; a < num; ++a) {
   for (a2 = 0; a2 < num; ++a2) {
    if (b == 0) {
     printf("O");
      b ++;
 } else {
    printf("X");
     b --;
 }
}
if (b == 0) {
  	b ++;
}else {
   b --;
}
 printf("\n");
}

    return 0;
}