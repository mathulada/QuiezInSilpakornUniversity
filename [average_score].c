#include <stdio.h>
struct stu {
    char id[6];
    int score;
} typedef STUDENT;

void average (STUDENT* ar, int n)
{
    double sum=0;
    for (int i=0 ; i<n ; i++)
    {
        sum += ar[i].score;
    }
    printf("%f",sum/n);
}

void main ()
{
    int n;
    scanf("%d",&n);
    STUDENT s[n];
    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&s[i].score);
    }
    average(&s, n);
}
