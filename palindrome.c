#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h>


bool isPalindrome(int x);

int main(void)
{
    int a;

    printf("Select a number: ");
    scanf("%d", &a);

    if (isPalindrome(a))
    {
        printf("\nThe number %d is a palindrome\n", a);
    }
    else
    {
        printf("\nThe number %d is not a palindrome\n", a);
    }

    return 0;
}

bool isPalindrome(int x)
{
    if ((x < 0) || ((x % 10 == 0) && (x != 0)))
    {
        return false;
    }

    long int revertx = 0;
    long int q = x;

    while (q)
    {
        revertx = revertx * 10 + q % 10;
        q /= 10;
    }


    if (x == revertx)
    {
        return true;
    }
    return false;
}