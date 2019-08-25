#commands and output

1. For Part A:

> g++ quick.c                                                ⏎
> ./a.out in_random5000.txt out_random5000.txt                            ✭

> g++ quick.c
> ./a.out in_randsort5000.txt out_sort5000.txt

> g++ quick.c
>  ./a.out in_randdup5000.txt out_dup5000.txt


2. For part B:

> g++ quick2.c
> ./a.out in_randdup5000.txt w.txt   
 
Output: For Part A:
     
       1. For random order : Number of comparisons 289725 
                              Number of Swaps 12639 

  
        2. For sorted order(descending) : Number of comparisons 422405 
                                          Number of Swaps 10743 

 
        3. For duplicate elements : Number of comparisons 1023928 
                                    Number of Swaps 10548 

Output: For part B:

        The program will run in infinite loop because of this condition :  while ( A[i] < Pivot ) i++;
                                                                           while ( A[j] > Pivot ) j--­­;

                Here we are checking A[i] < pivot but in ideal case we should check for A[i] <= pivot here in first case the might never found the element less than pivot and go in infinite loop.

:Same is the case with the condition A[j] > pivot.    
