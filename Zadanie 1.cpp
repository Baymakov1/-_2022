\\создать 4 переменных разного типа, продемонстрировать работу четырех
\\арифметических операторов на выбор

#include <stdio.h>

int main()
{
    int First  = 4;
    long Second = -89;
    float Third = 16.25;
    double Fourth = 3.14159265;

    int operation_1 =  First * Third;
    int operation_2 = Second + Second;
    double operation_3 = First / Fourth;
    double operation_4 = First * Fourth - Second / Third;

    printf ("operation_1 = %d\n", operation_1);
    printf ("operation_2 = %d\n", operation_2);
    printf ("operation_3 = %f\n", operation_3);
    printf ("operation_4 = %f\n", operation_4);

    return 0;
}
