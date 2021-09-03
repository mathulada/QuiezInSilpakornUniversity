#include <stdio.h>
struct stu {
    char id[9];
    char name[31];
    char surname[51];
    int year;
} typedef STUDENT;

void main ()
{
    int n;
    int count=0;
    scanf("%d",&n);
    STUDENT s[n];
    for (int i=0 ;i<n ; i++)
    {
        scanf("%s%s%s%d", s[i].id, s[i].name, s[i].surname, &s[i].year);
    }
    int targetYear;
    scanf ("%d",&targetYear);
    for (int i=0 ;i<n ; i++)
    {
        if (targetYear==s[i].year)
        {
            printf("%s %s %s\n",s[i].id,s[i].name,s[i].surname);
            count++;
        }
    }
    if (count==0)
    {
        printf("None");
    }
}
