#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	double y;
	printf("pls enter the 1st value of your triangle");
		scanf("%lf", &x);
	printf("pls enter the 2nd value of your triangle");
		scanf("%lf", &y);
	double z = sqrt((x * x)+(y * y));
		printf("the hypotenuse= %f", z);
return 0;
}
