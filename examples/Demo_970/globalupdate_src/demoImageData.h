/*
	demoImageData.h
  DEMO set of Image Data
*/

// Load Global Update Images
#if (SCREEN == 970)
#include "image_data/9.70/Image_970_Masterfm_01.c"
#include "image_data/9.70/Image_970_Masterfm_02.c"
#include "image_data/9.70/Image_970_Slavefm_01.c"
#include "image_data/9.70/Image_970_Slavefm_02.c"
#define Masterfm1        (uint8_t *)&Image_970_Masterfm_01
#define Masterfm2        (uint8_t *)&Image_970_Masterfm_02
#define Slavefm1         (uint8_t *)&Image_970_Slavefm_01
#define Slavefm2         (uint8_t *)&Image_970_Slavefm_02
#else
#include "image_data/12.0/Image_1200_Masterfm_01.c"
#include "image_data/12.0/Image_1200_Masterfm_02.c"
#include "image_data/12.0/Image_1200_Slavefm_01.c"
#include "image_data/12.0/Image_1200_Slavefm_02.c"
#define Masterfm1        (uint8_t *)&Image_1200_Masterfm_01
#define Masterfm2        (uint8_t *)&Image_1200_Masterfm_02
#define Slavefm1         (uint8_t *)&Image_1200_Slavefm_01
#define Slavefm2         (uint8_t *)&Image_1200_Slavefm_02
#endif