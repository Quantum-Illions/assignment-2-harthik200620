#include <stdio.h>

int main() {

    for(int i=1; i<101;i++)
    {
        
        if(i%47 == 0)
        {
            break;
        }
        printf("%d\n",i);

    }
    
    return 0;
}