#include <stdio.h>
void main ()
{
    int M,N,K;
    int nCar;
    scanf ("%d%d%d",&M,&N,&nCar);
    int ar[M][N];

    for (int r=0 ; r<M ; r++)
    {
        for (int c=0 ; c<N ; c++)
        {
            ar[r][c]=0;
        }
    }

    for (int i=0 ; i<nCar ; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        ar[x-1][y-1]=1;
    }

    for (int r=0 ; r<M ; r++)
    {
        for (int c=0 ; c<N ; c++)
        {
            if (ar[r][c]==1)
            {
                printf("x");
            }
            else if (ar[r][c]==0)
            {
                printf("_");
            }
        }
        printf("\n");
    }
}
