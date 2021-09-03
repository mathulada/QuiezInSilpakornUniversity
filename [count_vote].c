#include <stdio.h>
int findMaxIndex (int* ar, int N)
{
    int maxScore = 0;
    int maxIndex = -1;
    for (int i=0 ; i<N ; i++)
    {
        if (ar[i]>maxScore)
        {
            maxScore = ar[i];
            maxIndex = i;
        }
    }
    return maxIndex+1;
}
int ar[101];
void main ()
{
    int N,K,max;
    scanf("%d %d",&N,&K);
    int count;
    for (int i=0 ; i<N ; i++)
    {
        ar[i]=0;
    }
    for (int i=0 ; i<K ; i++)
    {
        int vote;
        scanf("%d",&vote);
        ar[vote-1]++;
    }
    int maxIndex=findMaxIndex (ar, N);
    printf("%d\n%d", maxIndex,ar[maxIndex-1]);
}
