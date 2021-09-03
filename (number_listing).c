#include <stdio.h>
void main ()
{
    int N ;
    scanf("%d",&N);
    int ar[N];
    for (int i=0 ; i<N ; i++)
    {
        scanf("%d",&ar[i]);
    }

    for (int i=0 ; i<N ; i++)
    {
        for (int j=i+1 ; j<N ; j++)
        {
            if (ar[i]<ar[j])
            {

            }
            else
            {
                int GG = ar[i];
                ar[i] = ar[j];
                ar[j] = GG;
            }
        }
    }
    for (int i=0 ; i<N ; i++)
    {
        if (ar[i]==ar[i-1])
        {

        }
        else
        {
            printf("%d ",ar[i]);
        }
    }
}
