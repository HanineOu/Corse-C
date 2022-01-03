#include <stdio.h>
 int Tab1[3]={0,1,2};
 int Tab2[3]={3,4,5};
 int Tab3[6];
 //int Tab4[5]={5,6,7,8,16};
main() {
 Affectation(Tab1, Tab2, 0,3);
 for (int i=0; i<6; i++){
       printf("%d \n",Tab3[i]);
 }
}

int Affectation(Tab1, Tab2, s,t){
    for (int i=s; i<3; i++){
    Tab3[i]=Tab1[i];
    Tab3[i+t]=Tab2[i-t];
    }
return 0;
}

