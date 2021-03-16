/*
*
**
***
****
*/

//using for loop;

#include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Using While loop;
int main(){
    int i, n;
    printf("Enetr: ");
    scanf("%d", &n);
    i =1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}