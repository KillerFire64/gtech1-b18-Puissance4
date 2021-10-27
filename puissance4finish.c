#include <stdio.h>
#include <stdlib.h>

char tokens[] = "ox";
int joueur = 0;

#define NBL 6 //variable global des ligne du tableaux
#define NBC 7 //varible  global des colonnes du tableaux 

char tab[NBL][NBC];
int l;
int c;

int full (void) //fonction pour sortir du jeu (cette fonction test toute les case du tableaux)
{
 int x;
 int y;
 int jetons = 0;
  for(x=0;x<NBL;x++;)
  {
   for(y=0;y<NBC;y++;)
   {
    if(tab[x][y]!='.')
    {
     jetons++;
    }
   }
  }
 return jetons<(NBL*NBC-1);
}
void init(void) //fonction pour initialiser le tableaux
{
  for( l=0;l<NBL;l++)
  {
    for( c=0;c<NBC;c++)
    {
      tab[l][c] = '.';
    }
  }
}

void print(void) //fonction pour afficher le tableaux
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


int es = 5;
int e = 0;
int main(void)
{
  init();
  print();
  full();

  joueur = 0;
  while(e<full) //boucle de jeu
  {
    if (tab[es][0]!='.')
    {
      es--;
      tab[es][0]=tokens[joueur];
    }
     else if(tab[es][0]=='.')
     {
      tab[es][0]=tokens[joueur];
     }
    print();
    printf("\n");
    e++;
    joueur=!joueur; //inversion de joueur
  }
  return 0;
}
