#include<stdio.h>
#include<math.h>
int main()
{
		
	int base,power;
	printf("enter base:");
	scanf("%d",&base);
	printf("your base:%d\n",base);
	printf("enter power :");
	scanf("%d",&power);
	printf("your power : %d\n",power);
	a= pow(base,power);
	printf("your result is : %d",a);
	return 0;
}
