//Name: Prateek Kate
//ROll No:19mcmt26
#include <stdio.h>
#include <time.h>
#include <math.h>
void big_n();
void big_n_square();
void big_n_cube();
void exponential();
int main()
{

    big_n();
    big_n_square();
    big_n_cube();
    exponential();

    return 0;
}

// calculate value of n in O(n) time
void big_n()
{
    clock_t start, end;
    int n = 0;
    double sec = 0;
    start = clock();
    while (sec < 1)
    {
        n++;
        end = clock();
        sec = (double)(end - start) / CLOCKS_PER_SEC;
    }
    printf("Value of n with O(n) complexity in 1 second::  %d\n", n);
}

// calculate value of n in O(n^2) time

void big_n_square()
{
    clock_t start, end;
    int n = 0;
    double sec = 0;
    int ci = 0;
    start = clock();
    while (sec < 1)
    {
        for (int i = 0;; i++)
        {
            n++;
            for (int j = 0; j < i; j++)
            {
                end = clock();
                sec = (double)(end - start) / CLOCKS_PER_SEC;
                if (sec >= 1)
                {
                    ci = 1;
                    break;
                }
            }
            if (ci == 1)
            {
                break;
            }
        }
    }
    printf("Value of n with O(n^2) complexity in 1 second::  %d\n", n);
}

// calculate value of n in O(n^3) time

void big_n_cube()
{
    clock_t start, end;
    int n = 0;
    double sec = 0;
    int ci = 0;
    start = clock();
    while (sec < 1)
    {
        for (int i = 0;; i++)
        {
            n++;
            for (int j = 0; j < i; j++)
            {
                for (int k = 0; k < i; k++)
                {
                    end = clock();
                    sec = (double)(end - start) / CLOCKS_PER_SEC;
                    if (sec >= 1)
                    {
                        ci = 1;
                        break;
                    }
                }
                if (ci == 1)
                {
                    break;
                }
            }
            if (ci == 1)
            {
                break;
            }
        }
    }
    printf("Value of n with O(n^3) complexity in 1 second::  %d\n", n);
}

// calculate value of n in O(2^n) time

void exponential()
{
    clock_t start, end;
    int n = 0;
    double sec = 0;
    int ci = 0;
    start = clock();
    while (sec < 1)
    {
        for (int i = 0;; i++)
        {
            n++;
            for (int j = 0; j < pow(2, i); j++)
            {

                end = clock();
                sec = (double)(end - start) / CLOCKS_PER_SEC;
                if (sec >= 1)
                {
                    ci = 1;
                    break;
                }
            }
            if (ci == 1)
            {
                break;
            }
        }
    }
    printf("Value of n with O(2^n) complexity in 1 second::  %d\n", n);
}
