// ChezCore Video System v0.1

#include "video.h"

// Print a single character at a position
void print_char(char c, int position) {
    char *video = (char *)VGA_TEXTMEMSTART;
    video[position * 2] = c;          // character
    video[position * 2 + 1] = WHITE_BLACK; // attribute (color)
}

// Print a string starting at a position
void print(const char *str, int start_position) {
    int pos = start_position;
    while (*str) {
        print_char(*str, pos++);
        str++;
    }
}