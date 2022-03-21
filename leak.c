#include<stdio.h>
int main()
	{
	int incoming,outgoing,buf_size,store=0,n,drop;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the Outgoing Packets:\n");
	scanf("%d",&outgoing);
	printf("Enter the Buffer size:\n");
	scanf("%d",&buf_size);
	while(n!=0)
		{
		printf("\nEnter Incoming packet..\n");
		scanf("%d",&incoming);
		if(incoming<=(buf_size-store))
		{
			store+=incoming;
		}
		else
		{
			printf("%d Packet is dropped\n",incoming-(buf_size-store));
			store=buf_size;
		}
		
			printf("Buffer contains %d out of %d\n",store,buf_size);
			store=outgoing;
			printf(" \nAfter outgoing %d packets left in buffer",store);
			n--;
		}
	}
			
