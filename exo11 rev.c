#include<stdio.h>
main (){
 int n,a;
 printf("entrez un entier impair n \n");
 scanf("%d",&n);
 a=(n*n+3)*(n*n+7);
 printf("la valeur de (%d*%d+3)*(%d*%d+7) est egal a %d \n",n,n,n,n,a);
 if(a%32==0){
    printf("32 divise %d",a);
 }
else{
    printf("32 ne divise pas  %d",a);
}





















}
