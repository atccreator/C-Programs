/*
Print the given pattern
4444
4444
4444
4444
*/

// using for loop;

#include<stdio.h>
// int main(){
//     int n;
//     printf("Enetr: ");
//     scanf("%d",&n);
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             printf("%d", n);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Using While loop;

int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    int i = 1;
    while (i<=n)
    {   
        int j = 1;
        while(j<=n){
            printf("%d",n);
            j++;
        }
        printf("\n");
        i++;
    }
    
}