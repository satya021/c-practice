#include <stdio.h>
int main()
{
    int c;
    printf("Enter a number\n");
    scanf("%d", &c);
    if (c == 0)
    {
        printf("%d is nither even nor odd\n", c);
        return 0;
    }
    if (c % 2 == 0)
    {
        printf("%d is even\n", c);
    }
    else
    {
        printf("%d is odd\n", c);
    }

    return 0;
}