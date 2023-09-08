#include <stdio.h>

int main(){
    //Switch statement
    //this one is used only for equality operations
    
    int day=0;
    printf("Enter day number:");
    scanf("%d",&day);
    switch(day){
        case 1: printf("SUNDAY\n");
            break;
        case 2: printf("Monday\n");
            break;
        case 3: printf("Tuseday\n");
            break;
        case 4: printf("Wednesday\n");
             break;
        case 5: printf("Thursady\n");
            break;
        case 6: printf("Friday\n");
            break;
        case 7: printf("Saturday\n");
            break;
        default: printf("Please enter valid day number");
    }
    return 0;
}
