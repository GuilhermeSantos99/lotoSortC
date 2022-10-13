#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "lotoSortC.h"

int main () {
   

   while (true) {
      
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
         printf("Opção inválida, tente novamente\n\n");
      }
   }

      
/*
      printf("Deseja gerar mais números: [1 = Sim / 2 = Não]\n> ");
      scanf("%d", &continuar);

      if (continuar == 2) {
         break;
      }

   }
*/
   return 0;
}
