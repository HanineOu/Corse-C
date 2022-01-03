#include<stdio.h>
#include<stdlib.h>
main()
{
    float s , a,b;

    printf("entrer le grand rayon a  \n" );
    scanf("%f",&a);
    printf("entrer le grand rayon b\n" );
    scanf("%f",&b);
    s =a*b*3.14;
    printf("%.2f \n",s);
    if (s>=100)
    {
        printf ("%.2f superieur a 100 \n",s);
    }

}

#include<stdio.h>
 #include<stdlib.h>
jljk()
{
    float a,b;
    float s;
    printf("entrer le grand rayon a  \n" );
    scanf("%f",&a);
    printf("entrer le grand rayon b\n" );
    scanf("%f",&b);
    s =a*b*3.14;
    printf("%.2f \n",s);
    if (s>=100)
    {
        printf ("%f superieur a 100 \n",s);
    }
    else
    {
        printf("%.2f est inferieur a 100 \n",s);
    }
}
