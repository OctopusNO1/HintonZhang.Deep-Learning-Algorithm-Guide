//
// Created by swdiag on 2021/6/16.
//

// Listing 2.3 The two_func.c Program
// two_func.c -- a program using two functions in one file

#include <stdio.h>
void butler(void);  /* ANSI/ISO C function prototyping */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();   /* function call */
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)   /* function definition */
{
    printf("You rang, sir?\n");
}
