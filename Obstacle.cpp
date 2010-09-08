/*
 *  Obstacle.cpp
 *  Tanks
 *
 *  Created by Chris Cooper on 09-11-10.
 *
 */

#include "Obstacle.h"
#include "Cutils.h"
#include "Globals.h"

Obstacle::Obstacle(float positionX, float positionZ, float radius){
	this->posX = positionX;
	this->posZ = positionZ;
	this->radius = radius;
}

void Obstacle::drawSelf(){
	glPushMatrix();
		glTranslatef(this->posX, 0.0f, this->posZ);
		glColor4f(1.0f, 0.0f, 0.0f, 1.0f - (radarVisionMagnitude*0.9f));
		glutSolidSphere(this->radius, 20, 20);
	glPopMatrix();
}

float Obstacle::givePosX(){
	return this->posX;
}

float Obstacle::givePosZ(){
	return this->posZ;
}

float Obstacle::giveRadius(){
	return this->radius;
}
