/*
1
21
321
4321
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        int val = i;
        for(int j=1; j<=i; j++){
            printf("%d",val-- );
        }
        printf("\n");
    }
    return 0;
}