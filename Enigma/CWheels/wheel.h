

#include <string.h>
#include <stdio.h>
#define __STDC_WANT_DEC_FP__
#include <stdlib.h>



char *wheel(char *messageI , char *key )
{
    //_Decimal64 d64;
    char *DMessage;
    strtod(messageI, &DMessage);
    return DMessage;
}