/*
 *  GlobalDeclarations.h
 *  Tanks
 *
 *  Created by Chris Cooper on 09-11-04.
 *
 */

bool keyDown[256];
bool leftMouseDown = false;

bool isFullscreen = true;
float bulletSpeed = 0.5f;
float bulletSpeedOriginal = 0.5f;
int playerHealth = 10;
float screenShakeMagnitude= 0.0f;
float zoomMagnitude = 0.0f;
int screenWidth = 0, screenHeight = 0;
int numTanks = 10;
int numObstacles = 20;
float radarVisionMagnitude = 0;
bool radarVisionActivated = false;
bool slowMotionActivated = false;
float slowMotionMagnitude = 0;
int slowMotionCounter = 0;
float slowMotionDuration = 20.0f;
int mapSize = 70;
bool invincibility = false;

int lastMouseX = 770;
float lagDistance = 0;

Bullet* aBullet;
Tank* playerTank;

std::vector<Bullet*> bullets;
std::vector<Obstacle*> obstacles;
std::vector<Tank*> tanks;

float fogColour[] = {0.2f,0.58f,0.79f,0.0f};
float originalfogColour[] = {0.2f,0.58f,0.79f,0.0f};
