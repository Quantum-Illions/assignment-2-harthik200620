#include <stdio.h>

int main() {

    int sum = 0;
    int a;

    for(int i = 0;i < 5;i++)
    {
        printf("Enter the numbers 1 by 1\n");
        scanf("%d",&a);
        sum = sum + a ;

    }

    printf("The average is %f\n",sum/5.0);

    
    return 0;

}