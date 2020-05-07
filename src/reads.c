char read_character()
{
  char input;
  scanf("%*c", &input);
  return input;
}

//보안개선 필요
char* read_string_word(char* buffer)
{
  scanf("%s", buffer);
  return buffer;
}

char* read_string_line(char* buffer, size_t size)
{
  fgets(stdin, buffer, size);
  return buffer;
}


wchar_t read_wide_character()
{
  char input;
  wscanf(L"%*c", &input);
  return input;
}

//보안개선 필요
wchar_t* read_wstring_word(wchar_t* buffer)
{
  wscanf(L"%s", buffer);
  return buffer;
}

wchar_t* read_wstring_line(wchar_t* buffer, size_t size)
{
  fgets(stdin, buffer, size);
  return buffer;
}


signed char read_byte()
{
  signed char input;
  scanf("%hhd", &input);
  return input;
}

short read_short()
{
  short input;
  scanf("%hd", &input);
  return input;
}

int read_int()
{
  int input;
  scanf("%d", &input);
  return input;
}

long read_long()
{
  long input;
  scanf("%ld", &input);
  return input;
}

long long read_longlong()
{
  long long input;
  scanf("%lld", &input);
  return input;
}

unsigned char read_ubyte()
{
  signed char input;
  scanf("%hhu", &input);
  return input;
}

unsigned short read_ushort()
{
  short input;
  scanf("%hu", &input);
  return input;
}

unsigned int read_uint()
{
  int input;
  scanf("%u", &input);
  return input;
}

unsigned long read_ulong()
{
  long input;
  scanf("%lu", &input);
  return input;
}

unsigned long long read_ulonglong()
{
  long long input;
  scanf("%llu", &input);
  return input;
}

float read_float()
{
  float input;
  scanf("%f", &input);
  return input;
}

double read_double()
{
  double input;
  scanf("%lf", &input);
  return input;
}

long double read_longdouble()
{
  long double input;
  scanf("%llf", &input);
  return input;
}
