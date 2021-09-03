#include <stdio.h>
void main ()
{
    int N,sumMatrix=0;
    scanf("%d",&N);
    int Matrix[N][N];

    for (int r=0;r<N;r++)
    {
        for (int c=0;c<N;c++)
        {
            scanf("%d",&Matrix[r][c]);
        }
    }

    for (int r=0;r<N;r++)
    {
        for (int c=r;c<N;c++)
        {
            sumMatrix+=abs(Matrix[r][c]-Matrix[c][r]);
        }
    }
    printf("%d",sumMatrix);
}
