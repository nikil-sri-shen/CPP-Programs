#include <stdio.h>
void Area_Circum(float,float *,float *);
int main()
{
	float r,area,circumference;
	printf("\t***TO FIND AREA AND CIRUMFERENCE OF CIRCLE USING POINTERS***");
	printf("\nEnter the radius:");
	scanf("%f",&r);
	Area_Circum(r,&area,&circumference);
	printf("\nArea of the circle:%f",area);
	printf("\nCircumference of the circle:%f",circumference);
	return 0;
}
void Area_Circum(float r,float *a,float *c)
{
	*a=3.14*r*r;
	*c=3.14*r*2;
}
