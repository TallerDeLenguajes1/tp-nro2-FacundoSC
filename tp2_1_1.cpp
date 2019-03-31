
#include <stdio.h>
#include <conio.h>

#define N 4
#define M 5


int main(int argc, char const *argv[])
{
	
int f,c;
int mt[N][M];
 int i;
   i = 0;

for(f = 0;f<N; f++)
{
 for(c = 0;c<M; c++)
{
	mt[f][c]=i;
	i++;

printf("%4i", mt[f][c]);
}
printf("\n");
}

