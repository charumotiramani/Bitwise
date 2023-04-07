#include <stdio.h>
#include <stdlib.h>

int main()
 {
   int a,count=0;
   scanf("%d", &a);
   do
   {
   	if(a&1)
	{
	count++;
   	}
   	a=a>>1;
   }
   while(a!=0);
   printf("%d",count);
	return 0;
}
