#include <stdio.h>

int main()
{
    int n, count = 0, player = 0;
    int i, j;
    char map[21][21];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%c", &map[i][j]);
            if(map[i][j] == 'D') count++;
            if(map[i][j] == 'C') player++;
        }
    }

    if(player == 0 || player*2 <= count)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n+1;j++)
            {
                printf("%c", map[i][j]);
            }
        }
    }
    else
    {
        int daramg = player*2 - count;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(daramg <= 0) break;
                if(map[i][j] == '.')
                {
                   map[i][j] = 'D';
                   daramg--;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n+1;j++)
            {
                printf("%c", map[i][j]);
            }
        }
    }
    printf("%d %d %d", player, count, count*2);

    return 0;
}
