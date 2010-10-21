/*
 *  Bullet.h
 *  Tanks
 *
 *  Created by Chris Cooper on 09-11-04.
 * 
 *
 */

#include "Definitions.h"

#ifndef _BULLET_H
#define _BULLET_H

class Bullet {
public:
	Bullet(float positionX, float positionY, float positionZ, float velX, float velZ, float initialRotation);
	void drawSelf();
	void move();
	void flagAsDead();
	bool isDead();
	float givePosX();
	float givePosZ();
	
private:
	float speedX, speedZ;
	float originalSpeedX, originalSpeedZ;
	float posX, posY, posZ;
	int remainingLife;
};

#endif