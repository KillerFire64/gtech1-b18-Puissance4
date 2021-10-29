#include <stdio.h>
#include <stdlib.h>

char tokens[] = "ox";
int joueur = 0;
int colonne_choisie;

#define NBL 6 //variable globale des lignes du tableau
#define NBC 7 //variable globale des colonnes du tableau

char tab[NBL][NBC];
int l;
int c;

int full (void) //fonction pour sortir du jeu (cette fonction test toutes les cases du tableau)
{
 int x;
 int y;
 int jetons = 0;
  for(x=0;x<NBL;x++)
  {
   for(y=0;y<NBC;y++)
    {
     if(tab[x][y]!='.')
     {
      jetons++;
     }
    }
  }
 return jetons==(NBL*NBC-1);
}

void init(void) //fonction pour initialiser le tableau
{
  for( l=0;l<NBL;l++)
  {
    for( c=0;c<NBC;c++)
    {
      tab[1][c] = '.';
    }
  }
}

void print(void) //fonction pour afficher le tableau
{
  int n;
  for(l=0;l<NBL;l++)
  {
    for( c=0;c<NBC;c++)
    {
      printf("%c ", tab[1][c]);
    }
    printf("\n");
  }
 for(n=0;n<NBC; n++)
 {
  printf("%d ", n);
 }
printf("\n");
}


void flushstdin()
{
  int c;
  while((c = getchar()) != '\n' && c != EOF);
}

int jeton_ok = 0;
int es = 5;
int main(void)
{
  init();
  print();
  full();

  joueur = 0;
   while(!full()) //boucle de jeu
   {
    do
    {
     printf("Bienvenue dans \"Puissance 4\" !\n");
     printf("Entrez l'indice de la colonne dans laquelle vous souhaitez jouer:");
     int retour = scanf("%d", &colonne_choisie);
     if(retour != 1)
     {
     printf("Seules sont acceptées les valeurs numériques entières!");
     flushstdin();
     continue;
     }
     int colonne_indice = colonne_choisie - 1;
     if( colonne_choisie <7  &&  colonne_choisie >-1 )
     {
     printf("Colonne choisie: %d\n", colonne_choisie );
     jeton_ok =1;
     }
     else
     {
     printf("Veuillez respecter les dimensions de votre tableau (6X7)!\n");
     continue;
     }

    } while(!jeton_ok);
     {
      if (tab[es][colonne_choisie]!='.')
      {
       tab[es][colonne_choisie]=tokens[joueur];
      }
      else if (tab[es][colonne_choisie]=='.')
      {
       tab[es][colonne_choisie]=tokens[joueur];
      }
       es--;
       print();
       printf("\n");
       joueur=!joueur; //inversion de joueur
     }
  }
  return 0;
}


