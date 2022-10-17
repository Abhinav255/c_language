#include<stdio.h>
int main()
{
	printf("Area of circle\n");
	float PI,r,carea;
	printf("enter value of radius \n");
	scanf("%f",&r);
	PI=3.14;
	carea=PI*r*r;
	printf("Area of circle with radius %f is %f \n",r,carea);
	
	printf("\nArea of triangle\n");
	float b,h,tarea;
	printf("enter value of breadth \n");
	scanf("%f",&b);
	printf("enter value of height \n");
	scanf("%f",&h);
	tarea=0.5*b*h;
	printf("Area of triangle is %f \n",tarea);
	
	printf("\nArea of rectangle\n");
	float len,bre,rarea;
	printf("enter value of breadth \n");
	scanf("%f",&bre);
	printf("enter value of length \n");
	scanf("%f",&len);
	rarea=len*bre;
	printf("Area of rectangle is %f \n",rarea);

}