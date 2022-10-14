#include "lotoSortC.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int tipoJogo;

void run()
{

	int continuar = 0;
   while ( true )
   {
      int tipoJogo;
      
      printf("\n");
      printf("======= lotoSort ========\n");
      printf("_________________________\n");
      printf("| - Jogos disponíveis - |\n");
      printf("|-----------------------|\n");
      printf("| 1 - Quina             |\n");
      printf("| 2 - Mega-Sena         |\n");
      printf("| 3 - LotoMania         |\n");
      printf("| 4 - LotoFácil         |\n");
      printf("|-----------------------|\n");
      printf("Digite o número do tipo de sorteio: \n> ");
      scanf("%d", &tipoJogo);

      if ( tipoJogo == 1 )
      {
         system("clear");
         printf("Quina\n");
         quina();
         printf("\n");
      } else if ( tipoJogo == 2)
      {
         system("clear");
         printf("Mega-Sena\n");
         sena();
         printf("\n");
      } else if ( tipoJogo == 3 )
      {
         system("clear");
         printf("LotoMania\n");
         mania();
         printf("\n");
      } else if ( tipoJogo == 4 )
      {
         system("clear");
         printf("LotoFácil\n");
         facil();
         printf("\n");
      } else {
         system("clear");
         printf("Opção inválida, tente novamente\n\n");
      }
      
      printf("Deseja gerar mais números: [1 = Sim / 2 = Não]\n> ");
      scanf("%d", &continuar);
      if (continuar == 2) {
         break;
      }
   }


}

void showMenu()
{
   printf("\n");
   printf("======= lotoSort ========\n");
   printf("_________________________\n");
   printf("| - Jogos disponíveis - |\n");
   printf("|-----------------------|\n");
   printf("| 1 - Quina             |\n");
   printf("| 2 - Mega-Sena         |\n");
   printf("| 3 - LotoMania         |\n");
   printf("| 4 - LotoFácil         |\n");
   printf("|-----------------------|\n");
   printf("Digite o número do tipo de sorteio: \n> ");
   scanf("%d", &tipoJogo);   
}

void quina() 
{
    srand(time(NULL));
    
    for ( int i = 0; i < 5; ++i )
    { 
       if ( i < 4 )
      {
         printf("%d - ", 1 + rand() % 80);
      } else
      {
         printf("%d", 1 + rand() % 80);
      }
    }
}

void sena()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 6; ++i )
    { 
        if ( i < 5 )
        {
            printf("%d - ", 1 + rand() % 60);
        } else 
        {
            printf("%d", 1 + rand() % 60);
        }
    }
}

void mania()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 6; ++i )
    { 
        if ( i < 5 )
        {    
            printf("%d - ", 1 + rand() % 60);
        } else 
        {
            printf("%d", 1 + rand() % 60);
        }
    }
}

void facil()
{
    srand(time(NULL));
    
    for ( int i = 0; i < 15; ++i )
    { 
        if ( i < 14 )
        {
            printf("%d - ", 1 + rand() % 25);
        } else 
        {
            printf("%d", 1 + rand() % 25);
        }
    }
    
}
