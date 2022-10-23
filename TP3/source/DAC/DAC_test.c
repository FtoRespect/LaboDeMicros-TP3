/***************************************************************************//**
  @file		DAC_test.c
  @brief	+Descripcion del archivo+
  @author	KevinWahle
  @date		22 oct. 2022
 ******************************************************************************/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

// +Incluir el header propio (ej: #include "template.h")+
#include "DAC_hal.h"
#include <stdio.h>
/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/


/*******************************************************************************
 * ENUMERATIONS AND STRUCTURES AND TYPEDEFS
 ******************************************************************************/


/*******************************************************************************
 * VARIABLES WITH GLOBAL SCOPE
 ******************************************************************************/

// +ej: unsigned int anio_actual;+


/*******************************************************************************
 * FUNCTION PROTOTYPES FOR PRIVATE FUNCTIONS WITH FILE LEVEL SCOPE
 ******************************************************************************/

// +ej: static void falta_envido (int);+


/*******************************************************************************
 * ROM CONST VARIABLES WITH FILE LEVEL SCOPE
 ******************************************************************************/

// +ej: static const int temperaturas_medias[4] = {23, 26, 24, 29};+

static const uint16_t ramp[8] = {0,500,1000,1500,2000,2500,3000,4000};
/*******************************************************************************
 * STATIC VARIABLES AND CONST VARIABLES WITH FILE LEVEL SCOPE
 ******************************************************************************/

// +ej: static int temperaturas_actuales[4];+



void App_Init (void)
{



}

void App_Run (void)
{
	DACh_Init(1);
	while(1){
		for (int i=1; i<8; i++){
			DACh_SetData(ramp[i]);
		}
		for (int i=1;i<10000;){
			i++;
		}
	}
}


