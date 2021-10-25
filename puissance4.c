#include <stdio.h>



char tokens[] = "ox";
int joueur = 0;

#define NBL 6
#define NBC 7

char tab[NBL][NBC];
int l;
int c;

void init(void)
{
  for( l=0;l<NBL;l++)
  {
    for( c=0;c<NBC;c++)
    {
      tab[l][c] = '.';
    }
  }
}

void print(void)
{
  int n;
  for( l=0;l<NBL;l++)
  {
    for( c=0;c<NBC;c++)
    {
      printf("%c ", tab[l][c]);
    }
    printf("\n");
  }
 for(n=1; n<=NBC; n++)
 {
  printf("%d ", n);
 }
printf("\n");
}



int e = 0;
int main(void)
{
  init();
  print();

  joueur = 0;
  while(e<4)
  {
    tab[e][e]=tokens[joueur];
    print();
    printf("\n");
    e++;
    joueur=!joueur;
  }
  return 0;
}
