//
// Created by swdiag on 2021/6/16.
//

// Listing 程序清单 1.1 Example of C Source Code

#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dogs(s)!\n", dogs);

    return 0;
}