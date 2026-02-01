// ChezCore Video System v0.1

// healthy word things
#ifndef VIDEO_H
#define VIDEO_H

// VGA text mode memory starts here
#define VGA_TEXTMEMSTART 0xB8000

// VGA colors
#define WHITE_BLACK 0x07

// Function protos
void print_char(char c, int position);
void print(const char *str, int start_position);

#endif