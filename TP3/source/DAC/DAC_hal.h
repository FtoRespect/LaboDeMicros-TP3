/***************************************************************************//**
  @file     DAC_hal.h
  @brief    +Descripcion del archivo+
  @author   KevinWahle
  @date		22 oct. 2022
 ******************************************************************************/

#ifndef DAC_DAC_HAL_H_
#define DAC_DAC_HAL_H_

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
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
// +ej: char lcd_goto (int fil, int col);+
void DACh_Init (uint16_t frec);		// in KHz
void DACh_SetData(uint16_t data);

/*******************************************************************************
 ******************************************************************************/

#endif // _DAC_DAC_HAL_H_
