#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rd()
{
    int rem;
A:
    rem = rand() % 7;
    if (rem == 0)
        goto A;
    else
        return rem;
}

void win(int a[10][10], int p1, int p2)
{
    if (p1 >= 100 || p2 >= 100)
        printf("\nCongratulations Player 1 won the game");
    else if (p2 >= 100)
        printf("\nCongratulations Player 2 won the game");
}

void display(int a[10][10], int p1, int p2)
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (((p1 == p2 && p1 != 0) && p2 != 0) && a[i][j] == p1)
                printf("*P1*P2 |\t");
            else if (a[i][j] == p1)
                printf("P1\t|\t");
            else if (a[i][j] == p2)
                printf("P2\t|\t");
            else
                printf("%d\t|\t", a[i][j]);
        }
        printf("\n");
        if (i < 9)
        {
            for (int k = 0; k < 77; k++)
            {
                printf("-");
            }
            printf("\n");
        }
    }
}

int main()
{
    int i, j, k, a[10][10], min, temp, l;
    k = 100;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            a[i][j] = k;
            k--;
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            for (k = 0, l = 9; k < l; k++, l--)
            {
                temp = a[i][k];
                a[i][k] = a[i][l];
                a[i][l] = temp;
            }
        }
    }
    int p1 = 0, p2 = 0, d, p, c6 = 0;
    printf("\t\t\t***SNAKE AND LADDERS***\n");
    printf("1. Player 1\n2. Player 2\n3. Exit\n\n");
    display(a, p1, p2);
    for (int i = 0; p1 <= 100 && p2 <= 100; i++)
    {
    SC:
        printf("\nEnter the player number\n");
        scanf("%d", &p);
        d = rd();
        if (p == 1)
        {
            p1 = p1 + d;
            if (p1 == 51) //snake
                p1 = 11;
            else if (p1 == 56)
                p1 = 15;
            else if (p1 == 62)
                p1 = 57;
            else if (p1 == 92)
                p1 = 53;
            else if (p1 == 98)
                p1 = 8;
            else if (p1 == 2) //ladder
                p1 = 38;
            else if (p1 == 4)
                p1 = 14;
            else if (p1 == 9)
                p1 = 31;
            else if (p1 == 33)
                p1 = 85;
            else if (p1 == 52)
                p1 = 88;
            else if (p1 == 80)
                p1 = 99;
        }
        else if (p == 2)
        {
            p2 = p2 + d;
            if (p2 == 51) //snake
                p2 = 11;
            else if (p2 == 56)
                p2 = 15;
            else if (p2 == 62)
                p2 = 57;
            else if (p2 == 92)
                p2 = 53;
            else if (p2 == 98)
                p2 = 8;
            else if (p2 == 2) //ladder
                p2 = 38;
            else if (p2 == 4)
                p2 = 14;
            else if (p2 == 9)
                p2 = 31;
            else if (p2 == 33)
                p2 = 85;
            else if (p2 == 52)
                p2 = 88;
            else if (p2 == 80)
                p2 = 99;
        }
        else
            printf("Invalid input\n");
        display(a, p1, p2);
        printf("The Dice rolled is %d\n", d);
        printf("Player 1: %d\n", p1);
        printf("Player 2: %d\n", p2);
        if (d == 6)
        {
            if (c6 < 3)
            {
                printf("Player %d has got another chance\n", p);
                goto SC;
            }
            else
            {
                printf("Three consecutive sixes!\n");
                c6 = 0;
            }
        }
        win(a, p1, p2);
    }
    return 0;
}
