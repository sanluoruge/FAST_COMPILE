#include "slrtappmapping.h"
#include "./maps/CFDLMFAC.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <CFDLMFAC> */
		{ /* SignalMapInfo */
			CFDLMFAC_BIOMAP,
			CFDLMFAC_LBLMAP,
			CFDLMFAC_SIDMAP,
			CFDLMFAC_SBIO,
			CFDLMFAC_SLBL,
			{0,43},
			6,
		},
		{ /* ParamMapInfo */
			CFDLMFAC_PTIDSMAP,
			CFDLMFAC_PTNAMESMAP,
			CFDLMFAC_SPTMAP,
			{-1,-1},
			0,
		},
		"CFDLMFAC",
		"",
		"CFDLMFAC",
		1,
		CFDLMFAC_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}