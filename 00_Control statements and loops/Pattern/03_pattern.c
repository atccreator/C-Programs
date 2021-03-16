/*
1
22
333
4444
*/
//using for loops;
#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter: ");
//     scanf("%d", &n);
//     for (int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++ ){
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Using while loop;
int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    int i =1;
    while (i<=n){
        int j = 1;
        while(j<=i){
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}