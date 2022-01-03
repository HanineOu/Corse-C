#include<stdio.h>
#include<stdlib.h>
main (){
int cote1,cote2,cote3;
printf("entrer la longueur du  cote1 et cote2 et cote3 du triangle \n");
scanf("%d %d %d",&cote1,&cote2,&cote3);
printf("la longueur des cotes est la suivante %d et %d et %d  :\n",cote1,cote2,cote3);
if(cote1==cote2 && cote1==cote3){
    printf("le triangle est un equilateral ");
}
else if (cote1==cote2 || cote1==cote3 || cote3==cote2){
    printf("le triangle est un isocele");
}
else {
    printf("le triangle est un scalene");
}

}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    char line[100];
//    scanf("%[^\n]",line);
//    printf("Hello,World\n");
//    printf("%s",line);
//    return 0;
//}

\b - (backspace) this is used for back space purpose

\t - (horizontal line) this is used for representing the line in the horizontal form

\v - (vertical line) this is used for representing the line in vertical form
