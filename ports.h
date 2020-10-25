/***************************************************************************//**
  @file     +ports.h+
  @brief    +Manipulacion de los puertos A,B y D+
  @author   +Grupo 6+
 ******************************************************************************/
#ifndef _PORTS_H_
#define _PORTS_H_
/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


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

void bitSet (char  , char);
void bitClr (char  , char );
char bitGet (char  , char);
void bitToggle (char , char );
void maskOn(char, uint16_t);
void maskOff(char , uint16_t mask);
void maskToggle(char , uint16_t mask);
uint16_t lectura_puerto(char);


/*******************************************************************************
 ******************************************************************************/

#endif // _PORTS_H_