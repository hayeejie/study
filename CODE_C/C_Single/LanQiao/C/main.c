#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float a,b,c,d,e;
	while(~scanf("%f%f%f",&a,&b,&c))
	{
		d = a + b + c;
		e = d / 3 ;
		printf("%.0f\n%.2f\n",d,e);
	}
	return 0;
}
