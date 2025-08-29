#include <stdio.h>

#define LINHAS  10
#define COLUNAS 10       // Define 3 contastantes, que definem o tamanho dos arrays.
#define NAVIOS  3

int main(){


   int tabuleiro[LINHAS][COLUNAS];                 // Declara o array 10 x 10 mas não o inicia.

  

   for (int i = 0; i < LINHAS; i++)
   {
      for (int j = 0; j < COLUNAS; j++)           // Laço externo itera as linhas do tabuleiro, laço interno itera as colunas passando por cada elemento.
      {
         
         tabuleiro[i][j] = 0;                    // A cada iteração é adicionado 0 em cada elemento.
                 
      }
   }


   for (int i = 0; i < 3; i++)
   {
      if (tabuleiro[0][i] == 0)
      {                                          // Adiciona navio 1 horizontal ao tabuleiro.
         tabuleiro[0][i] = NAVIOS;
      }
      
   }


   for (int i = 5; i < 8; i++)
   {   

      if (tabuleiro[i][2] == 0)
      {                                         // Adiciona navio 2 vertical ao tabuleiro.
         tabuleiro[i][2] = NAVIOS;
      }

   }
                                              
    
   
   for (int i = 0; i < 3; i++)
   {   

      if (tabuleiro[1 + i][4 + i] == 0)
      {                                         // Adiciona navio 3 diagonal a esquerda ao tabuleiro.
         tabuleiro[1 + i][4 + i] = NAVIOS;
      }

   }
   

   for (int i = 0; i < 3; i++)
   {   

      if (tabuleiro[6 + i][6 - i] == 0)
      {                                         // Adiciona navio 4 diagonal a direita ao tabuleiro.
         tabuleiro[6 + i][6 - i] = NAVIOS;
      }

   }

    
   for (int i = 0; i < LINHAS; i++)
   {
      for (int j = 0; j < COLUNAS; j++)
      {                                         // itera sobre cada elemento da matriz para exibi-los
         printf("%d  ", tabuleiro[i][j]);
      }
      printf("\n");                            // Faz uma quebra a cada 10 elementos, formando o 10 x 10.
   }
   

    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
