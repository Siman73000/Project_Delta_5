#ifndef DISPLAY_H
#define DISPLAY_H
#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLS 80
#define WHITE_ON_BLACK 0x0f
#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5
#include <stdint.h>

void print_string(char* string);
void print_nl();
void clear_screen();
int32_t scroll_ln(int32_t offset);

#endif