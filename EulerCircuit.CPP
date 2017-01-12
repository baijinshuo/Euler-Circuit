#include<stdio.h>
#define  N  11
struct str
{
   char v1;
   char v2;
}e1[N],e2[N],e3;
void main()
{
    int i,j,n,k=1;
    char m,q;
    printf("Please input the edge:");
    for(i=0;i<N;i++)
      scanf("%c%c",&e1[i].v1,&e1[i].v2);

    m=e1[0].v1;
    q=e1[0].v2;

	for(i=0;i<N;i++)
		e2[i]=e1[i];

    do
	{
		n=0;
		m=e1[0].v1;
		q=e1[0].v2;
		printf("%c%c  ",m,q);
		for(i=1;i<N;i++)
		{
			for(j=1;j<N;j++)
			{  
				if(q==e1[j].v1)
				{
					printf("%c%c  ",e1[j].v1,e1[j].v2);
					q=e1[j].v2;
					e1[j].v1=0;
					e1[j].v2=0;
					n++;
					break;
				}
				if(q==e1[j].v2)
				{
					printf("%c%c  ",e1[j].v2,e1[j].v1);
					q=e1[j].v1;
					e1[j].v1=0;
					e1[j].v2=0;
					n++;
					break;
				}
			}
		}
		e3=e2[k];
		e2[k]=e2[n-2];
		e2[n-2]=e3;
		for(i=0;i<N;i++)
			e1[i]=e2[i];

		k++;
		printf(" %d\n",n+1);
   }while(n<N-1&&k<N);
}