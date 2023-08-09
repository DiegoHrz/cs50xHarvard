#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do{
        start = get_int("Start size: ");

    }while (start < 9);

    // TODO: Prompt for end size
    int end;
    do{
        end = get_int("End size: ");

    }while (end< 9);

    // TODO: Calculate number of years until we reach threshold
    for(int i = 0;start >= end; i++){
        start+= start/3
        start-= start/4
    }
    // TODO: Print number of years
    printf("The number is %i\n", n);

}
