#include <stdio.h>

int main() {
    float r;
    const float pie = 3.1459;

    printf("Enter the radius of the circle\n");
    scanf("%f",&r);

    printf("The area of the cirle is %f\n",pie*r*r);

    return 0;
}