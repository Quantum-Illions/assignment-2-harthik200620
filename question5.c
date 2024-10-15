#include <stdio.h>

int main() {

    int a;

    printf("Enter your marks\n");
    scanf("%d",&a);

    if(a>40 && a<100)
    {
        printf("You passed\n");
    }

    if(a>0 && a<=40)
    {
        printf("You failed\n");

    }

    else
    {
        printf("Enter a valid number\n");
    }


    
    return 0;
}