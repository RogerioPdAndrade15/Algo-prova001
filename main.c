#include <stdio.h>

void main () {
    int i, num;

    for (i=1; i<=20; i++)
        num= i%2;

        if (num%2 ==0)
            printf ("Soma dos Numeros pares:\n %d\n",i);

}
