#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include <iostream>
#include <string>

#include <ctime> // Required for clock()
#include <cstdlib> // Required for rand()

#include "HeroAttack.h"

int score = 0;

bool NormalEnemyActive = true;



bool gameStart = false;

char continuePopUp[3][50] = { "image\\Button\\continue\\continue.bmp", "image\\Button\\continue\\yes.bmp", "image\\Button\\continue\\no.bmp" };


void checkBossAttackCollision();
//void collisionCheckWithHeroBody();
int healthIndex = 7;
int jumpHeight = 20;
#include "EnemyImage.h"
#define _CRT_SECURE_NO_WARNINGS
int gameState = -1;

//Enemy.h
#define rockWidth 80
#define rockHeight 73

#define dragonEnemyWidth 267
#define dragonEnemyHeight 120

#define dragonEnemy2Width 100
#define dragonEnemy2Height 60

#define flowerEnemyWidth 79
#define flowerEnemyHeight 144

#define fireballEnemyWidth 62
#define fireballEnemyHeight 110

#define MAX_ENEMY 5
//#define MAX_NORMAL_FIREBALL 1000








char rockEnemy[5][30] = { "image//Enemy//Rock//1.bmp", "image//Enemy//Rock//2.bmp", "image//Enemy//Rock//3.bmp", "image//Enemy//Rock//4.bmp", "image//Enemy//Rock//5.bmp" };

char dragonEnemy[17][50] = {
	"image//Enemy//Dragon//Dragon//dragon1.bmp",
	"image//Enemy//Dragon//Dragon//dragon2.bmp",
	"image//Enemy//Dragon//Dragon//dragon3.bmp",
	"image//Enemy//Dragon//Dragon//dragon4.bmp",
	"image//Enemy//Dragon//Dragon//dragon5.bmp",
	"image//Enemy//Dragon//Dragon//dragon6.bmp",
	"image//Enemy//Dragon//Dragon//dragon7.bmp",
	"image//Enemy//Dragon//Dragon//dragon8.bmp",
	"image//Enemy//Dragon//Dragon//dragon9.bmp",
	"image//Enemy//Dragon//Dragon//dragon10.bmp",
	"image//Enemy//Dragon//Dragon//dragon11.bmp",
	"image//Enemy//Dragon//Dragon//dragon12.bmp",
	"image//Enemy//Dragon//Dragon//dragon13.bmp",
	"image//Enemy//Dragon//Dragon//dragon14.bmp",
	"image//Enemy//Dragon//Dragon//dragon15.bmp",
	"image//Enemy//Dragon//Dragon//dragon16.bmp",
	"image//Enemy//Dragon//Dragon//dragon17.bmp",
};



int rockEnemyIndex = 0;
int rockHealth = 1;		// for true.... 0  hoile rockVisible = false;
int dragonEnemyIndex = 0;
int dragonEnemyHealth = 1;	// true.... 


int rockEnemyCordinateX = 1280;
int rockEnemyCordinateY = 200;

int dragonEnemyCordinateX = 1280;
int dragonEnemyCordinateY = 283;

bool rockEnemyVisible = true;
bool dragonEnemyVisible = false;
bool flowerEnemyVisible = true;
bool fireballEnemyVisible = true;
bool dragonEnemy2Visible = true;


int dragonIndex = 0;
char dragonEnemy2[3][50] = {
	"image//Enemy//Dragon2//enemy1.bmp",
	"image//Enemy//Dragon2//enemy2.bmp",
	"image//Enemy//Dragon2//enemy3.bmp" };

int dragonEnemy2CordinateX = 1280;
int dragonEnemy2CordinateY = 400;
int dragonEnemy2Index = 0;

char fireball[3][50] = {
	"image//fireBall//fireball001.bmp",
	"image//fireBall//fireball002.bmp",
	"image//fireBall//fireball003.bmp" };

int fireballEnemyCordinateX = rand() % 1280;
int fireballEnemyCordinateY = 720;
int fireballEnemyIndex = 0;
int fireballSpeed = 15; // Speed of falling
int fireballHeight = 50;
int fireballWidth = 50;

int flowerEnemyCordinateX = 1280 + 400;
int flowerEnemyCordinateY = 172;
int flowerEnemyPosition[6];
int flowerEnemyIndex = 0;
char Flower[6][40] = { "image\\Enemy\\Flower\\enemy_01.bmp", "image\\Enemy\\Flower\\enemy_02.bmp", "image\\Enemy\\Flower\\enemy_03.bmp", "image\\Enemy\\Flower\\enemy_04.bmp", "image\\Enemy\\Flower\\enemy_05.bmp", "image\\Enemy\\Flower\\enemy_06.bmp" };
int flowerEnemySlice = 6;
int flowerEnemyWIDTH = 110;

int enemySpawnTimer = 0;
int spawnInterval = 150;  // Increase interval between spawns (in frames)
int spawnCooldown = 0; // Adjust the enemy speed for different types
int rockEnemySpeed = 15;       // Faster rocks
int dragonEnemySpeed = 10;     // Slower dragons
int dragonEnemy2Speed = 12;    // Medium speed for dragon2
int flowerEnemySpeed = 8;      // Slow flower enemies
int fireballEnemySpeed = 20;   // Fast fireballs

void updateBossEnemy();

int rockEnemyCount = 0;
int dragonEnemyCount = 0;
int dragonEnemy2Count = 0;
int flowerEnemyCount = 0;
int fireballEnemyCount = 0;

bool isBossEnemyAppear = false;
bool isBossEnemyStance = false;
bool isBossEnemyWalk = false;
bool isBossEnemyAttack_1 = false;
bool isBossEnemyAttack_3 = false;
bool isBossEnemyForward = false;

int bossEnemyAppearIndex = 0;
int bossEnemyStanceIndex = 0;
int bossEnemyWalkIndex = 0;
int bossEnemyAttack_1_Index = 0;
int bossEnemyAttack_3_Index = 0;


int attackDistance = 50; // Distance at which the boss attacks

char enemyTry[40] = "image//boss.bmp";

struct Enemy{
	bool active = false;
	int index = 0;
	int health;
	int speed;
	int X, Y;
	int width, height;
	int Left, Right;
	int Top, Bottom;
	void(*updateFunc)();
};
struct Enemy e1_rockEnemy[MAX_ENEMY];
struct Enemy e2_dragonEnemy[MAX_ENEMY];
struct Enemy e3_dragonEnemy2[MAX_ENEMY];
struct Enemy e4_flowerEnemy[MAX_ENEMY];
struct Enemy e5_fireballEnemy[MAX_ENEMY];



struct BossEnemy{
	bool active = false;
	int index = 0;
	int health = 200;
	int speed;
	int X = 750, Y = heroCordinateY-25;  // Default position
	int width = 228, height=295;
};


struct BossEnemy bossEnemy;


int enemyType;


void drawBossEnemy() {
	if (bossEnemy.active) {
		if (isBossEnemyAppear) {
			iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyAppear[bossEnemyAppearIndex], 0);
		}
		else if (isBossEnemyStance) {
			iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyStance[bossEnemyStanceIndex], 0);
		}
		else if (isBossEnemyWalk) {
			if (isBossEnemyForward) {
				iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyForwardWalk[bossEnemyWalkIndex], 0);
			}
			else {
				iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyBackwardWalk[bossEnemyWalkIndex], 0);
			}
		}
		else if (isBossEnemyAttack_1) {
			if (isBossEnemyForward) {
				iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyForwardAttack_1[bossEnemyAttack_1_Index], 0);
			}
			else {
				iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyBackwardAttack_1[bossEnemyAttack_1_Index], 0);
			}
		}
		else if (isBossEnemyAttack_3) {
			if (isBossEnemyForward) {
				iShowBMP2(bossEnemy.X-300, bossEnemy.Y-28, bossEnemyForwardAttack_3[bossEnemyAttack_3_Index], 0);
			}
			else {
				iShowBMP2(bossEnemy.X-300, bossEnemy.Y-28, bossEnemyBackwardAttack_3[bossEnemyAttack_3_Index], 0);
			}
			
		}
		else {
			if (isBossEnemyForward) {
				iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyForwardWalk[bossEnemyWalkIndex], 0);
			}
			else {
				iShowBMP2(bossEnemy.X, bossEnemy.Y, bossEnemyBackwardWalk[bossEnemyWalkIndex], 0);
			}
		}
	}


	char healthText[20];
	sprintf_s(healthText, sizeof(healthText), "BEAST HP: %d", bossEnemy.health);
	iText(10, 630, healthText, GLUT_BITMAP_HELVETICA_18);

	char bossTimerText[20];
	sprintf_s(bossTimerText, sizeof(bossTimerText), "Time Left: %d sec", bossEnemyAliveTimeSeconds);

	iSetColor(0, 255, 0);
	iText(10, 600, bossTimerText, GLUT_BITMAP_HELVETICA_18);

	printf("%d %d\n", bossEnemy.X, bossEnemy.Y);
	printf("%d %d\n\n", heroCordinateX, heroCordinateY);
}


void drawEnemy()
{
	static std::clock_t rockEnemyLastSpawnTimeTime = std::clock(); // Store the last spawn time
	double elapsedRockEnemyTime = (double)(std::clock() - rockEnemyLastSpawnTimeTime) / CLOCKS_PER_SEC; // Calculate elapsed time

	static std::clock_t dragonEnemyLastSpawnTime = std::clock(); // Store the last spawn time
	double elapsedDragonEnemyTime = (double)(std::clock() - dragonEnemyLastSpawnTime) / CLOCKS_PER_SEC; // Calculate elapsed time

	static std::clock_t dragonEnemy2LastSpawnTime = std::clock(); // Store the last spawn time
	double elapsedDragonEnemy2Time = (double)(std::clock() - dragonEnemy2LastSpawnTime) / CLOCKS_PER_SEC; // Calculate elapsed time

	static std::clock_t flowerEnemyLastSpawnTime = std::clock(); // Store the last spawn time
	double elapsedflowerEnemyTime = (double)(std::clock() - flowerEnemyLastSpawnTime) / CLOCKS_PER_SEC; // Calculate elapsed time

	static std::clock_t fireballEnemyLastSpawnTime = std::clock(); // Store the last spawn time
	double elapsedfireballEnemyTime = (double)(std::clock() - fireballEnemyLastSpawnTime) / CLOCKS_PER_SEC; // Calculate elapsed time

	if (gameState == 0 && gameStart && !bossEnemy.active && NormalEnemyActive) // If 3 seconds have passed
	{
		if (elapsedRockEnemyTime >= 5.0)
		{

			rockEnemyLastSpawnTimeTime = std::clock(); // Reset spawn time

			e1_rockEnemy[rockEnemyCount].active = true;
			e1_rockEnemy[rockEnemyCount].X = 1280;
			e1_rockEnemy[rockEnemyCount].Y = 200;
			e1_rockEnemy[rockEnemyCount].speed = 20;
			e1_rockEnemy[rockEnemyCount].width = rockWidth;
			e1_rockEnemy[rockEnemyCount].height = rockHeight;
			rockEnemyCount++;
		}

		if (elapsedDragonEnemyTime >= 5.0)
		{
			dragonEnemyLastSpawnTime = std::clock(); // Reset spawn time

			e2_dragonEnemy[dragonEnemyCount].active = true;
			e2_dragonEnemy[dragonEnemyCount].X = 1280;
			e2_dragonEnemy[dragonEnemyCount].Y = 283+100;
			e2_dragonEnemy[dragonEnemyCount].speed = 15;
			e2_dragonEnemy[dragonEnemyCount].width = dragonEnemyWidth;
			e2_dragonEnemy[dragonEnemyCount].height = dragonEnemyHeight;
			dragonEnemyCount++;
		}
		if (elapsedDragonEnemy2Time >= 10.0)
		{
			dragonEnemy2LastSpawnTime = std::clock(); // Reset spawn time

			e3_dragonEnemy2[dragonEnemy2Count].active = true;
			e3_dragonEnemy2[dragonEnemy2Count].X = 1280;
			e3_dragonEnemy2[dragonEnemy2Count].Y = 283+50;
			e3_dragonEnemy2[dragonEnemy2Count].speed = 15;
			e3_dragonEnemy2[dragonEnemy2Count].width = dragonEnemy2Width;
			e3_dragonEnemy2[dragonEnemy2Count].height = dragonEnemy2Height;
			dragonEnemy2Count++;
		}

		if (elapsedflowerEnemyTime >= 5.0)
		{
			flowerEnemyLastSpawnTime = std::clock(); // Reset spawn time

			e4_flowerEnemy[flowerEnemyCount].active = true;
			e4_flowerEnemy[flowerEnemyCount].X = 1280+100;
			e4_flowerEnemy[flowerEnemyCount].Y = 172;
			e4_flowerEnemy[flowerEnemyCount].speed = 10;
			e4_flowerEnemy[flowerEnemyCount].width = flowerEnemyWidth;
			e4_flowerEnemy[flowerEnemyCount].height = flowerEnemyHeight;
			flowerEnemyCount++;
		}

		if (elapsedfireballEnemyTime >= 2.0)
		{
			fireballEnemyLastSpawnTime = std::clock(); // Reset spawn time

			e5_fireballEnemy[fireballEnemyCount].active = true;
			e5_fireballEnemy[fireballEnemyCount].X = rand() % 1280;
			e5_fireballEnemy[fireballEnemyCount].Y = 720;
			e5_fireballEnemy[fireballEnemyCount].speed = 10;
			e5_fireballEnemy[fireballEnemyCount].width = fireballEnemyWidth;
			e5_fireballEnemy[fireballEnemyCount].height = fireballEnemyHeight;
			fireballEnemyCount++;
		}
	}
}


void updateEnemies() {
	// Update Rock Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e1_rockEnemy[i].active) {
			e1_rockEnemy[i].X -= rockEnemySpeed; // Move left
			if (e1_rockEnemy[i].X < 0) {
				e1_rockEnemy[i].active = false; // Disable if off-screen
			}
		}
	}

	// Update Dragon Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e2_dragonEnemy[i].active) {
			e2_dragonEnemy[i].X -= dragonEnemySpeed; // Move left
			if (e2_dragonEnemy[i].X < -267) {
				e2_dragonEnemy[i].active = false; // Disable if off-screen
			}
		}
	}

	// Update Dragon2 Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e3_dragonEnemy2[i].active) {
			e3_dragonEnemy2[i].X -= dragonEnemy2Speed; // Move left
			if (e3_dragonEnemy2[i].X <= 0){
				e3_dragonEnemy2[i].active = false; // Disable if off-screen
			}
		}
	}

	// Update Flower Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e4_flowerEnemy[i].active) {
			e4_flowerEnemy[i].X -= flowerEnemySpeed; // Move left
			if (e4_flowerEnemy[i].X < 0){
				e4_flowerEnemy[i].active = false; // Disable if off-screen
			}
		}
	}

	// Update Fireball Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e5_fireballEnemy[i].active) {
			e5_fireballEnemy[i].Y -= fireballEnemySpeed; // Move down
			if (e5_fireballEnemy[i].Y <= 200) {
				e5_fireballEnemy[i].active = false; // Disable if off-screen
			}
		}
	}

}

void updateBossEnemy() {
	if (isBossEnemyAppear) {
		bossEnemyAppearIndex++;
		if (bossEnemyAppearIndex >= 24) {
			bossEnemyAppearIndex = 0;
			isBossEnemyAppear = false;  // Stop appearing animation
			isBossEnemyStance = true;   // Switch to idle stance
		}
	}

	if (isBossEnemyStance) {
		bossEnemyStanceIndex++;
		if (bossEnemyStanceIndex >= 30) {
			bossEnemyStanceIndex = 0;  // Loop through the idle frames
			isBossEnemyStance = false;
			isBossEnemyWalk = true;
		
		}
	}

	if (isBossEnemyWalk) {
		bossEnemyWalkIndex++;
		if (bossEnemyWalkIndex >= 20) {
			bossEnemyWalkIndex = 0;   // Loop through the walking frames
		}
	}

	if (isBossEnemyAttack_1) {
		bossEnemyAttack_1_Index++;
		if (bossEnemyAttack_1_Index >= 24) {
			bossEnemyAttack_1_Index = 0;   // Loop through the walking frames
		}
	}
	if (isBossEnemyAttack_3) {
		bossEnemyAttack_3_Index++;
		if (bossEnemyAttack_3_Index >= 30) {
			bossEnemyAttack_3_Index = 0;   // Loop through the walking frames
			isBossEnemyAttack_3 = false;
			isBossEnemyWalk = true;
		}
	}
}

// Draw enemies

void drawEnemies() {
	// Draw Rock Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e1_rockEnemy[i].active) {
			iShowBMP2(e1_rockEnemy[i].X, e1_rockEnemy[i].Y, rockEnemy[e1_rockEnemy[i].index], 255);
		}
	}

	// Draw Dragon Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e2_dragonEnemy[i].active) {
			iShowBMP2(e2_dragonEnemy[i].X, e2_dragonEnemy[i].Y, dragonEnemy[e2_dragonEnemy[i].index], 0);
		}
	}

	// Draw Dragon2 Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e3_dragonEnemy2[i].active) {
			iShowBMP2(e3_dragonEnemy2[i].X, e3_dragonEnemy2[i].Y, dragonEnemy2[e3_dragonEnemy2[i].index], 0);
		}
	}

	// Draw Flower Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e4_flowerEnemy[i].active) {
			iShowBMP2(e4_flowerEnemy[i].X, e4_flowerEnemy[i].Y, Flower[e4_flowerEnemy[i].index], 0);
		}
	}

	// Draw Fireball Enemies
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e5_fireballEnemy[i].active) {
			iShowBMP2(e5_fireballEnemy[i].X, e5_fireballEnemy[i].Y, fireball[e5_fireballEnemy[i].index], 0);
		}
	}
	
}


// Collision detection function for Attack and enemy
bool checkNormalAttackCollision(Attack& Attack, Enemy& enemy) {
	// Attack's bounding box
	int AttackLeft = Attack.x;
	int AttackRight = Attack.x + Attack.width;
	int AttackTop = Attack.y;
	int AttackBottom = Attack.y + Attack.height;

	// Enemy's bounding box
	int enemyLeft = enemy.X;
	int enemyRight = enemy.X + enemy.width;
	int enemyTop = enemy.Y;
	int enemyBottom = enemy.Y + enemy.height;

	// Check for overlap (collision)
	if (AttackRight > enemyLeft && AttackLeft < enemyRight && AttackBottom > enemyTop && AttackTop < enemyBottom) {
		return true;  // Collision detected
	}
	return false;  // No collision
}

// Function to handle Attack-enemy collisions
void checkNormalAttackEnemyCollisions() {

	if (currentLevel == 1){
		for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
			if (normalAttack[i].active) {  // Only check for active normalAttack
				for (int j = 0; j < MAX_ENEMY; j++) {
					if (e4_flowerEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e4_flowerEnemy[j])) {
						// Handle collision with flower enemy
						e4_flowerEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
				}
			}
		}
	}
	else if (currentLevel == 2){
		for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
			if (normalAttack[i].active) {  // Only check for active normalAttack
				for (int j = 0; j < MAX_ENEMY; j++) {

					if (e2_dragonEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e2_dragonEnemy[j])) {
						// Handle collision with dragon enemy
						e2_dragonEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
					else if (e3_dragonEnemy2[j].active && checkNormalAttackCollision(normalAttack[i], e3_dragonEnemy2[j])) {
						// Handle collision with dragon2 enemy
						e3_dragonEnemy2[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
					else if (e4_flowerEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e4_flowerEnemy[j])) {
						// Handle collision with flower enemy
						e4_flowerEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
				}
			}
		}
	}
	else if (currentLevel == 3){
		for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
			if (normalAttack[i].active) {  // Only check for active normalAttack
				for (int j = 0; j < MAX_ENEMY; j++) {
					if (e1_rockEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e1_rockEnemy[j])) {
						// Handle collision with rock enemy
						e1_rockEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
					else if (e2_dragonEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e2_dragonEnemy[j])) {
						// Handle collision with dragon enemy
						e2_dragonEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
					else if (e3_dragonEnemy2[j].active && checkNormalAttackCollision(normalAttack[i], e3_dragonEnemy2[j])) {
						// Handle collision with dragon2 enemy
						e3_dragonEnemy2[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
					else if (e4_flowerEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e4_flowerEnemy[j])) {
						// Handle collision with flower enemy
						e4_flowerEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
					else if (e5_fireballEnemy[j].active && checkNormalAttackCollision(normalAttack[i], e5_fireballEnemy[j])) {
						// Handle collision with flower enemy
						e5_fireballEnemy[j].active = false;  // Deactivate enemy
						normalAttack[i].active = false;  // Deactivate Attack
						break;  // Stop checking further once collision is detected
					}
				}
			}
		}
	}

	if ((currentLevel == 2 || currentLevel == 3) && bossEnemy.active){
		for (int i = 0; i < MAX_NORMAL_FIRE; i++) { // Assuming you have an array for normalAttack
			if (normalAttack[i].active) {
				// Check if Attack is within the boss's hitbox
				if (normalAttack[i].x + normalAttack[i].width >= bossEnemy.X +245 &&
					normalAttack[i].x <= bossEnemy.X + bossEnemy.width &&
					normalAttack[i].y + normalAttack[i].height >= bossEnemy.Y &&
					normalAttack[i].y <= bossEnemy.Y + bossEnemy.height) {

					// Attack hit the boss
					normalAttack[i].active = false; // Remove Attack
					bossEnemy.health -= 1; // Reduce health

					// If boss dies
					if (bossEnemy.health <= 0) {
						bossEnemy.active = false;
					}
				}
			}
		}
		checkBossAttackCollision();
	}
}


void checkBossAttackCollision() {
	if (isBossEnemyAttack_3) {

		int heroLeft = heroCordinateX;
		int heroRight = heroCordinateX + heroWidth - 10;
		int heroTop = heroCordinateY + heroHeight;
		int heroBottom = heroCordinateY;

		if (jump) {
			heroTop = heroCordinateY + heroCordinateJump + jumpHeight;
			heroBottom = heroCordinateY + heroCordinateJump;
		}

		// Define boss attack area (example: a fireball or melee attack range)
		int bossAttackLeft = bossEnemy.X - 86;
		int bossAttackRight = bossEnemy.X + 27;
		int bossAttackTop = bossEnemy.height; // Assuming Y position of attack is same as boss
		int bossAttackBottom = bossEnemy.Y; // Example height of attack range


		// Collision check (AABB method)
		if (bossAttackRight >= heroLeft && bossAttackLeft <= heroRight &&
			bossAttackBottom >= heroTop && bossAttackTop <= heroBottom) {

			// Collision detected!
			printf("Boss attack hit the hero!\n");

			// Apply damage or effect to hero
			healthIndex -= 1; // Example damage value
		}
	}
}




void resetEnemies() {
	// Reset game state
	//gameState = -1;

	additionalHealthBarIndex = 0;
	additionalHealthBarX = 1280;
	additionalHealth = 145;
	healthMechanism = false;
	normalHealthBarX = 1280;
	timeBarY = 720;

	gameStart = false;


	// Reset enemy counts
	rockEnemyCount = 0;
	dragonEnemyCount = 0;
	dragonEnemy2Count = 0;
	flowerEnemyCount = 0;
	fireballEnemyCount = 0;

	// Reset enemy visibility
	rockEnemyVisible = true;
	dragonEnemyVisible = false;
	flowerEnemyVisible = true;
	fireballEnemyVisible = true;
	dragonEnemy2Visible = true;

	// Reset enemy coordinates
	rockEnemyCordinateX = 1280;
	rockEnemyCordinateY = 200;

	dragonEnemyCordinateX = 1280;
	dragonEnemyCordinateY = 283;

	dragonEnemy2CordinateX = 1280;
	dragonEnemy2CordinateY = 400;

	fireballEnemyCordinateX = rand() % 1280;
	fireballEnemyCordinateY = 720;

	flowerEnemyCordinateX = 1280 + 400;
	flowerEnemyCordinateY = 172;

	// Reset enemy arrays

	for (int i = 0; i < MAX_ENEMY; i++) {
		e1_rockEnemy[i].active = false;
		e2_dragonEnemy[i].active = false;
		e3_dragonEnemy2[i].active = false;
		e4_flowerEnemy[i].active = false;
		e5_fireballEnemy[i].active = false;
	}


	// Reset enemy movement speeds
	rockEnemySpeed = 15;
	dragonEnemySpeed = 10;
	dragonEnemy2Speed = 12;
	flowerEnemySpeed = 8;
	fireballEnemySpeed = 20;

	// Reset enemy spawn control variables
	enemySpawnTimer = 0;
	spawnCooldown = 0;

	// Reset Attack system (if applicable)
	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		normalAttack[i].active = false;
	}

	// Optionally, reset other game-related states (e.g., boss enemy)
	bossEnemy.active = false;
	isBossEnemyAppear = false;
	isBossEnemyStance = false;
	isBossEnemyWalk = false;

	bossEnemy.X = 750;

	bossEnemyStanceIndex = 0;
	bossEnemyAppearIndex = 0;
	bossEnemyWalkIndex = 0;

	std::cout << "Game has been reset!" << std::endl;
}
bool checkCollision(Enemy& enemy) {
	// Hero's bounding box
	int heroLeft = heroCordinateX;
	int heroRight = heroCordinateX + heroWidth;
	int heroTop = heroCordinateY + heroHeight;
	int heroBottom = heroCordinateY;

	if (jump) {
		heroLeft = heroCordinateX;
		heroRight = heroCordinateX + heroWidth;
		heroTop = heroCordinateY + heroCordinateJump + jumpHeight + heroHeight;
		heroBottom = heroCordinateY + heroCordinateJump;
	}

	// Collision check (corrected Y condition)
	return (heroRight > enemy.Left && heroLeft < enemy.Right && heroBottom < enemy.Top && heroTop > enemy.Bottom);
}

void collisionCheckWithHeroBody() {
	for (int i = 0; i < MAX_ENEMY; i++) {
		e1_rockEnemy[i].Left = e1_rockEnemy[i].X;
		e1_rockEnemy[i].Right = e1_rockEnemy[i].X + rockWidth;
		e1_rockEnemy[i].Bottom = e1_rockEnemy[i].Y;
		e1_rockEnemy[i].Top = e1_rockEnemy[i].Y + rockHeight;

		e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 84;
		e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + dragonEnemyWidth;
		e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 16;
		e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + dragonEnemyHeight;

		if (dragonEnemyIndex >= 10 && dragonEnemyIndex <= 14){
			e3_dragonEnemy2[i].Left = e3_dragonEnemy2[i].X + 100;
			e3_dragonEnemy2[i].Right = e3_dragonEnemy2[i].X + 150;
			e3_dragonEnemy2[i].Bottom = e3_dragonEnemy2[i].Y + 24;
			e3_dragonEnemy2[i].Top = e3_dragonEnemy2[i].Y + 100;
		}

		e4_flowerEnemy[i].Left = e4_flowerEnemy[i].X + 23;
		e4_flowerEnemy[i].Right = e4_flowerEnemy[i].X + flowerEnemyWidth;
		e4_flowerEnemy[i].Bottom = e4_flowerEnemy[i].Y + 30;
		e4_flowerEnemy[i].Top = e4_flowerEnemy[i].Y + flowerEnemyHeight;

		e5_fireballEnemy[i].Left = e5_fireballEnemy[i].X + 9;
		e5_fireballEnemy[i].Right = e5_fireballEnemy[i].X + fireballEnemyWidth;
		e5_fireballEnemy[i].Bottom = e5_fireballEnemy[i].Y + 10;
		e5_fireballEnemy[i].Top = e5_fireballEnemy[i].Y + fireballEnemyHeight;
	}

	// Check collision with all enemies
	for (int j = 0; j < MAX_ENEMY; j++) {
		if (e1_rockEnemy[j].active && checkCollision(e1_rockEnemy[j])) {
			e1_rockEnemy[j].active = false;
			if (healthIndex > 0) healthIndex--;
		}
		if (e2_dragonEnemy[j].active && checkCollision(e2_dragonEnemy[j])) {
			e2_dragonEnemy[j].active = false;
			if (healthIndex > 0) healthIndex--;
		}
		if (e3_dragonEnemy2[j].active && checkCollision(e3_dragonEnemy2[j])) {
			e3_dragonEnemy2[j].active = false;
			if (healthIndex > 0) healthIndex--;
		}
		if (e4_flowerEnemy[j].active && checkCollision(e4_flowerEnemy[j])) {
			e4_flowerEnemy[j].active = false;
			if (healthIndex > 0) healthIndex--;
		}
		if (e5_fireballEnemy[j].active && checkCollision(e5_fireballEnemy[j])) {
			e5_fireballEnemy[j].active = false;
			if (healthIndex > 0) healthIndex--;
		}
	}
}


bool checkFireballCollision(Enemy& e5_fireballEnemy, Enemy& enemy) {
	// Fireball's bounding box
	int fireballLeft = e5_fireballEnemy.X;
	int fireballRight = e5_fireballEnemy.X + e5_fireballEnemy.width;
	int fireballTop = e5_fireballEnemy.Y;
	int fireballBottom = e5_fireballEnemy.Y + e5_fireballEnemy.height;

	// Enemy's bounding box
	int enemyLeft = enemy.X;
	int enemyRight = enemy.X + enemy.width;
	int enemyTop = enemy.Y;
	int enemyBottom = enemy.Y + enemy.height;
	// Check for overlap (collision)
	if (fireballLeft > enemy.Left && fireballRight < enemy.Right && fireballTop > enemy.Top && fireballTop < enemy.Bottom) {
		return true;  // Collision detected
	}
	return false;  // No collision

}


void checkFireballEnemyCollisions() {
	// Loop through all active fireballs
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e5_fireballEnemy[i].active) {  // Check for active fireball (assuming a fireball is active if x >= 0)

			for (int j = 0; j < MAX_ENEMY; j++){  // Corrected from 'i++' to 'j++'
				// Check collisions with each type of enemy
				if (e4_flowerEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e4_flowerEnemy[j])) {
					// Handle collision with flower enemy
					e4_flowerEnemy[j].active = false;  // Deactivate enemy
					e5_fireballEnemy[i].active = false;
					break;  // Stop checking further once collision is detected
				}
				else if (e2_dragonEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e2_dragonEnemy[j])) {
					// Handle collision with dragon enemy
					e2_dragonEnemy[j].active = false;  // Deactivate enemy
					e5_fireballEnemy[i].active = false;
					break;
				}
				else if (e3_dragonEnemy2[j].active && checkFireballCollision(e5_fireballEnemy[i], e3_dragonEnemy2[j])) {
					// Handle collision with dragon2 enemy
					e3_dragonEnemy2[j].active = false;  // Deactivate enemy
					e5_fireballEnemy[i].active = false;
					break;
				}
				else if (e5_fireballEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e5_fireballEnemy[j])) {
					// Handle collision with fireball enemy
					e5_fireballEnemy[j].active = false;  // Deactivate enemy
					e5_fireballEnemy[i].active = false;
					break;
				}
				else if (e1_rockEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e1_rockEnemy[j])) {
					// Handle collision with rock enemy
					e1_rockEnemy[j].active = false;  // Deactivate enemy
					e5_fireballEnemy[i].active = false;
					break;
				}
			}
		}
	}
}



#endif