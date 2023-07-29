#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, count=0;
    int gold = 0, mana = 0, light = 0, dark = 0, nature = 0;
    char card[12][6];

    scanf("%d\n", &n);

    for(i=0;i<n;i++)
    {
        scanf("%s", card[i]);
        if(strcmp(card[i], "gold") == 0) gold = 1;
        if(strcmp(card[i], "mana") == 0) mana = 1;
        if(strcmp(card[i], "light") == 0) light = 1;
        if(strcmp(card[i], "dark") == 0) dark = 1;
        if(strcmp(card[i], "nature") == 0) nature = 1;
    }
    if(gold == 1) count++;
    if(mana == 1) count++;
    if(light == 1) count++;
    if(dark == 1) count++;
    if(nature == 1) count++;
    if(count<4) printf("valid");
    else printf("invalid");

    return 0;
}
