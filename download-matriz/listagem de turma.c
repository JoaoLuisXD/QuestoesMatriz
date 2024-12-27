#include <stdio.h>
#include <stdlib.h>
int main()
{

   float n1[4],n2[4],media[4], somadasmed=0,mediadaturma=0;
   int tot=0;

   for(int i=0; i<=3; i++)
   {

      printf("ALUNO %d\n", i+1);
      printf("primeira nota: ");
      scanf("%f",&n1[i]);
      printf("segunda nota: ");
      scanf("%f",&n2[i]);
      media[i] = (n1[i]+n2[i]) / 2;
      somadasmed = somadasmed + media[i];
    }
    mediadaturma = somadasmed / 4;
    for(int i=0; i<=3; i++)
   {
        printf("\naluno %d\n", i+1);
        printf("media = |%.2f|", media[i]);
        if(media[i]>mediadaturma)
        {
            tot = tot + 1;
        }

   }
   printf("\n------------------------------------------------------------");
   printf("\nEXISTEM ( %d ) ALUNOS ACIMA DA MEDIA DA TURMA, QUE E: %.2f", tot, mediadaturma);
   printf("\n------------------------------------------------------------");







   return 0;
}
