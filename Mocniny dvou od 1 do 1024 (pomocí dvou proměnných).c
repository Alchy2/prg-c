#include <stdio.h>

int main()
{
    int Two = 2;
    int Power = Two;
    
    while (Power <= 1024)
    {
        printf("%d\n", Power);
        Power *= Two;
    }

    return 0;
}