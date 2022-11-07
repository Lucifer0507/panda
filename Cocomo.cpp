#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	float kloc;
	float o[4] = {2.4,1.05,2.5,0.38};
	float s[4] = {3.0,1.12,2.5,0.35};
	float e[4] = {3.6,1.20,2.5,0.32};	
	int i,sel;
	float effort,time;
	int person;

	printf("\nEnter KLOC of project: ");
	scanf("%f",&kloc);
	
	printf("\n--------------Organic Projec--------------t");
	effort = o[0] * pow(kloc,o[1]);
	time = o[2] * pow(effort,o[3]);
	person = effort/time;
	printf("\nEffort: %f PM \nTime: %f PM\nPerson req.: %d",effort,time,person);	

	printf("\n--------------Semi-Organic Project--------------");
	effort = s[0] * pow(kloc,s[1]);
	time = s[2] * pow(effort,s[3]);
	person = effort/time;
	printf("\nEffort: %f PM \nTime: %f Pm\nPerson req.: %d",effort,time,person);

	printf("\n--------------Embedded  Project-------------------");
	effort = e[0] * pow(kloc,e[1]);
	time = e[2] * pow(effort,e[3]);
	person = effort/time;
	printf("\nEffort: %f PM \nTime: %f PM\nPerson req.: %d",effort,time,person);
	
	getch();
	return 0;
}
