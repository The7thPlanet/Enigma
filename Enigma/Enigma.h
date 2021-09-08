

#include <CWheels/wheel.h>

#include <stdio.h>
#include <iostream>



class Enigma
{
public:
 int ER(const char* location)
{
    FILE *message;

    message = fopen ( location , "r");

    if (message==NULL)
    {
        printf("%s","\n ERROR:: could not found your message \n");
        return 1;
    }

    char C;
    while(1)
     {
        C = fgetc(message);
        if(C==EOF)
            break;
        else
            printf("%c", C);
     }
    FILE *CM;
    char CC;
    while(1)
     {
        CC = fgetc(CM);
        if(CC==EOF)
            break;
        else
            
            printf("%c", CC);
     }
     fclose(message);
     return 0;

}

private:
    /* data */

};


