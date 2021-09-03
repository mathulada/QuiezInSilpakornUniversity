#include <stdio.h>
struct stu {
    char id[6];
    int score;
} typedef STUDENT;

double average (STUDENT* ar, int n)
{
    double sum=0;
    for (int i=0 ; i<n ; i++)
    {
        sum += ar[i].score;
    }
    return sum/n;
}

void main ()
{
    int n;
    int count=0;

    scanf("%d",&n);
    STUDENT s[n];
    for (int i=0 ; i<n ; i++)
    {
        scanf("%s%d",s[i].id,&s[i].score);
    }
    double avg=average(&s, n);

    for (int i=0 ; i<n ; i++)
    {
        if (s[i].score>=avg)
        {
            count++;
        }
    }
    printf("%d\n",count);
    for (int i=0 ; i<n ; i++)
    {
        if (s[i].score>=avg)
        {
            printf("%s\n",s[i].id);
        }
    }
}
