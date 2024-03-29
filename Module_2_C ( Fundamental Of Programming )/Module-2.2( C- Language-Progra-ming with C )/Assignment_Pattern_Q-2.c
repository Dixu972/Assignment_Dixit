/*Pattern_2).
              A 
              B C 
			  D E F
			  G H I J
			  K L M N O
*/
#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%2c",(char)(k+64));
        }
         printf("\n");
    }
	
	return 0;
}
