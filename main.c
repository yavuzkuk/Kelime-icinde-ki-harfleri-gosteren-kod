#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char c[20];
	char *str;
	int i=0,j=0;
	int n,k;
	
	gets(c);
	str=c;
	while(c[i]!='\0')
	{
		i++;
	}

	for(j=65;j<123;j++)
	{
		n=0;
		for(k=0;k<i;k++)
		{
			if(str[k]==j)
			{
				n++;
			}				
		}
		
		if(n==0)
		continue;
		
		else
		printf("%c harfinden %d tane var\n",j,n);
	}
	
	return 0;
}
