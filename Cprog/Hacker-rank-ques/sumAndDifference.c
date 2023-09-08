#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1, n2;
    float f1,f2;
    scanf("%d %d",&n1, &n2);
    scanf("%f %f",&f1, &f2);
    int sum=n1+n2;
    int diff=n1-n2;
    float sumf=f1+f2;
    float difference=f1-f2;
    printf("%d %d\n", sum, diff);
    printf("%.1f %.1f", sumf, difference);
    return 0;
}
