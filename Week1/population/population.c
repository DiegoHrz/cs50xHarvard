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
    int counter = 0;
    while (start < end){
        int starter = start/3;
        int secondStarter = start/4;
        start = start + starter - secondStarter;
        counter ++;
    }
    // TODO: Print number of years
    printf("The number is %i\n", counter);

}
