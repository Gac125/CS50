#include <stdio.h>
#include <cs50.h>

int main(void){
  int height; //variable of the height if the pyramid
  do
  {
    height = get_int("Height:"); //get the height 
  } 
  while (height < 1 || height > 8); // if height is not between 1 and 8 get it again
    
  if (height == 1) {
    printf("#\n");
  }

  else{
    int i = height - 1;//number of spaces in the first line 
    int e = 1; //# in the frist line 

    while (i >= 0){
      for (int counter = 0; counter < i; counter++){
        printf(" "); //print the exact number of spaces
      }
      for (int counter1 = 0; counter1 < e; counter1++){            
        printf("#"); //print the exact number of #
      } 
      printf("\n");
      i--;
      e++;
    }
  }
}