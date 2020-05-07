#ifndef READ_BOILERPLATE
#define READ_BOILERPLATE

#include <stdio.h>
#include <wchar.h>

char read_character();
char* read_string_word(char* buffer);
char* read_string_line(char* buffer, size_t size);

wchar_t read_wide_character();
wchar_t* read_wstring_word(wchar_t* buffer);
wchar_t* read_wstring_line(wchar_t* buffer, size_t size);


signed char read_byte();
short read_short();
int read_int();
long read_long();
long long read_longlong();

unsigned char read_ubyte();
unsigned short read_ushort();
unsigned int read_uint();
unsigned long read_ulong();
unsigned long long read_ulonglong();

float read_float();
double read_double();
long double read_longdouble();

#endif
