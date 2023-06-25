#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to print the multiplication table: ");
    scanf("%d", &n);

    // Using for loop
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    // Using while loop
    
    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("%d X %d = %d\n", n, i, n * i);
    //     i++;
    // }
    

    return 0;
}
