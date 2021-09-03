struct {
    int code ;
    char name[52];
    int level[9];
} typedef POKEMON;

void main ()
{
    POKEMON mon[200];

    int N,K;
    scanf("%d",&N);
    for (int i=0 ;i<N ;++i)
    {
        scanf("%d",&mon[i].code);
        scanf("%s",mon[i].name);

        for (int v=1 ; v<=8 ;++v)
        {
            scanf("%d",&mon[i].level[v]);
        }
    }
    scanf("%d",&K);

    for (int i=0 ;i<K ; ++i)
    {
        int name,code;
        scanf ("%d %d",&name,&code);

        for (int j=0 ; j<N ; ++j)
        {
            if (mon[j].code==name)
            {
                printf("%s %d",mon[j].name,mon[j].level[code]);
            }
        }
        printf("\n");
    }
}
