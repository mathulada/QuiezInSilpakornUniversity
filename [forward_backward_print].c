#include <stdio.h>
void main ()
{
    int N,M ;
    scanf ("%d",&N);
    int ar[N];
    for (int i=0 ; i<N ; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&M);

    if (M>0)
    {
        for (int i=0 ; i<N ;i++)
        {
            ar[i]=ar[i]+M;
            printf ("%d ",ar[i]);
        }
    }
    if (M<0)
    {
        for (int i=N-1 ; i>=0 ; i--)
        {
            ar[i]=ar[i]+M;
            printf ("%d ",ar[i]);
        }
    }
}
