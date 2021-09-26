#include <stdio.h>

int main(void)
{
    int height, i, j, n;
        // TODO: Prompt for  pyramid Height
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 9);
    // print left alinged pyramid
    for (i = 0; i < height; i++)
    { 
        for (j = 0; j < height; j++)
        { 
            
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
            printf("#");
            }
        }
            printf("  ");
            
            for (n = -1; n < i; n++)
            {
                printf("#");
            }
           
        printf("\n");
    }
    return (0);
}