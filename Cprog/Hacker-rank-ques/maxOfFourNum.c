#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){
    int max=a;
    if(a>b){
        if(a>c){
            if(a>d)
                max=a;
            else 
                max=d;
        }
        else if(c>d)
            max=c;
        else
            max=d;
    }
    else{
        if(b>c){
            if(b>d)
                max=b;
            else
                max=d;
        }
        else {
            if(c>d)
                max=c;
            else
                max=d;
        }
    }
    return max;
}
