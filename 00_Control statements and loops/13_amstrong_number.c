/*
Amstrong Number
1^3 + 5^3 + 3^3 = 153
1^4 + 6^4 + 3^4 +4^4 = 1634
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    double order = 0;
    int sum = 0;
    printf("Enter: ");
    scanf("%d", &num);
    int num_ = num;
    int check = num; 
    while (num>0)
    {  
        num = num/10;
        order++;
    }
    //printf("%d \n", order);
    while (num_>0)
    {
        double digit = num_ % 10;
        double pow_ = pow(digit, order);
        //printf(" pow = %d digit = %d order = %d \n", pow_, digit, order);
        sum  = sum + pow_;
        num_ = num_/10;
    }
    // printf("sum = %d \n", sum);
    // printf("check = %d \n",check);
    if (check == sum){
        printf("Amstrong Number");
    }
    else{
        printf("Not Amstrong Number");
    }
    return 0;
}
