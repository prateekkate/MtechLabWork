//Roll No: 19mcmt26
//Name : Prateek Kate
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main(int argc, char const *argv[])
 {
  int i,j,n,key;
  double total_time;
  clock_t start,end;
  FILE *k,*p;

  // reading input file
  k = fopen(argv[1],"r");
 
  // output file
   p = fopen(argv[2],"w");
  
  // read the first number of input file
  fscanf(k,"%d",&n);

  int arr[n];

  for(i=0;i<n;i++)
  {
    fscanf(k,"%d",&arr[i]);
  }
  // time count start
  start = clock();
  
  // insertion sort
   
   for(i=1;i<n;i++)
     {
        key = arr[i];
        j = i-1;

         while(j>=0 && arr[j] > key)
       {
          arr[j+1] = arr[j];
          j--;   
       }
      arr[j+1] = key;
    }
   
   // time count ends
   end = clock();
  
   total_time = ((double) (end - start)) / CLOCKS_PER_SEC;

  // calculate total time
  printf("\nTime taken by Insertion sort to sort elements is: %f",total_time);
 
  // writing in o/p file

  for(i=0;i<n;i++)
  {
    fprintf(p,"%d\n",arr[i]);
  }

  fclose(p);
  fclose(k); 
   	
  return 0;
}
