#include<stdio.h>

int main(){
    int p,n;
    float si,r;

    printf("Enter the value of p : ");
    scanf("%d",&p);
    printf("Enter the value of r : ");
    scanf("%f",&r);
    printf("Enter the value of n : ");
    scanf("%d",&n);
    si = (p*r*n)/100;
    printf("\nThe value of SI is %f\n: ", si);
    return 0;
}


/*OUTPUT:
Enter the value of p : 1000
Enter the value of r : 15.5
Enter the value of n : 5

The value of SI is 775.000000

*/
