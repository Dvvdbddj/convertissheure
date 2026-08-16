#include <stdio.h>
#include <stdlib.h>

void decoupeheure(int *heures, int *minutes);

void decoupeheure(int *heures, int *minutes)
{
   *heures = *minutes / 60;
   *minutes = *minutes % 60;
}


int main()
{
   int heures = 0, minutes = 0;
   int *pointheures = &heures;
   int *pointminutes = &minutes;

   printf("entrez des minutes: ");
   scanf("%d", &minutes);

   decoupeheure(pointheures, pointminutes);
   printf("%d heure %d minutes.\n", *pointheures, *pointminutes);

   return 0;
}