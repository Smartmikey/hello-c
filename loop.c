#include <stdio.h>

int main(void)
{
    int count = 0;
    int countFor = 0;
    while (count < 3) 
    {
        printf("meow \n");
        count++;
    }

    for(int i = 0; i < 4; i++)
    {
        printf("for loop working \n");
    }
}