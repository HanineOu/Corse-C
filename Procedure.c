#include<stdio.h>
#include<stdlib.h>
void int main()
{
    while (1==1)
    {
        int P;
        printf("Choisir un programme %d \n ")
        scanf("%d", &P)
        swich (P)
        {
        case 1:
            {
                P1();
                break;
            }
        case 2:
            {
                P2();
                break;
            }
        case 3:
            {
                P3();
                break;
            }
        case 4:
            {
                P4();
                break;
            }
        case 5:
            {
                P5();
                break;
            }
        }
    }

    void P1()
    {
        fprintf("Hello P1");
    }

    void P2()
    {
        fprintf("Hello P2");
    }
    void P3()
    {
        fprintf("Hello P3");
    }
    void P4()
    {
        fprintf("Hello P4");
    }
    void P5()
    {
        fprintf("Hello P5");
    }
