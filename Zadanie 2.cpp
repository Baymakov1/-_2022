#include <stdio.h>

int main()
{
    int i = 0;
    int j = 1;
    int z = 0;
    printf ("Числа от 1 до 100 с делением без остатка на 3:""\n");
    while (i<=100)
    {
        if (i%3==0)
        printf (" " "%d", i  );
        i = i + 1; 
    }
    printf ("\n""Из чисел от 1 до 1000 с шагом 4 выделили те, которые делятся без остатка на 7:""\n");
    do
    {
        //printf (" ""%d",j );
        j = j + 4;
        if ((j%7==0)&&(j<1000))
        (z = z + j,
        printf (" ""%d",j ));
        
       // printf ("\n");
        //printf ("""%d",z );
    }
    while (j<1000);
    printf ("\n""Сумма сумма этимх чисел:  ""%d", z);
    return 0;
}
