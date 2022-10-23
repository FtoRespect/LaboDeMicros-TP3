/***************************************************************************//**
  @file     ADC_hall.h
  @brief    +Descripcion del archivo+
  @author   KevinWahle
  @date		16 oct. 2022
 ******************************************************************************/

#ifndef ADC_ADC_HAL_H_
#define ADC_ADC_HAL_H_

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/
#include <stdint.h>
#include <stdbool.h>
/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/



/*******************************************************************************
 * ENUMERATIONS AND STRUCTURES AND TYPEDEFS
 ******************************************************************************/
typedef enum
{
	DIVh_t1,    // Clock
	DIVh_t2,	// Clock/2
	DIVh_t4,	// Clock/4
	DIVh_t8,	// Clock/8
} ADChClkDiv_t;

/*******************************************************************************
 * VARIABLE PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/


/*******************************************************************************
 * FUNCTION PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/


/**
 * @brief initialize ADC_0 module
 * @param divider sample time divider to bus clock
*/
void ADCh_Init ( ADChClkDiv_t divider);

/**
 * @brief starts sampling
*/
void ADCh_Start();

/**
 * @brief get sampled data
 * @return sampled data
*/
uint8_t get_ADCh();

/**
 * @brief check if there is sampled data
 * @return true if there is data available
*/
bool ADCh_IsReady();


/*******************************************************************************
 ******************************************************************************/

#endif // _ADC_ADC_HAL_H_
