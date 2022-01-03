#include<stdio.h>
main ( ){

factoriel();
}



factoriel ()
{
    int n,f=1;
    printf("donner n \n");
    scanf("%d",&n);
    if (n>0)
    {
        for ( int i=1; i<=n; i++)
        {

            f=f*i;

        }
        printf("le factoriel de %d est : %d ",n,f);
    }
    else
    {
        printf("n doit etre strictement superieur a 0\n");
    }





}
choix(int x,int y,int a,int res)
{
    printf("donner x et y\n");
    scanf("%d",&x,&y);
    printf("donner a\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1 :
        res=x+y;
        break;

    case 2 :
        res=x-y;
        break;
    case 3 :
        res=x*y;
        break;
    case 4 :
        res=x/y;
        break;
    }
}
    multip()
{
    int a,mult;
    printf("donnez a \n");
    scanf("%d",&a);
    for(int i=1; i<10; i++)
    {
        mult=i*a;
        printf("%d *%d = %d\n",i,a,mult);
    }
}
nbrepremier(){
    int n;
    for(int i=2;i<=n;i++){

    }
}
