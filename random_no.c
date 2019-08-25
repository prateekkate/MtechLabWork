#include<stdio.h>
#include<stdlib.h>
int main(int argc,char const *argv[])
{
  FILE *r;
  int c,n;

  r = fopen("in_randdup5000.txt","w+");

  fprintf(r,"5000\n");
  srand(97);

  for(c=1;c<=5000;c++)
   {
     n = (rand() % 25);
     fprintf(r,"%d\n",n);
   
   }
  
   fclose(r);

   return 0;

}
