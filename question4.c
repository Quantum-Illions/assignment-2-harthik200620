#include <stdio.h>

int main() {
    enum day{monday = 1 , tuesday , Wednesday , Thursday , Friday , Saturday , Sunday};

    int a;

    printf("Enter a number between 1 to 7\n");
    scanf("%d",&a);

    switch (a)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Enter a valid input");
        break;

    }


    return 0;
}