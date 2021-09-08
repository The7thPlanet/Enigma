
#include <stdio.h>
#include <string.h>

int LTN(char *I[],char *C)
{
    for(int n=0;strcmp(I[n], C)==0;n++)
    {return n;}
}