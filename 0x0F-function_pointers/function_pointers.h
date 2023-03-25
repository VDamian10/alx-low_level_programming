#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
void print_name(char *name, void (*f)(char *n));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
void prim(int a);
int int_index(int *array, int size, int (*cmp)(int x));
int cmpme(int x);
#endif
