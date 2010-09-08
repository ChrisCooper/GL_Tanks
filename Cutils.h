/*
 *  Cutils.h
 *  Tanks
 *
 *  Created by Chris Cooper on 09-11-04.
 * 
 *
 */
 
#include "Definitions.h"


void makeCube(float size);
void makeReferenceCubes(float gridSize, float cubeSize);
void makeRectangularPrism(float x1, float y1, float z1, float x2, float y2, float z2);
void makeReferenceCubes(float size, float cubeSize);
void makeRectangularPrism(float x1, float y1, float z1, float x2, float y2, float z2);
void makeGrid(float size);
float distanceBetween(float x1, float z1, float x2, float z2);