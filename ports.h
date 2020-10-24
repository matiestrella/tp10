/***************************************************************************//**
  @file     +ports.h+
  @brief    +Manipulacion de los puertos A,B y D+
  @author   +Grupo 6+
 ******************************************************************************/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>



/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/

/*******************************************************************************
 * ENUMERATIONS AND STRUCTURES AND TYPEDEFS
 ******************************************************************************/



/*******************************************************************************
 * VARIABLE PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

// +ej: extern unsigned int anio_actual;+


/*******************************************************************************
 * FUNCTION PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

/**
 * @brief TODO: completar descripcion
 * @param param1 Descripcion parametro 1
 * @param param2 Descripcion parametro 2
 * @return Descripcion valor que devuelve
*/

void bitSet (char * , char );
void bitClr (char * , char );
char bitGet (char * , char);
void maskOff(char *puerto, char mask);
void maskToggle(char *puerto, char mask);
int lectura_puerto(char puerto);


/*******************************************************************************
 ******************************************************************************/

#endif // _PORTS_H_