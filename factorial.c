#include<stdio.h>
 factorial()

{
  int i,f=1,num;
 
  printf("\n\nEnter a number: ");
  scanf("%d",&num);
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d\n",num,f);
  return 0;
}
