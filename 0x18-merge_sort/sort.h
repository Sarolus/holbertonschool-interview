#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

void print_array(int *array, int size);
void merge_sort(int *array, size_t size);
void merge(int *prmArray, int prmStart, int prmMiddle, int prmEnd);
void sort(int *prmArray, int prmStart, int prmEnd);

#endif
