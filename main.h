/*
 *  main.h
 *  Tanks
 *
 *  Created by Chris Cooper on 09-11-04.
 *
 */

#include "Definitions.h"
#include "Cutils.h"
#include "Bullet.h"
#include "Tank.h"
#include "Obstacle.h"

#ifndef _MAIN_H
#define _MAIN_H

void handleKeypress(unsigned char key, int x, int y);
void handleSpecialKeypress(int key, int x, int y);
void handleResize(int w, int h);
void handlePassiveMouse(int x, int y);
void handleActiveMouse(int x, int y);


void initRendering();
void drawScene();
void setOrthographicProjection();
void resetPerspectiveProjection();
void renderBitmapString(float x, float y, float z, void *font, char *string);
void update(int value);
int main(int argc, char** argv);
void makeTank();
void handleKeyUp(unsigned char key, int x, int y);
void checkInput();
void playerFire(int button, int state, int x, int y);
void createTank(float x, float y);
void createObstacle(float x, float z, float r);
void drawHealthBars();

#endif

//TO DO

//COMMENTS
//Because everyone loves to comment...

//Zoom along gun
//When you hold down a certain key, i want the camera to zoom down to be looking along the turret's gun

//Redical

//Formal game components
//Such as levels with different numbers/skills of tanks, and a screen that appears to tell you when you've died or won

// Power-ups
//Such as health, shields, and extra types of ammo and abilities

//Explosions
//When bullets hit things, and when tanks are destroyed





