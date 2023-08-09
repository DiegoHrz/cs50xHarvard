#include <cs50.h>
#include <stdio.h>

int main(void)
{
    do {
    int n = get_int("Height: ");
  }while (n > 8 && n < 1) ;

  for(int i = 0; i < n; i++){

    for(int j = i+1; j < n; j++ ){
      printf(" ");
    }
    for(int k = n - 1; (k - i) < n ; k++){
      printf("#");
    }
    printf("\n");

  }
}