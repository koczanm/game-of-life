#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include <stdio.h>
#include <pthread.h>

#include "grid.h"
#include "iocontrol.h"
#include "neighbourhoods.h"

#define THREADS 2

typedef struct {
    grid_t grid;
    outputInfo *info;
} threadData;

void *Thread(void *arguments);

int Simulate(grid_t *grid1, int numberOfGenerations, int neighbourhoodType, outputInfo *info);

void TransferBorders(grid_t *grid);

int NextGen(grid_t *grid1, grid_t *grid2, int type);

#endif /* SIMULATOR_H_ */
