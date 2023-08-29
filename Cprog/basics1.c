#include <stdio.h>
int main()
{
    //constants
    const int Birthyear=1856;
    
    //operators
    int a=12, b=13;
    int c=a+b;//addition
    printf("Addition: %d\n",c);
    c=a-b;
    printf("Subtraction: %d\n",c);
    c=a*b;
    printf("Multiplication: %d\n",c);
    c=b/a;
    printf("Division: %d\n",c);
    c++;
    printf("New value of C: %d\n",c);
    --a;
    printf("New value of a: %d\n",a);
    
    int x;
    x=67;//assignment operators
    
    printf("Shorthand operators\n");
    x+=4;
    printf("X: %d\n",x);
    x-=10;
    printf("X: %d\n",x);
    x*=10;
    printf("X: %d\n",x);
    x/=5;
    printf("X: %d\n",x);
    x%=7;
    printf("X: %d\n",x);
    
    printf("Logical shorthand operators");
    x=5;
    x&=3;
    printf("X: %d\n",x);
    return 0;

    //sizeOf operator
    printf("Size of x: %lu", sizeof(a));
}
