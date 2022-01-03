
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	float aire;
	printf("Entrer le grand rayon a: ");
	scanf("%d",&a);
	printf("Entrer le petit rayon b: ");
	scanf("%d",&b);
	aire=3.14*a*b;
	if(aire>=100){
	   printf("L'aire de cette ellipse est superieure a 100.\n");}
	else{
	   printf("L'aire de cette ellipse est inferieure a 100.\n");}
	system("pause");
	return 0;
}
