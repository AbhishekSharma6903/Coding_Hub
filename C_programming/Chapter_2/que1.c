#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    while(n!=0){
        sum = n%10+sum;
        n=n/10;
    }
    printf("sum of digit is %d", sum);
}
