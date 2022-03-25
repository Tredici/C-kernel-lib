/**
 * This file expose a collection of 64 bit
 * string functions.
 */

#ifndef STRING
#define STRING

int isdigit(char c);

char *strcpy(char *dst, const char *src);
char *strcat(char *dst, const char *src);

int strlen(const char *str);

const char* itoa(int n);
const char* ltoa(long n);
const char* ultoa(unsigned long n);
const char* hex(unsigned long n);

int atoi(const char* str);

#endif
