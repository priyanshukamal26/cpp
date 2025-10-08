#include <stdio.h>

int main()
{
    //border-Square Pattern
    int size=0;
    printf("Enter size: ");
    scanf("%d", &size);
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            // if(i+j==size-1)
            if(i==0 || i==size-1 || j==0 || j==size-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}