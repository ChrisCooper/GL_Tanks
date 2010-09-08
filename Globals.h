/*
 *  Globals.h
 *  Tanks
 *
 *  Created by Chris Cooper on 09-11-04.
 *
 */

#include "Definitions.h"
#include "Bullet.h"
#include "Tank.h"
#include "Obstacle.h"

extern bool keyDown[256];
extern bool leftMouseDown;

extern bool isFullscreen;
extern float bulletSpeed;
extern float bulletSpeedOriginal;
extern int playerHealth;

extern float screenShakeMagnitude;
extern float zoomMagnitude;
extern int screenWidth, screenHeight;
extern int numTanks;
extern int numObstacles;
extern float radarVisionMagnitude;
extern bool radarVisionActivated;
extern bool invincibility;

extern bool slowMotionActivated;
extern float slowMotionMagnitude;
extern int slowMotionCounter;
extern float slowMotionDuration;

extern int mapSize;

extern int lastMouseX;
extern float lagDistance;

extern Bullet* aBullet;
extern Tank* playerTank;

extern std::vector<Bullet*> bullets;
extern std::vector<Obstacle*> obstacles;
extern std::vector<Tank*> tanks;

extern float fogColour[];
extern float originalfogColour[];
