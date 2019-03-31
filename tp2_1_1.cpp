
#include <stdio.h>

#define N 4
#define M 5


int main(int argc, char const *argv[])
{
	
int f,c;
int mt[N][M];

for(f = 0;f<N; f++)
{
 for(c = 0;c<M; c++)
{
printf("%i", mt[f][c]);
}
printf("\n");
}




	return 0;
}
