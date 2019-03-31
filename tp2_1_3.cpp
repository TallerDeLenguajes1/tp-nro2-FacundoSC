#include  <stdio.h>
#include   <conio.h>
#include   <time.h>
#include <stdlib.h>



#define Fila 15
int main(int argc, char const *argv[])
{
	int i,j,aleatorio;
	int **mt;
	int numero;
	int par=0;


	int elementos_pares[15];

	mt=(int**)malloc(Fila*sizeof(int));
	for (int i = 0; i < Fila; i++)
	{
		aleatorio=rand() % (15-5+1) + 5;

		*(mt+i)=(int*)malloc(aleatorio * sizeof(int));

        



		for (int j = 0; j < aleatorio; j++)
		{
			


			 *(*(mt+i)+j)=rand() % (999-100+1) + 100;

			 numero=*(*(mt+i)+j);


			 printf("%10d",*(*(mt+i)+j));

              if (numero%2==0)
              {
              	   par=par+1;          
               }

               else{


               }
      


		}

		 switch(i){
         
         case 0:
                    elementos_pares[i]=par;

            break;

            case 1:
                    elementos_pares[i]=par;



            break;

            case 2:
                    elementos_pares[i]=par;



            break;

            case 3:
                    elementos_pares[i]=par;


            break;
            case 4:
                    elementos_pares[i]=par;


            break;
            case 5:
                    elementos_pares[i]=par;


            break;

            case 6:
                    elementos_pares[i]=par;



            break;

            case 7:
                    elementos_pares[i]=par;


            break;

            case 8:
                    elementos_pares[i]=par;



            break;
            case 9:
                    elementos_pares[i]=par;



            break;
             case 10:
                    elementos_pares[i]=par;



            break;

            case 11:
                    elementos_pares[i]=par;



            break;

            case 12:
                    elementos_pares[i]=par;



            break;
            case 13:
                    elementos_pares[i]=par;


            break;
           
           


         default :
                    elementos_pares[i]=par;


 
         break;

         }

         par=0;

      printf("\n");
	}

     
     for (int i = 0; i < Fila; i++)
     {
     	   printf("la fila %i tiene %i numeros pares\n",i,elementos_pares[i]);

     	
     }

  









       


	return 0;
}