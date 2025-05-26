#include <stdio.h>

int int_even_odd(int zahl1)
{

  if (zahl1 == 0)
  {
    return 0;
  }
  if (zahl1 % 2 == 0)
  {
    return 2;
  }
  else
  {
    return 1;
  }
}
int main(int argc, char **argv)
{
//Aufgabe 1 ------------------------------------------------------------------------------------------

int zahl1 = 0;
printf("geben sie eine zahl ein die geprüft werden soll:%d",zahl1);
scanf("%d",&zahl1);
printf("%d",int_even_odd(zahl1));

//Aufgabe 2 -------------------------------------------------------

int array1[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
for (int i = 0; i < 10; i++)
{
  printf("Zahl%d: %d\n ",i + 1, array1[i]);
}



//Aufgabe 3 ---------------------------------------------------------------------------
/*

int array2[5];
for (int i = 0; i < 5; i++)
{
  printf("geben sie die zahlen nach der reihe ein:%d",array2);
  scanf("%d",array2)
}

*/

}
