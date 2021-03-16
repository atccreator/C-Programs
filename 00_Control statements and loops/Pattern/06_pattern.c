/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
// Using for loop;
#include<stdio.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%c",65+j-1 );
        }
    printf("\n");
    }
    return 0;
}