#include<stdio.h>
main ()
{
    int mag=3,a;
    while(1==1)
    {

        do
        {
            printf ("saisissez un nombre \n");
            scanf("%d",&a);
            if(a>mag)
            {
                printf("vous etes au-dessous du nombre magique,reesayez \n");
            }
            else if (a<mag)
            {
                printf("vous etes en dessus du nombre magique,reesayez \n");
            }
            else
            {
                printf("vous avez trouve le nbre magique, quelle chance! \n",a);
            }
        }
        while (a!=mag);
    }

}
