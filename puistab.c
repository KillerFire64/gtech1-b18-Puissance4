#include <stdio.h>

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
printf("\n");
  return 0;
}
