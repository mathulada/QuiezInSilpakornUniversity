#include <stdio.h>
int ar[1000][1000];
void main()
{
    int K;
    int sum1=0 , sum2=0 , sum3=0;
    scanf("%d",&K);
    int center=K/2;

    for (int r=0 ; r<K ; r++)
    {
        for (int c=0 ; c<K ;c++)
        {
            scanf("%d",&ar[r][c]);
        }
    }

    /*for (int r=0 ; r<K ; r++)
    {
        for (int c=0 ; c<K ;c++)
        {
            //printf("(%d %d)",r,c);
            printf("%d ",abs(c+center));
        }
        printf("\n");
    }*/

    for (int r=0 ; r<K ; r++)
    {
        for (int c=0 ; c<K ;c++)
        {
            int Cr=abs(r-center);
            int Cc=abs(c-center);
            printf("%d %d  ",Cr,Cc);

            /*if (Cr==0 && Cc==0)
            {
               sum1+=ar[r][c];
            }
            /*else if (Cr==1 || Cc==1)
            {
                sum2+=ar[r][c];
            }
            else if (Cr==K/2 || Cc==K/2)
            {
                sum3+=ar[r][c];
                printf("%d",ar[r][c]);
            }*/
        }
        printf("\n");
    }


    //printf("%d",sum);
}
