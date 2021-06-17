//
// Created by swdiag on 2021/6/17.
//

// Listing 2.5 The stillbad.c Program
/* stillbad.c -- a program with its syntax errors fixed */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;

/* this program has a semantic error */
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d, n squared = %d, n cuded = %d\n", n, n2, n3);

    return 0;
}
