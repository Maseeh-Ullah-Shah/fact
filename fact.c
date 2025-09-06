#include<stdio.h>
int main(){
    int n,i=0,fact=1;
    printf("Enter a number to find Factorial of it : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of  %d  is %d ",n,fact);
    return 0;
}