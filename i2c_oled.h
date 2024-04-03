#include <cstdint>
#include "mbed.h"
void OLED_Init(void);

// Display Genshin Impact logo
//
// Download Genshin Impact NOW!
// Available on PC, Android, iOS, PlayStation 4 & PlayStation 5
//
// CN:            https://ys.mihoyo.com/
// International: https://genshin.hoyoverse.com/
void OLED_Genshin(void);

void OLED_ClearBuffer(void);
void OLED_SendBuffer(void);
void OLED_DrawPointBuffered(uint8_t x,uint8_t y,uint8_t t);
void OLED_ShowCharBuffered(uint8_t x,uint8_t y,uint8_t chr,uint8_t size1,uint8_t mode);
void OLED_ShowStringBuffered(uint8_t x,uint8_t y,char string[],uint8_t size1,uint8_t mode);
void OLED_ShowNumBuffered(uint8_t x,uint8_t y,uint32_t num,uint8_t len,uint8_t size1,uint8_t mode);
void OLED_DrawLineBuffered(uint8_t x1,uint8_t y1,uint8_t x2,uint8_t y2,uint8_t mode);
void OLED_DrawCircleBuffered(uint8_t x,uint8_t y,uint8_t r);
void OLED_ShowPictureBuffered(uint8_t x,uint8_t y,uint8_t sizex,uint8_t sizey,uint8_t BMP[],uint8_t mode);
