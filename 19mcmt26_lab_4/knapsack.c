//Name:Prateek Kate
//Roll No: 19mcmt26
#include<stdio.h>
#include<stdlib.h>
int max(int x, int y);
int main(int argc,char const *argv[])
{
  FILE *r,*w;
  r = fopen(argv[1],"r");

  w = fopen(argv[2],"w+");
  int W;
  fscanf(r,"%d",&W);

  int n;
  fscanf(r,"%d",&n);

  int pr[n],wgt[n];
  
  int i,j;
  for(i=0;i<n;i++)
   fscanf(r,"%d",&pr[i]);
 
  for(i=0;i<n;i++)
    fscanf(r,"%d",&wgt[i]);
 

  int knap[n+1][W+1];

   for(i=0;i<n+1;i++)
   {
     for(j=0;j<W+1;j++)
      {
   
       if(i==0 || j==0)
        knap[i][j] = 0;       

       else if(wgt[i-1] > j)
         knap[i][j] = knap[i-1][j];
    
        else 
        knap[i][j] = max(pr[i-1] + knap[i-1][j-wgt[i-1]] , knap[i-1][j]); 
       
      }

   }
 
  for(i=0;i<n+1;i++)
  {
   for(j=0;j<W+1;j++)
    printf("%d \t",knap[i][j]);

    printf("\n");
 }

  fprintf(w,"%d\n",knap[n][W]);

  int max = knap[n][W];
  int x = n;
  int sol[n];
  for(i=0;i<n;i++)
    sol[i] = 0;

  // Backtracking solution
  while(max!=0)
   {
     if(knap[n][W] == knap[n-1][W-wgt[n-1]] + pr[n-1])
      {
        sol[n-1] = 1;
        W = W - wgt[n-1];
        max = max - pr[n-1];
        n = n-1;
      }
      
      else
        {
            n = n-1;
        }
     }
 
   
   for(i=0;i<x;i++)
      fprintf(w,"%d \t",sol[i]);

   fprintf(w, "\n");

   // Printing slution vector
   for(i=0;i<x;i++)
    {
      if(sol[i]==1)
        fprintf(w,"%d ",i+1);
    }


  

  fclose(r);
  fclose(w);
  return 0;

}

int max(int a , int b)
{
  if(a > b)
    return a;
  else
    return b;

}
