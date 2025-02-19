#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz [2][4], somanumerospares=0, contpar=0;
    float media=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(matriz[i][j] > 12 && matriz[i][j] < 20)
            {
                printf("\nnumeros maiores que 12 e menores que 20: |%d|", matriz[i][j]);
            }
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
           if(matriz[i][j]%2 == 0)
           {
               somanumerospares+=matriz[i][j];
               contpar++;
           }
        }
    }
    if(contpar > 0)
    {
        media = ((float)somanumerospares / contpar);
    }
    printf("\nmedia dos pares e: |%.2f|", media);


return 0;
}
