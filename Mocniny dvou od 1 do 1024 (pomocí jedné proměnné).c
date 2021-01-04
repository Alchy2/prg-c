#include <stdio.h>

int main()
{
    int Power = 2;
    
    while (Power <= 1024)
    {
        printf("%d\n", Power);
        Power *= 2;
    }

    return 0;
}