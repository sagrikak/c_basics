#include <stdio.h>
#include <string.h>

int main()
{
	int i, n, t, j;
	scanf("%d%d", &n, &t);
	char q[n+1];
	scanf("%s", &q);
	for(i=0; i<t; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(q[j]=='B' && q[j+1]=='G')
			{
				q[j]='G';
				q[j+1]='B';
				j++;
			}
		}
	}
	printf("%s", q);
	return 0;
}