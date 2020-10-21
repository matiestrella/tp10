
#include <stdio.h>
#include <stdlib.h>

void bitSet (char * , char );
void bitClr (char * , char );
char bitGet (char * , char);

int main(void)
{
    char a = 0;
    char *puerto= &a;
    bitSet(puerto,1); //Nota, poner los bits del 0 al 7, no del 1 al 8
    printf("%X\n",(*puerto));
return 0;
}

/*typedef struct
{
    char a :8;
    char b :8;
}d;

typedef int d;*/
        
void bitSet (char * puerto, char bits)
{
char mask = 1 << bits;
*puerto = mask | (*puerto);
}

void bitClr (char * puerto, char bits)
{
char mask = 1 << bits;
mask = ~mask;
*puerto = mask & (*puerto);
}

char bitGet (char * puerto, char bits)
{
char mask = 1;
char result = mask & (*puerto >> bits);
return result;
}