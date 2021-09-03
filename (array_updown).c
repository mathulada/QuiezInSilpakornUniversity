#include <stdio.h>
int ar[1000][1000];
void main ()
{
    int K;
    scanf ("%d",&K);
    int Up=0 , Down=0;

    for (int r=0 ; r<K ; r++)
    {
        for (int c=0 ; c<K ; c++)
        {
           scanf("%d",&ar[r][c]);
        }
    }

    for (int r=0 ; r<K ; r++)
    {
        for (int c=0 ; c<K ; c++)
        {
           //printf("(%d %d)",r,c);
           int A=r-c;
           if (A<0)
           {
               Up+=ar[r][c];
               //printf("%d",ar[r][c]);
           }
           else if (A>0)
           {
               Down+=ar[r][c];
               //printf("%d",ar[r][c]);
           }
        }
    }
    printf("%d\n%d",Up,Down);
}
