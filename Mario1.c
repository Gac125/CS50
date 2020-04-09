#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do{
        n = get_int("Height:"); //get the height 
    }
    while(n<=1 || n>8); //get the height again if n is not between 1 and 8, inclusive

    int i = n-1;
    int e = 1;

    while (i>=0){
      printf(" "*i,"#"*e,"\n");
      e+=1;
      i-=1;
    }
}
