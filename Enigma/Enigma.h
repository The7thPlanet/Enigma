

#include <CWheels/wheel.h>

#include <stdio.h>
#include <iostream>



class Enigma
{
public:
 void ER(const char* location)
{
    FILE *message;

    message = fopen ( location , "r");

    printf("%s",message);
}

private:
    /* data */

};


