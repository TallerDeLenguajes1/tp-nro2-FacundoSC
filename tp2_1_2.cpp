#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEM 4
#define NUM_COLUM 5



int main(int argc, char const *argv[])
{
	int mat[NUM_ELEM][NUM_COLUM];
   int (*p)[NUM_COLUM];
   int *q;
   int i;
   i = 0;

   for (p = mat; p < mat + NUM_ELEM; p++){

      for (q = *p; q < *p + NUM_COLUM; q++){
         *q = i++;
         printf("%4d", *q);
      }
      
      putchar('\n');
   }
   


	return 0;
}

