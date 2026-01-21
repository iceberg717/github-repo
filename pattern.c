#include <stdio.h>
int main()
{
    int n, num = 1;
    printf("enter number:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num += 1;
        }
        printf("\n");
    }
    return 0;
}