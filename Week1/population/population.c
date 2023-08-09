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

    int counter = 0;
    // TODO: Calculate number of years until we reach threshold
    while (start < end){
        int start += start/3;
        int secondStart -= start/4;
    }
    // TODO: Print number of years
    printf("The number is %i\n", counter);

}
