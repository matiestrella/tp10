
#include <stdio.h>
#include <stdlib.h>

void bitSet (char * , char );
void bitClr (char * , char );

int main(void)
{
    char a = 0x0F;
    char *puerto= &a;
    bitSet(puerto,4); 
    printf("%X\n",*puerto);
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