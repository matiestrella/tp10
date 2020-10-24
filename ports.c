#include "ports.h"

//variable static
static union{
    uint16_t D;
    uint8_t myPorts[2];
}portD;

/*
int main(void)
{
    char a = 0;
    char *puerto= &a;
    bitSet(puerto,1); //Nota, poner los bits del 0 al 7, no del 1 al 8
    printf("%X\n",(*puerto));
return 0;
}
*/ 
 
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

// poner ceros en la parte de la mascara de los bits que se quieren apagar. Poner 1s en la amscara para que se mantengan igual
void maskOff(char letra_puerto, char mask)
{
    if (letra_puerto == 'A'){
        portD.myPorts[0] = portD.myPorts[0] & mask;
    }else if (letra_puerto == 'B'){
        portD.myPorts[1] = portD.myPorts[1] & mask;
    }else{
        portD = portD & mask;
    }
    //&: multiplicar
}

//pone en el bit opuesto a aquellos bits que tienen 1 en la mascara
void maskToggle(char letra_puerto, char mask)
{
    if (letra_puerto == 'A'){
        portD.myPorts[0] = portD.myPorts[0]^mask;
    }else if (letra_puerto == 'B'){
        portD.myPorts[1] = portD.myPorts[1]^mask;
    }else{
        portD = portD^mask;
    }
}

//funciones para que el usuario lea lo que se escribio en el puerto

int lectura_puerto(char puerto)
{
    int res;
    
    if(puerto == 'A'){
        res = portD.myPorts[0];
    }else if (puerto == 'B'){
        res = portD.myPorts[1];
    }else{
        res = portD;
    }
}