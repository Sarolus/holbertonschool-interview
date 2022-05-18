#ifndef SANDPILES_H
#define SANDPILES_H

#include <stdio.h>

void print_grid(int prmGrid[3][3]);
int checkGrid(int prmGrid[3][3]);
void sumGrid(int srcGrid[3][3], int destGrid[3][3]);
void transmitGrain(int prmGrid[3][3], int prmRow, int prmColumn);
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);

#endif /* SANDPILES_H */
