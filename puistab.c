#include <stdio.h>

char tokens[]="ox";
int joueur=0;

#define NBL 6
#define NBC 7

int tab[NBL][NBC];

void init(void) {
  for(int l=0;l<NBL;l++) {
    for(int c=0;c<NBC;c++) {
      tab[l][c] = '.';
    }
  }
}
int t;
int n;
int main(void)
{
  init();
  for(int l=0;l<NBL;l++)
  {
    for(int c=0;c<NBC;c++)
    {
      printf("%c ", tab[l][c]);
    }
    printf("\n");
  }
 for(n=1; n<=NBC; n++)
 {
  printf("%d ", n);
 }
  for(t=0; t<=3; t++)
  {
    joueur=!joueur;
    tokens[0]= 'o';
    tokens[1]= 'x';
    printf("%c",tokens[joueur]);
  }
printf("\n");
  return 0;
}
