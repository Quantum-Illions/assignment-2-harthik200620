#include <stdio.h>

int main() {

    int a;
    label:
    printf("Enter a positive number\n");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Byee\n");
    }
    else
    {
        printf("enter a valid number\n");
        goto label;
    }
    return 0;
}