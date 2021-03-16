// check given number is palindrome or not
#include<stdio.h>
int main(){
int num;
int digit;
int rev = 0;
printf("Enter: ");
scanf("%d", &num);
int num_ = num;
while (num>0)
{
    digit = num%10;
    rev = rev * 10 + digit;
    num = num / 10;
}
if(rev == num_)
printf("Palindrom Number");
else
printf("Not Palindrom Number ");

return 0;
}