#include<stdio.h>
#include<string.h>
int main()
{
    char text[][80]=
    {
        "when", "in", "the", "course",
        "of", "human", "event",""
    };
    int i,j;
    /*display them*/
    for(i=0; text[i][0];i++)
    {
        for(j=0; text[i][j]; j++)
        {
            printf("%c",text[i][j]);
        }
        printf(" ");
    }

    return 0;
}