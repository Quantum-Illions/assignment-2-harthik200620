#include <stdio.h>

int main() {

    int a;
    float b;
    printf("Enter an integer\n");
    scanf("%d",&a);
    printf("Enter a decimal number\n");
    scanf("%f",&b);
    int c = b;
    float d = a;
    printf("The changed integer to float is %f\n",d);
    printf("The changed float to integer is %d\n",c);






    return 0;
}