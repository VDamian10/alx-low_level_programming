#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *n));
int _putchar(char c);
void pme (char *name);
int str_len(char *n);
void array_iterator(int *array, size_t size, void (*action)(int));
void prim(int a);
int int_index(int *array, int size, int (*cmp)(int x));
int cmpme(int x);
#endif
