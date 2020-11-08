#include<stdio.h>
int m;
int prime(int n)
{
	int i,flag=0;
    for(i=2;i<=n/2;i++)
	 {
    	if (n % i == 0) 
		{
        	flag = 1;
            break;
        }
     }
    if(flag == 0)
    	{
        	printf("%d\n", n);
            m=1;
		}
        else
        m=0;
}
int rprime()
{
	int i,k;
	printf("enter the number: ");
	scanf("%d",&k);
	printf("prime numbers are: ");
    for(i=1;i<=k;i++)
    {
    if (i== 1) 
    printf("1 is neither prime nor composite\n");
    else
	prime(i);    	
	}
}
int nprime()
{
	int i=2,k,l=0;
	printf("enter the number: ");
	scanf("%d",&k);
	printf("prime numbers are: ");
	while(l!=k)
	 {
	  prime(i);
	  ++i;
	  if(m==1)
	  l++;
	 }    	
}
int main()
{
	printf("\t\t\t\t\tWelcome!!!!!\n");
	printf("Hey,user to find n prime number enter 1\n");
	printf("To find prime number between range enter 2\n\n");
	int l;
	printf("Enter the option: ");
	scanf("%d",&l);
	if(l==1)
	nprime();
	else if(l==2)
	rprime();
	else
	printf("Enter the valid option");
}
