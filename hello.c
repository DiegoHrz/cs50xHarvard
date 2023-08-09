


int start;
do{
    start = get_init("Start size: ")

}while (n < 9);

int end;
do{
    end = get_init("End size: ")

}while (n < 9);


int counter = 0

for(int i = 0;start >= end; i++){
    start+= start/3
    start-= start/4
    counter++
}


printf("The number is %i\n", n);