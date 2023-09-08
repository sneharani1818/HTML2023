#include <stdio.h>

//CONDITIONAL STATEMENTS
int main(){
    //if statement- to check conditions
    printf("Normal if statement\n");
    int a, b;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter another number:\n");
    scanf("%d",&b);
    if(a>b)
        printf("First number is greater\n\n");
    if(b>a)
        printf("Second number is greater\n\n");
    
    //if-else statement
    int age=0;
    printf("if-else statement\n");
    printf("Enter age of the person\n");
    scanf("%d",&age);
    if(age>=18)
        printf("The person is eleigible to cast vote in India\n\n");
    else
        printf("The person is not ligilbe to cast vote\n\n");
    
    //if else ladder
    int sales=0;
    printf("Enter sales by the salesman\n");
    scanf("%d",&sales);
    if(sales>50000)
        printf("There is 10 percent bonus\n\n");
    else if(sales<=50000&&sales>40000)
        printf("There is 7 percent bonus\n\n");
    else if(sales<=40000&&sales>30000)
        printf("There is 5 percent bonus\n\n");
    else
        printf("Work harder\n\n");
        
    //nested if-else statement
    int c=0;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("Enter another number:\n");
    scanf("%d",&b);
    printf("Enter third number:\n");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
            printf("First number is largest\n\n");
        else
            printf("Third number is largest\n\n");
    }
    else{
        if(b>c)
            printf("Second number is largest\n\n");
    }
    
    return 0;
}
