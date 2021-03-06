#include <stdio.h>
#include <stdint.h>

extern void entry(void);

int
main(void)
{
  entry();
  return 0;
}

// <
uint32_t
_60(uint32_t x, uint32_t y)
{
  return x < y;
}

// =
uint32_t
_61(uint32_t x, uint32_t y)
{
  return x == y;
}

// char=?
int
char_61_63(char x, char y)
{
  return x == y;
}

// >
uint32_t
_62(uint32_t x, uint32_t y)
{
  return x > y;
}

// +
uint32_t
_43(uint32_t x, uint32_t y)
{
  return x + y;
}

// -
uint32_t
_(uint32_t x, uint32_t y)
{
  return x - y;
}

// *
uint32_t
_42(uint32_t x, uint32_t y)
{
  return x * y;
}

// /
uint32_t
_47(uint32_t x, uint32_t y)
{
  return x / y;
}

// not
int
not(int x)
{
  return !x;
}

// display
void
display(char *str)
{
  fputs(str, stdout);
}

// peek
uint32_t
peek(uint32_t *x)
{
  return *x;
}

// poke
void
poke(uint32_t *x, uint32_t y)
{
  *x = y;
}
