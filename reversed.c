#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to print the reverse multiplication multiplication table: ");
    scanf("%d", &n);

    // Using for loop
    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    // Using while loop
    
    // int i = 10;
    // while (i >= 1)
    // {
    //     printf("%d X %d = %d\n", n, i, n * i);
    //     i--;
    // }
    

    return 0;
}
