
#include <stdio.h>
#include <string.h>

int LTN(char *I[])
{
    char COMPARISON[26] = "abcdefghijklmnopqrstvwxyz";
    for(int n=0;I[n] == NULL;n++)
    {
        for(int i=0;COMPARISON[i] == NULL; i++)
        {
            strcmp(I[n],COMPARISON[i]);
        }
    }
}