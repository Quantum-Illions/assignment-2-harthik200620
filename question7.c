#include <stdio.h>

int main() {
    int a;
    int b=1;
    int value = 1;

    
    printf("Enter a number\n");
    
    scanf("%d",&a);
    

    while(b<=a)
    {
        value *= b;
        b++;

    }

    printf("The value of the factorial is %d\n",value);
    return 0;
}