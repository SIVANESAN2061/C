#include <stdio.h>

int main() {
	int n;
	printf("enter the n th number of series:\n");
	scanf("%d",&n);
	if(n%2==0)
	printf("%d is a even number",n);
	else
	printf("%d is a odd number",n);
	return 0;
}