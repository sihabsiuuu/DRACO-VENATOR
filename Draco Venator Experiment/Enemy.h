#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#include "Image.h"
#include <iostream>
#include <string>

#include <ctime> // Required for clock()
#include <cstdlib> // Required for rand()

#include "HeroAttack.h"

#define rockWidth 80
#define rockHeight 75

#define dragonEnemyWidth 177
#define dragonEnemyHeight 112

#define dragonEnemy2Width 90
#define dragonEnemy2Height 89

#define flowerEnemyWidth 69
#define flowerEnemyHeight 151

#define fireballEnemyWidth 61
#define fireballEnemyHeight 110

#define MAX_ENEMY 10


void resetHero();
int score = 0;

bool NormalEnemyActive = true;

void resetUltimateBattle();

bool gameStart = false;


bool isPhase1 = false;
bool isPhase2 = false;
char continuePopUp[3][50] = { "image\\GameOver\\continue\\continue.bmp", "image\\GameOver\\continue\\yes.bmp", "image\\GameOver\\continue\\no.bmp" };

int continuePopUpIndex = 0;

void checkBossAttackCollision();
int healthIndex = 7;
int jumpHeight = 20;


int gameState = -1;

//Enemy.h










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
int rockHealth = 1;		
int dragonEnemyIndex = 0;
int dragonEnemyHealth = 1;


int rockEnemyCordinateX = 1280;
int rockEnemyCordinateY = 200;

int dragonEnemyCordinateX = 1280;
int dragonEnemyCordinateY = 283;


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
int fireballSpeed = 15;
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
int spawnInterval = 150;  
int spawnCooldown = 0;
int rockEnemySpeed = 15;       
int dragonEnemySpeed = 10;    
int dragonEnemy2Speed = 12;    
int flowerEnemySpeed = 8;      
int fireballEnemySpeed = 20;  

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


int attackDistance = 50; 

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
	int X = 750, Y = heroCordinateY-25; 
	int width = 228, height=295;
};


struct BossEnemy bossEnemy;



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

		char bossEnemyHealthText[20];
		sprintf_s(bossEnemyHealthText, sizeof(bossEnemyHealthText), "BEAST HP: %d", bossEnemyHealth);
		iText(1040, 650, bossEnemyHealthText, GLUT_BITMAP_HELVETICA_18);

		char heroHealthText[20];
		sprintf_s(heroHealthText, sizeof(heroHealthText), "HERO HP: %d", additionalHealth);
		iText(130, 645, heroHealthText, GLUT_BITMAP_HELVETICA_18);

	}

}


void drawEnemy()
{
	static std::clock_t rockEnemyLastSpawnTimeTime = std::clock(); 
	double elapsedRockEnemyTime = (double)(std::clock() - rockEnemyLastSpawnTimeTime) / CLOCKS_PER_SEC;

	static std::clock_t dragonEnemyLastSpawnTime = std::clock(); 
	double elapsedDragonEnemyTime = (double)(std::clock() - dragonEnemyLastSpawnTime) / CLOCKS_PER_SEC;

	static std::clock_t dragonEnemy2LastSpawnTime = std::clock(); 
	double elapsedDragonEnemy2Time = (double)(std::clock() - dragonEnemy2LastSpawnTime) / CLOCKS_PER_SEC; 

	static std::clock_t flowerEnemyLastSpawnTime = std::clock(); 
	double elapsedflowerEnemyTime = (double)(std::clock() - flowerEnemyLastSpawnTime) / CLOCKS_PER_SEC; 

	static std::clock_t fireballEnemyLastSpawnTime = std::clock(); 
	double elapsedfireballEnemyTime = (double)(std::clock() - fireballEnemyLastSpawnTime) / CLOCKS_PER_SEC; 

	if (gameState == 0 && gameStart && !bossEnemy.active && NormalEnemyActive) 
	{
		if (elapsedRockEnemyTime >= 5.0)
		{
			if (rockEnemyCount < MAX_ENEMY) {
				rockEnemyLastSpawnTimeTime = std::clock(); 

				e1_rockEnemy[rockEnemyCount].active = true;
				e1_rockEnemy[rockEnemyCount].X = 1280;
				e1_rockEnemy[rockEnemyCount].Y = 200;
				if (currentLevel == 1){
					e1_rockEnemy[rockEnemyCount].speed = 20;
				}
				else if (currentLevel == 2){
					e1_rockEnemy[rockEnemyCount].speed = 25;
				}
				else if (currentLevel == 3){
					e1_rockEnemy[rockEnemyCount].speed = 30;
				}
				e1_rockEnemy[rockEnemyCount].width = rockWidth;
				e1_rockEnemy[rockEnemyCount].height = rockHeight;
				rockEnemyCount++;
			}

		}

		if (elapsedDragonEnemyTime >= 10.0)
		{
			if (dragonEnemyCount < MAX_ENEMY) {
				dragonEnemyLastSpawnTime = std::clock(); 

				e2_dragonEnemy[dragonEnemyCount].active = true;
				e2_dragonEnemy[dragonEnemyCount].X = 1280;
				e2_dragonEnemy[dragonEnemyCount].Y = 283 + 100;
				if (currentLevel == 1){
					e2_dragonEnemy[dragonEnemyCount].speed = 20;
				}
				else if (currentLevel == 2){
					e2_dragonEnemy[dragonEnemyCount].speed = 25;
				}
				else if (currentLevel == 3){
					e2_dragonEnemy[dragonEnemyCount].speed = 35;
				}
				e2_dragonEnemy[dragonEnemyCount].width = dragonEnemyWidth;
				e2_dragonEnemy[dragonEnemyCount].height = dragonEnemyHeight;
				dragonEnemyCount++;
			}
		}
		if (elapsedDragonEnemy2Time >= 10.0)
		{
			if (dragonEnemy2Count < MAX_ENEMY) {
				dragonEnemy2LastSpawnTime = std::clock(); 

				e3_dragonEnemy2[dragonEnemy2Count].active = true;
				e3_dragonEnemy2[dragonEnemy2Count].X = 1280+800;
				e3_dragonEnemy2[dragonEnemy2Count].Y = 283 + 50;
				if (currentLevel == 1){
					e3_dragonEnemy2[dragonEnemy2Count].speed = 20;
				}
				else if (currentLevel == 2){
					e3_dragonEnemy2[dragonEnemy2Count].speed = 25;
				}
				else if (currentLevel == 3){
					e3_dragonEnemy2[dragonEnemy2Count].speed = 30;
				}
				e3_dragonEnemy2[dragonEnemy2Count].width = dragonEnemy2Width;
				e3_dragonEnemy2[dragonEnemy2Count].height = dragonEnemy2Height;
				dragonEnemy2Count++;
			}
		}

		if (elapsedflowerEnemyTime >= 5.0)
		{
			if (flowerEnemyCount < MAX_ENEMY){
				flowerEnemyLastSpawnTime = std::clock(); 

				e4_flowerEnemy[flowerEnemyCount].active = true;
				e4_flowerEnemy[flowerEnemyCount].X = 1280 + 250;
				e4_flowerEnemy[flowerEnemyCount].Y = 172;
				if (currentLevel == 1){
					e4_flowerEnemy[flowerEnemyCount].speed = 20;
				}
				else if (currentLevel == 2){
					e4_flowerEnemy[flowerEnemyCount].speed = 25;
				}
				else if (currentLevel == 3){
					e4_flowerEnemy[flowerEnemyCount].speed = 30;
				}
				e4_flowerEnemy[flowerEnemyCount].width = flowerEnemyWidth;
				e4_flowerEnemy[flowerEnemyCount].height = flowerEnemyHeight;
				flowerEnemyCount++;
			}
		}

		if (elapsedfireballEnemyTime >= 2.0)
		{
			if (fireballEnemyCount < MAX_ENEMY){
				fireballEnemyLastSpawnTime = std::clock(); 

				e5_fireballEnemy[fireballEnemyCount].active = true;
				e5_fireballEnemy[fireballEnemyCount].X = rand() % 1280;
				e5_fireballEnemy[fireballEnemyCount].Y = 720;
				if (currentLevel == 1){
					e5_fireballEnemy[fireballEnemyCount].speed = 10;
				}
				if (currentLevel == 2){
					e5_fireballEnemy[fireballEnemyCount].speed = 15;
				}
				if (currentLevel == 3){
					e5_fireballEnemy[fireballEnemyCount].speed = 20;
				}
				e5_fireballEnemy[fireballEnemyCount].width = fireballEnemyWidth;
				e5_fireballEnemy[fireballEnemyCount].height = fireballEnemyHeight;
				fireballEnemyCount++;
			}
		}
	}
}


void updateEnemies() {

	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e1_rockEnemy[i].active) {
			e1_rockEnemy[i].X -= rockEnemySpeed;
			if (e1_rockEnemy[i].X < 0) {
				e1_rockEnemy[i].active = false;
			}
		}
	}

	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e2_dragonEnemy[i].active) {
			e2_dragonEnemy[i].X -= dragonEnemySpeed;
			if (e2_dragonEnemy[i].X < -267) {
				e2_dragonEnemy[i].active = false;
			}
		}
	}


	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e3_dragonEnemy2[i].active) {
			e3_dragonEnemy2[i].X -= dragonEnemy2Speed;
			if (e3_dragonEnemy2[i].X <= 0){
				e3_dragonEnemy2[i].active = false;
			}
		}
	}


	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e4_flowerEnemy[i].active) {
			e4_flowerEnemy[i].X -= flowerEnemySpeed;
			if (e4_flowerEnemy[i].X < 0){
				e4_flowerEnemy[i].active = false;
			}
		}
	}


	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e5_fireballEnemy[i].active) {
			e5_fireballEnemy[i].Y -= fireballEnemySpeed;
			if (e5_fireballEnemy[i].Y <= 200) {
				e5_fireballEnemy[i].active = false;
			}
		}
	}

}

void updateBossEnemy() {
	if (isBossEnemyAppear) {
		bossEnemyAppearIndex++;
		if (bossEnemyAppearIndex >= 24) {
			bossEnemyAppearIndex = 0;
			isBossEnemyAppear = false;
			isBossEnemyStance = true;
		}
	}

	if (isBossEnemyStance) {
		bossEnemyStanceIndex++;
		if (bossEnemyStanceIndex >= 30) {
			bossEnemyStanceIndex = 0;
			isBossEnemyStance = false;
			isBossEnemyWalk = true;
		
		}
	}

	if (isBossEnemyWalk) {
		bossEnemyWalkIndex++;
		if (bossEnemyWalkIndex >= 20) {
			bossEnemyWalkIndex = 0;
		}
	}

	if (isBossEnemyAttack_1) {
		bossEnemyAttack_1_Index++;
		if (bossEnemyAttack_1_Index >= 24) {
			bossEnemyAttack_1_Index = 0;
		}
	}
	if (isBossEnemyAttack_3) {
		bossEnemyAttack_3_Index++;
		if (bossEnemyAttack_3_Index >= 30) {
			bossEnemyAttack_3_Index = 0; 
			isBossEnemyAttack_3 = false;
			isBossEnemyWalk = true;
		}
	}
}



void drawEnemies() {

	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e1_rockEnemy[i].active) {
			iShowBMP2(e1_rockEnemy[i].X, e1_rockEnemy[i].Y, rockEnemy[e1_rockEnemy[i].index], 255);
		}
	}

	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e2_dragonEnemy[i].active) {
			iShowBMP2(e2_dragonEnemy[i].X, e2_dragonEnemy[i].Y, dragonEnemy[e2_dragonEnemy[i].index], 0);
		}
	}


	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e3_dragonEnemy2[i].active) {
			iShowBMP2(e3_dragonEnemy2[i].X, e3_dragonEnemy2[i].Y, dragonEnemy2[e3_dragonEnemy2[i].index], 0);
		}
	}


	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e4_flowerEnemy[i].active) {
			iShowBMP2(e4_flowerEnemy[i].X, e4_flowerEnemy[i].Y, Flower[e4_flowerEnemy[i].index], 0);
		}
	}


	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e5_fireballEnemy[i].active) {
			iShowBMP2(e5_fireballEnemy[i].X, e5_fireballEnemy[i].Y, fireball[e5_fireballEnemy[i].index], 0);
		}
	}
	
}



bool checkNormalAttackCollision(Attack& attack, Enemy& enemy) {
	return attack.x + attack.width > enemy.X &&
		attack.x < enemy.X + enemy.width &&
		attack.y + attack.height > enemy.Y &&
		attack.y < enemy.Y + enemy.height;
}

void checkNormalAttackEnemyCollisions() {
	for (int i = 0; i < MAX_ENEMY; i++) {
		e1_rockEnemy[i].Left = e1_rockEnemy[i].X;
		e1_rockEnemy[i].Right = e1_rockEnemy[i].X + rockWidth;
		e1_rockEnemy[i].Bottom = e1_rockEnemy[i].Y;
		e1_rockEnemy[i].Top = e1_rockEnemy[i].Y + rockHeight;

		switch (dragonEnemyIndex) {
		case 0: case 1: case 2: case 16:
			e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 102;
			e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + 265;
			e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 5;
			e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + 276;
			break;
		case 3: case 4: case 5: case 6: case 7: case 8: case 14: case 15:
			e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 160;
			e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + 255;
			e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 17;
			e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + 109;
			break;
		case 9: case 10: case 11: case 12: case 13:
			e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 55;
			e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + 110;
			e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 24;
			e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + 95;
			break;
		}


		e3_dragonEnemy2[i].Left = e3_dragonEnemy2[i].X + 7;
		e3_dragonEnemy2[i].Right = e3_dragonEnemy2[i].X + dragonEnemy2Width;
		e3_dragonEnemy2[i].Bottom = e3_dragonEnemy2[i].Y + 21;
		e3_dragonEnemy2[i].Top = e3_dragonEnemy2[i].Y + dragonEnemy2Height;

		e4_flowerEnemy[i].Left = e4_flowerEnemy[i].X + 11;
		e4_flowerEnemy[i].Right = e4_flowerEnemy[i].X + 100;
		e4_flowerEnemy[i].Bottom = e4_flowerEnemy[i].Y + 34;
		e4_flowerEnemy[i].Top = e4_flowerEnemy[i].Y + 182;

		e5_fireballEnemy[i].Left = e5_fireballEnemy[i].X + 11;
		e5_fireballEnemy[i].Right = e5_fireballEnemy[i].X + fireballEnemyWidth;
		e5_fireballEnemy[i].Bottom = e5_fireballEnemy[i].Y + 10;
		e5_fireballEnemy[i].Top = e5_fireballEnemy[i].Y + fireballEnemyHeight;
	}

	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		if (!normalAttack[i].active) continue;
		for (int j = 0; j < MAX_ENEMY; j++) {
			Enemy* enemy = nullptr;
			int scoreIncrease = 0;

			if (currentLevel == 3 && e4_flowerEnemy[j].active) {
				enemy = &e4_flowerEnemy[j];
				scoreIncrease = 2;
			}
			else if (currentLevel == 2) {
				if (e2_dragonEnemy[j].active) {
					enemy = &e2_dragonEnemy[j];
					scoreIncrease = 5;
				}
				else if (e3_dragonEnemy2[j].active) {
					enemy = &e3_dragonEnemy2[j];
					scoreIncrease = 3;
				}
				else if (e4_flowerEnemy[j].active) {
					enemy = &e4_flowerEnemy[j];
					scoreIncrease = 1;
				}
			}
			else if (currentLevel == 1) {
				if (e1_rockEnemy[j].active) {
					enemy = &e1_rockEnemy[j];
					scoreIncrease = 2;
				}
				else if (e2_dragonEnemy[j].active) {
					enemy = &e2_dragonEnemy[j];
					scoreIncrease = 5;
				}
				else if (e3_dragonEnemy2[j].active) {
					enemy = &e3_dragonEnemy2[j];
					scoreIncrease = 3;
				}
				else if (e4_flowerEnemy[j].active) {
					enemy = &e4_flowerEnemy[j];
					scoreIncrease = 2;
				}
				else if (e5_fireballEnemy[j].active) {
					enemy = &e5_fireballEnemy[j];
					scoreIncrease = 1;
				}
			}

			if (enemy && checkNormalAttackCollision(normalAttack[i], *enemy)) {
				enemy->active = false;
				normalAttack[i].active = false;
				score += scoreIncrease;
				break;
			}
		}
	}

	if (bossEnemy.active){
		for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
			if (normalAttack[i].active) {
				
				if (normalAttack[i].x + normalAttack[i].width >= bossEnemy.X + 245 &&
					normalAttack[i].x <= bossEnemy.X + bossEnemy.width &&
					normalAttack[i].y + normalAttack[i].height >= bossEnemy.Y &&
					normalAttack[i].y <= bossEnemy.Y + bossEnemy.height) {

					normalAttack[i].active = false;
					bossEnemy.health -= 1;
					bossEnemyHealth--;
					score += 5;

					
					if (bossEnemy.health <= 0 || bossEnemyHealth <= 0) {
						bossEnemy.active = false;
						gameState = 6;
					}
				}
			}
		}
		
	}
}


void checkBossAttackCollision() {
	if (isBossEnemyAttack_3 && bossEnemyAttack_3_Index == 12 && isPhase2 && gameState == 0) {
		int heroLeft = heroCordinateX;
		int heroRight = heroCordinateX + heroWidth - 10;
		int heroTop = heroCordinateY + heroHeight;
		int heroBottom = heroCordinateY;

		// Adjust hero's collision bounds when jumping
		if (jump) {
			heroTop = heroCordinateY + heroCordinateJump + jumpHeight;
			heroBottom = heroCordinateY + heroCordinateJump;
		}

		// Boss attack bounds
		int bossAttackLeft = bossEnemy.X - 86;
		int bossAttackRight = bossEnemy.X + 627;
		int bossAttackTop = bossEnemy.Y + bossEnemy.height;  // Corrected top boundary
		int bossAttackBottom = bossEnemy.Y;

		// Corrected collision detection logic
		if (bossAttackRight >= heroLeft && bossAttackLeft <= heroRight &&
			bossAttackTop >= heroBottom && bossAttackBottom <= heroTop) {
			printf("Boss attack hit the hero!\n");
			if (currentLevel == 1){
				additionalHealth -= 5;
				score -= 5;
			}
			else if (currentLevel == 1){
				additionalHealth -= 10;
				score -= 7;
			}
			else if (currentLevel == 1){
				additionalHealth -= 15;
				score -= 10;
			}
			
		}
	}
}




void resetEnemies() {
	

	additionalHealthBarIndex = 0;
	additionalHealthBarX = 1280;
	additionalHealth = 145;
	healthMechanism1 = false;
	healthMechanism2 = false;
	normalHealthBarX = 1280;
	timeBarY = 720;


	bossEnemyHealthBarIndex = 0;
	bossEnemyHealth = 140;
	bossEnemyHealthBarX = 1280;

	gameStart = false;

	normalHealthMechanism = false;

	rockEnemyCount = 0;
	dragonEnemyCount = 0;
	dragonEnemy2Count = 0;
	flowerEnemyCount = 0;
	fireballEnemyCount = 0;

	

	
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


	for (int i = 0; i < MAX_ENEMY; i++) {
		e1_rockEnemy[i].active = false;
		e2_dragonEnemy[i].active = false;
		e3_dragonEnemy2[i].active = false;
		e4_flowerEnemy[i].active = false;
		e5_fireballEnemy[i].active = false;
	}


	
	rockEnemySpeed = 15;
	dragonEnemySpeed = 10;
	dragonEnemy2Speed = 12;
	flowerEnemySpeed = 8;
	fireballEnemySpeed = 20;

	
	enemySpawnTimer = 0;
	spawnCooldown = 0;

	
	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		normalAttack[i].active = false;
	}

	isPhase1 = true;
	isPhase2 = false;

	
	bossEnemy.active = false;
	isBossEnemyAppear = false;
	isBossEnemyStance = false;
	isBossEnemyWalk = false;

	bossEnemy.X = 750;

	bossEnemyStanceIndex = 0;
	bossEnemyAppearIndex = 0;
	bossEnemyWalkIndex = 0;

}
bool checkCollision(Enemy& enemy) {

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

	
	return (heroRight > enemy.Left && heroLeft < enemy.Right && heroBottom < enemy.Top && heroTop > enemy.Bottom);
}

void collisionCheckWithHeroBody() {
	for (int i = 0; i < MAX_ENEMY; i++) {
		e1_rockEnemy[i].Left = e1_rockEnemy[i].X;
		e1_rockEnemy[i].Right = e1_rockEnemy[i].X + rockWidth;
		e1_rockEnemy[i].Bottom = e1_rockEnemy[i].Y;
		e1_rockEnemy[i].Top = e1_rockEnemy[i].Y + rockHeight;

		//e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 95;
		//e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + dragonEnemyWidth;
		//e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 18;
		//e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + dragonEnemyHeight;

		if ((dragonEnemyIndex >= 0 && dragonEnemyIndex <= 2) || dragonEnemyIndex == 16){
			e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 102;
			e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + 265;
			e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 5;
			e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + 276;
		}

		if (dragonEnemyIndex >= 3 && dragonEnemyIndex <= 8 || dragonEnemyIndex == 14 || dragonEnemyIndex == 15){
			e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 160;
			e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + 255;
			e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 17;
			e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + 109;
		}

		if ((dragonEnemyIndex >= 9 && dragonEnemyIndex <= 13)){
			e2_dragonEnemy[i].Left = e2_dragonEnemy[i].X + 55;
			e2_dragonEnemy[i].Right = e2_dragonEnemy[i].X + 110;
			e2_dragonEnemy[i].Bottom = e2_dragonEnemy[i].Y + 24;
			e2_dragonEnemy[i].Top = e2_dragonEnemy[i].Y + 95;
		}
		e3_dragonEnemy2[i].Left = e3_dragonEnemy2[i].X + 7;
		e3_dragonEnemy2[i].Right = e3_dragonEnemy2[i].X + dragonEnemy2Width;
		e3_dragonEnemy2[i].Bottom = e3_dragonEnemy2[i].Y + 21;
		e3_dragonEnemy2[i].Top = e3_dragonEnemy2[i].Y + dragonEnemy2Height;


		e4_flowerEnemy[i].Left = e4_flowerEnemy[i].X + 13;
		e4_flowerEnemy[i].Right = e4_flowerEnemy[i].X + flowerEnemyWidth;
		e4_flowerEnemy[i].Bottom = e4_flowerEnemy[i].Y + 34;
		e4_flowerEnemy[i].Top = e4_flowerEnemy[i].Y + flowerEnemyHeight;


		e5_fireballEnemy[i].Left = e5_fireballEnemy[i].X + 11;
		e5_fireballEnemy[i].Right = e5_fireballEnemy[i].X + fireballEnemyWidth;
		e5_fireballEnemy[i].Bottom = e5_fireballEnemy[i].Y + 10;
		e5_fireballEnemy[i].Top = e5_fireballEnemy[i].Y + fireballEnemyHeight;
	}

	for (int j = 0; j < MAX_ENEMY; j++) {
		if (e1_rockEnemy[j].active && checkCollision(e1_rockEnemy[j])) {
			e1_rockEnemy[j].active = false;
			if (healthIndex > 0) {
				healthIndex--;
				if (currentLevel == 1){
					score -= 3;
				}
				else if (currentLevel == 2){
					score -= 2;
				}
				else if (currentLevel == 3){
					score--;
				}
			}
		}
		if (e2_dragonEnemy[j].active && checkCollision(e2_dragonEnemy[j])) {
			e2_dragonEnemy[j].active = false;
			if (healthIndex > 0){
				healthIndex--;
				if (currentLevel == 1){
					score -= 2;
				}
				else if (currentLevel == 2){
					score --;
				}
				else if (currentLevel == 3){
					score--;
				}
			}
		}
		if (e3_dragonEnemy2[j].active && checkCollision(e3_dragonEnemy2[j])) {
			e3_dragonEnemy2[j].active = false;
			if (healthIndex > 0){
				healthIndex--;
				if (currentLevel == 1){
					score -= 3;
				}
				else if (currentLevel == 2){
					score -= 2;
				}
				else if (currentLevel == 3){
					score--;
				}
			}
		}
		if (e4_flowerEnemy[j].active && checkCollision(e4_flowerEnemy[j])) {
			e4_flowerEnemy[j].active = false;
			if (healthIndex > 0) {
				healthIndex--;
				if (currentLevel == 1){
					score -= 3;
				}
				else if (currentLevel == 2){
					score -= 2;
				}
				else if (currentLevel == 3){
					score--;
				}
			}
		}
		if (e5_fireballEnemy[j].active && checkCollision(e5_fireballEnemy[j])) {
			e5_fireballEnemy[j].active = false;
			if (healthIndex > 0) {
				healthIndex--;
				if (currentLevel == 1){
					score -= 3;
				}
				else if (currentLevel == 2){
					score -= 2;
				}
				else if (currentLevel == 3){
					score--;
				}
			}
		}
	}
}


bool checkFireballCollision(Enemy& e5_fireballEnemy, Enemy& enemy) {

	int fireballLeft = e5_fireballEnemy.X;
	int fireballRight = e5_fireballEnemy.X + e5_fireballEnemy.width;
	int fireballTop = e5_fireballEnemy.Y;
	int fireballBottom = e5_fireballEnemy.Y + e5_fireballEnemy.height;

	int enemyLeft = enemy.X;
	int enemyRight = enemy.X + enemy.width;
	int enemyTop = enemy.Y;
	int enemyBottom = enemy.Y + enemy.height;

	if (fireballLeft > enemy.Left && fireballRight < enemy.Right && fireballTop > enemy.Top && fireballTop < enemy.Bottom) {
		return true; 
	}
	return false; 

}


void checkFireballEnemyCollisions() {
	
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e5_fireballEnemy[i].active) {  

			for (int j = 0; j < MAX_ENEMY; j++){  // Corrected from 'i++' to 'j++'
				
				if (e4_flowerEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e4_flowerEnemy[j])) {
					
					e4_flowerEnemy[j].active = false;  
					e5_fireballEnemy[i].active = false;
					break;  
				}
				else if (e2_dragonEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e2_dragonEnemy[j])) {
					
					e2_dragonEnemy[j].active = false; 
					e5_fireballEnemy[i].active = false;
					break;
				}
				else if (e3_dragonEnemy2[j].active && checkFireballCollision(e5_fireballEnemy[i], e3_dragonEnemy2[j])) {
					
					e3_dragonEnemy2[j].active = false; 
					e5_fireballEnemy[i].active = false;
					break;
				}
				else if (e5_fireballEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e5_fireballEnemy[j])) {
					
					e5_fireballEnemy[j].active = false;  
					e5_fireballEnemy[i].active = false;
					break;
				}
				else if (e1_rockEnemy[j].active && checkFireballCollision(e5_fireballEnemy[i], e1_rockEnemy[j])) {
					
					e1_rockEnemy[j].active = false; 
					e5_fireballEnemy[i].active = false;
					break;
				}
			}
		}
	}
}

void resetUltimateBattle() {

	resetHero();

	
	for (int i = 0; i < MAX_ENEMY; ++i) {
		
		e1_rockEnemy[i].active = false;
		e2_dragonEnemy[i].active = false;
		e3_dragonEnemy2[i].active = false;
		e4_flowerEnemy[i].active = false;
		e5_fireballEnemy[i].active = false;
	}



	additionalHealth = 145;
	bossEnemyHealth = 140;

	bossEnemyAliveTimeSeconds = 120;
	enemySpawnTimer = 0;  
	spawnCooldown = 0;   
	isBossEnemyAppear = true; 
	isBossEnemyStance = false;  
	isBossEnemyWalk = false;   
	isBossEnemyAttack_1 = false; 
	isBossEnemyAttack_3 = false; 
	isBossEnemyForward = false;  

	
	bossEnemy.active = true;
	bossEnemy.health = 200; 
	bossEnemy.X = 750;       
	bossEnemy.Y = heroCordinateY - 25;
	isPhase1 = false;
	isPhase2 = true;
	gameState = 0;
}


#endif