#include <stdio.h>

int main()
{
    printf("곱셈표\n");

    printf("   |");
    for (int i=1; i<=9; i++) printf("%3d", i);
    printf("\n");
    printf("---");
    printf("+");
    for (int i=1; i<=9; i++) printf("---");
    printf("\n");
    for (int i=1; i<=9; i++)
    {
        printf("%3d|", i);
        for (int j=1; j<=9; j++)
        {
            printf("%3d", i*j);
        }
        printf("\n");

    }
    return 0;
}

