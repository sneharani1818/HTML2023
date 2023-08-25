#include <stdio.h>
int main(){
    //declaring variables
    int a=189;
    int d=0;
    float b=18.9789;
    double dd=12.6478;
    char c='S';
    printf("Number value:%d\n",a);
    printf("Number value using percent i:%i\n",a);
    printf("Float literal:%f\n",b);
    printf("Character literal:%c",c);
    printf("\nd value:%d",d);
    printf("\nDouble literal:%lf",dd);
    d=a;
    printf("\nnew d value:%d",d);
    //declaring multiple variables together
    int x=3,y=5, z=4;
    printf("\nSum of three variables is %d",x+y+z);
    
    // seetimg precision for floating literals
    printf("\n\nFloating literal with precision: %.2f\n",b);
    
    //type conversion: implicit and explicit
    //implict that compiler does itself
    printf("Implicit type conversion\n");
    b=5;
    printf("%f\n",b);// this will show decimals as well after 5
    a=3.46;
    printf("%d\n",a);
    
    printf("Explicit type conversion\n");
    //explicit that we do, we convert ourselves
    b=5/2;// what will it return in b?? 2 or 2.5
    printf("%f\n",b);
    b=(float)5/2;//this will give 2.5 and not 2, because of explicit type conversion of 5 to float
    printf("%f\n",b);
    
    return 0;
}