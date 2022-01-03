#include<stdio.h>
#include<math.h>
main ()
{
    while (1==1){
    int  h1,h2,m1,m2,s1,s2 ;
    printf("entrez le premier instant \n");
    scanf("%d %d %d",&h1,&m1,&s1);
    printf("entrez le  deuxieme instant \n");
    scanf("%d %d %d",&h2,&m2,&s2);
    if(h1>h2)
    {
        printf("le deuxieme instant %d :%d :%d vient avant le premier %d :%d :%d \n",h2,m2,s2,h1,m1,s1);
    }
    else if (h1<h2)
    {

        printf("le premier instant %d :%d :%d vient avant le deuxieme %d :%d :%d \n",h1,m1,s1,h2,m2,s2);
    }
    if(h1==h2 && m1>m2)
    {
        printf("le deuxieme instant %d :%d :%d vient avant le premier %d :%d :%d \n",h2,m2,s2,h1,m1,s1);
    }
    else if (h1==h2&& m1<m2)
    {

        printf("le premier instant %d :%d :%d vient avant le deuxieme %d :%d :%d \n",h1,m1,s1,h2,m2,s2);

    }
    if (h1==h2 && m1==m2 && s1>s2)
    {
        printf("le deuxieme instant %d :%d :%d vient avant le premier %d :%d :%d \n",h2,m2,s2,h1,m1,s1);
    }
    else if (h1==h2 && m1==m2 && s1<s2)
    {

        printf("le premier instant %d :%d :%d vient avant le deuxieme %d :%d :%d \n",h1,m1,s1,h2,m2,s2);
    }
    if (h1==h2 && m1==m2&& s1==s2)
    {
        printf("il s agit du meme instant %d:%d:%d",h1,m1,s1);
    }
}
}
