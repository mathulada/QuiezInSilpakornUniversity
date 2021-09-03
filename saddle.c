#include <stdio.h>
int ar[1000][1000];
void main ()
{
    int R,C;
    scanf ("%d %d",&R,&C);
    int ar[R][C];

    for (int r=0 ; r<R ; r++)
    {
        for (int c=0 ; c<C ; c++)
        {
            scanf ("%d",&ar[r][c]);
        }
    }

    for (int r=0 ; r<R ; r++)
        ///Find max in row
    {
        int maxR=ar[r][0];
        for (int c=1 ; c<C ; c++)
        {
            if (ar[r][c]>maxR)
            {
                maxR=ar[r][c];
            }
        }
    ///Find position of MaxRow

        for (int c=1;c<C;c++)
        {
            if (ar[r][c] == maxR)
            { ///Find columm
                int minC=ar[0][c];///Find minCol
                for (int i=1 ;i<R ; i++)
                {
                    if (ar[i][c]<minC)
                    {
                        minC=ar[i][c];
                    }
                }
            if (minC == maxR)
                {
                    printf("(%d, %d) = %d\n",r,c,ar[r][c]);
                }
            }
        }
    }
}
