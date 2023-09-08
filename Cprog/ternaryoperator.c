#include <stdio.h>

int main(){
    //shorthand if-else ot ternary operator
    int a,b;
    printf("Enter  Two number:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int c=0;
    c=a>b?a:b;
    printf("%d is the larger number\n",c);
    
    //this can become a bit difficult to be used in nested from
    return 0;
}
