#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("veullez saisir le nombre de lignes:");
    scanf("%d",&x);
    for (int i=1;i<=x;i++){
      for (int k=1;k<=x-i;k++){
     printf(" ");
    }
     for (int j=1;j<=i;j++){
        printf("*");
        }
        for (int j=1;j<i*2-1;j++){
     printf("*");
    }
    printf ("\n");
    }
    return 0;
}
