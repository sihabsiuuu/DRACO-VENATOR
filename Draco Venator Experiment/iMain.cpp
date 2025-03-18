#include "iGraphics.h"
#include <Windows.h>		

#include "HomePage.h"
//#include "Character.h"
//#include "Enemy.h"
using namespace std;


void bossEnemyHeroMovementTrack();
#define screenWidth 1280
#define screenHeight 720
int bossX, bossY;
int enemyX, enemyY;
void drawProjectiles();
void runAndJumpInIDraw();				// Call From iDraw

int intro;



int menuChangeControl;
int characterBgChangeControl;

int characteriSetTimerControl;
int characteriSetTimerJumpControl;
int rockEnemyiSetTimerControl;
int heroNormalAttackiSetTimerControl;
int dragonEnemyiSetTimerControl;


int gamePlaybackgroundiSetTimerControl;

int flowerEnemyiSetTimerControl; // Movement speed adjustment
int fireballEnemyiSetTimerControl;
int dragonEnemy2iSetTimerControl;


void level1();
void level2();
void level3();
void checkPhaseTransition();

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
void iDraw()
{
	iClear();

	//(0, 0, 1280, 720);
	//iSetColor(255, 255, 255);

	loadImage();
	handleHomeMouseOver();
	drawMusicIcon();
	iText(50, 25, "For Mute or Unmute: Press F10 key.");
	//iShowBMP2(heroCordinateX+30, heroCordinateY+15, heroAttackFlame[1], 0);
	//iShowBMP2(50, 50, resumePopUp, 0);


	if (gameState == 0 && showExitPopup){
		handlePlayGamePageMouseOver();			// POP UP MOUSE OVER
	}
	if (gameState == 0 && gamePaused && !showExitPopup){
		if (gamePaused) {
			iText(screenWidth / 2 - 89, screenHeight / 2 + 89, "GAME PAUSED", GLUT_BITMAP_TIMES_ROMAN_24);  // Show a "Paused" text
			if (gamePausedButtonOver){
				iShowBMP2(screenWidth / 2 - 50, screenHeight / 2 - 50, gameUnPausedIcon, 0);
			}
			else{
				iShowBMP2(screenWidth / 2 - 50, screenHeight / 2 - 50, gamePausedIcon, 0);
			}
			return;  // Don't update anything else if the game is paused
		}
	}

	if (gameState == 0 && !gamePaused && !showExitPopup){
		if (resumeButtonIndex){
			iShowBMP2(backButtonX, backButtonY, playGamePausedIcon, 0);
		}
	}

	if (gameState == 0 && !gamePaused){
		drawProjectiles();
	}

	if (isPhase1){
		drawEnemy();
	}

	if (gameState == 0 && currentLevel == 1 && !gamePaused){
		level1();
	}
	if (gameState == 0 && currentLevel == 2 && !gamePaused){
		level2();
	}
	if (gameState == 0 && currentLevel == 3 && !gamePaused){
		level3();
	}
	if (gameState == -1){
		resetNameInput();
	}

	bossEnemyHeroMovementTrack();
	bossEnemyPositionChange();

	if (!gamePaused && healthIndex > 0){
		collisionCheckWithHeroBody();
	}

	if (timeBarY <= 660 && normalHealthBarX <= 865){
		gameStart= true;
	}

	//iShowBMP(200, 200, "image//heroA.bmp");

	if (isPhase2 && gameState == 0 && !gamePaused){
		char bossTimerText[20];
		sprintf_s(bossTimerText, sizeof(bossTimerText), "%d sec", bossEnemyAliveTimeSeconds);

		iSetColor(0, 255, 0);
		iText(600, 667 + 5, bossTimerText, GLUT_BITMAP_HELVETICA_18);
	}
	iSetColor(255, 255, 255);

	//checkBossAttackCollision();
	checkFireballEnemyCollisions();
	
}
void bossEnemyPositionChange(){
		if (bossMoveLeft && !isBossEnemyStance && !isBossEnemyAppear)  {
			bossEnemy.X -= 1;
			isBossEnemyStance = false;
			isBossEnemyWalk = true;
			isBossEnemyForward = false;
			bossEnemyAttack_1_Index = 0;
			bossEnemyAttack_3_Index = 0;
		}
		if (bossMoveRight && !isBossEnemyStance && !isBossEnemyAppear){
			bossEnemy.X += 1;
			isBossEnemyStance = false;
			isBossEnemyWalk = true;
			isBossEnemyForward = true;
			bossEnemyAttack_1_Index = 0;
			bossEnemyAttack_3_Index = 0;
		}

		// Boundary conditions
		if (bossEnemy.X < 0) bossEnemy.X = 0;
		if (bossEnemy.X >1280) bossEnemy.X = 850; // Assuming screen width = 800


}
void bossEnemyHeroMovementTrack(){

		if (bossEnemy.X + 150 > heroCordinateX){
			bossMoveLeft = true;
			bossMoveRight = false;
		}
		if (bossEnemy.X + 400 < heroCordinateX){
			bossMoveLeft = false;
			bossMoveRight = true;
		}

		//Attack 1
		if (bossEnemy.X + 89 <= heroCordinateX && bossEnemy.X + 99 >= heroCordinateX && heroCordinateX >230){
			bossMoveLeft = false;
			bossMoveRight = false;
			isBossEnemyForward = false;
			isBossEnemyWalk = false;
			isBossEnemyAttack_1 = true;
		}

		if (bossEnemy.X + 455 <= heroCordinateX && bossEnemy.X + 465 >= heroCordinateX){
			bossMoveLeft = false;
			bossMoveRight = false;
			isBossEnemyWalk = false;
			isBossEnemyForward = true;
			isBossEnemyAttack_1 = true;
		}


		//FIRE attack BOSS

		if (bossEnemy.X - 86 <= heroCordinateX && bossEnemy.X + 27 >= heroCordinateX){
			bossMoveLeft = false;
			bossMoveRight = false;
			isBossEnemyForward = false;
			isBossEnemyWalk = false;
			isBossEnemyAttack_1 = false;
			isBossEnemyAttack_3 = true;
		}

		if (bossEnemy.X + 586 <= heroCordinateX && bossEnemy.X + 627 >= heroCordinateX){
			bossMoveLeft = false;
			bossMoveRight = false;
			isBossEnemyWalk = false;
			isBossEnemyForward = true;
			isBossEnemyAttack_1 = false;
			isBossEnemyAttack_3 = true;
		}

}



void level1() {
	//printf("Level 1\n");
	heroBoundary();

	runAndJumpInIDraw();		// JUMP and RUN function;

	runningJumpAction();
		drawBossEnemy();

	iShowBMP2(timeBarX, timeBarY, timeBar[timeBarIndex], 0);
	int minutes = totalSeconds / 60;
	int seconds = totalSeconds % 60;

	healthFunction();

	if (isPhase1){
		char timerText[20];
		sprintf_s(timerText, sizeof(timerText), "%02d:%02d", minutes, seconds);
		iSetColor(255, 255, 255);
		iText(610, 667 + 5, timerText, GLUT_BITMAP_HELVETICA_18);
	}

	sprintf_s(scoreText, sizeof(scoreText), "%d", score);
	iSetColor(255, 255, 255);  // White color
	iText(500, 667, scoreText, GLUT_BITMAP_HELVETICA_18);
	checkPhaseTransition();

}


void level2() {
	//printf("Level 2\n");

	heroBoundary();

	runAndJumpInIDraw();		// JUMP and RUN function;

	runningJumpAction();
		drawBossEnemy();


	iShowBMP2(timeBarX, timeBarY, timeBar[timeBarIndex + 1], 0);
	int minutes = totalSeconds / 60;
	int seconds = totalSeconds % 60;

	healthFunction();

	if (isPhase1){
		char timerText[20];
		sprintf_s(timerText, sizeof(timerText), "%02d:%02d", minutes, seconds);
		iSetColor(255, 255, 255);
		iText(610, 667 + 5, timerText, GLUT_BITMAP_HELVETICA_18);
	}

	sprintf_s(scoreText, sizeof(scoreText), "%d", score);
	iSetColor(255, 255, 255);  // White color
	iText(500, 667, scoreText, GLUT_BITMAP_HELVETICA_18);
	checkPhaseTransition();
}


void level3() {
	//printf("Level 3\n");

	heroBoundary();

	runAndJumpInIDraw();		// JUMP and RUN function;

	runningJumpAction();
		drawBossEnemy();



	iShowBMP2(timeBarX, timeBarY, timeBar[timeBarIndex + 2], 0);
	int minutes = totalSeconds / 60;
	int seconds = totalSeconds % 60;

	healthFunction();

	if (isPhase1){
		char timerText[20];
		sprintf_s(timerText, sizeof(timerText), "%02d:%02d", minutes, seconds);
		iSetColor(255, 255, 255);
		iText(610, 667 + 5, timerText, GLUT_BITMAP_HELVETICA_18);
	}

	sprintf_s(scoreText, sizeof(scoreText), "%d", score);
	iSetColor(255, 255, 255);  // White color
	iText(500, 667, scoreText, GLUT_BITMAP_HELVETICA_18);
	checkPhaseTransition();
}



void healthFunction(){
	//Additional Health Bar
	iShowBMP2(additionalHealthBarX, additionalHealthBarY, additionalHealthBar[additionalHealthBarIndex], 0);
	
	if (healthMechanism1){
		iShowBMP2(additionalHealthBarX, additionalHealthBarY, additionalHealthBar[additionalHealth], 0);
	}

	iShowBMP2(bossEnemyHealthBarX, bossEnemyHealthBarY, bossEnemyHealthBar[bossEnemyHealthBarIndex], 0);
	if (healthMechanism2){
		iShowBMP2(bossEnemyHealthBarX, bossEnemyHealthBarY, bossEnemyHealthBar[bossEnemyHealth], 0);
	}
	

	//NORMAL HEALTH BAR
	if (!bossEnemy.active){

		// HEALTH

		for (int i = 0; i < healthIndex; i++) {
			if (i < sizeof(health) / sizeof(health[0])) {
				iShowBMP2(normalHealthBarX + 45 + i * healthCordinateXIncreasing, 623, health[i], 0);
				if ((currentLevel == 2 || currentLevel == 3) && canUseMedicate){
					iShowBMP2(screenWidth / 2 + 130, screenHeight - 53, medicate[medicateIndex], 0);
				}
				else{
					iShowBMP2(screenWidth / 2 + 130, screenHeight - 53, medicate[medicateIndex + 1], 0);
				}
			}
		}

		iShowBMP2(normalHealthBarX, normalHealthBarY, healthBar, 0);
	}

}

bool allEnemiesInactive() {
	for (int i = 0; i < MAX_ENEMY; i++) {
		if (e1_rockEnemy[i].active || e2_dragonEnemy[i].active || e3_dragonEnemy2[i].active || e5_fireballEnemy[i].active) {
			return false; // If any enemy is still active, return false
		}
	}
	return true; // All enemies are inactive
}
void checkPhaseTransition() {
	if (isPhase1 && gameStart){
		if (gameStart && healthIndex != 0 && allEnemiesInactive()) {
			gameState = 9;
			if (musicOn){
				PlaySound(0, 0, 0);
			}
			drawMusicIcon();
			loadImage();
		}
	}
  
}


void runAndJumpInIDraw() {
	if (gamePaused){
		return;
	}

	if (gameState == 0) {
		//iLine(0, 200, 1280, 200);

		//ENEMY
		drawEnemies();




		if (healthIndex == 0){
			//gameState = 9;
			gameState = 6;
			if (musicOn) {
				PlaySound("music\\Game Over Sound Effect.wav", NULL, SND_ASYNC);
			}
			else {
				PlaySound(0, 0, 0);
			}
			drawMusicIcon();
			loadImage();
		}



		if (!jump) {
			if (heroAttack){
				if (isForward) {
					forwardAttack();
				}
				else {
					backwardAttack();
				}
			}
			else{
				if (isForward) {
					forwardRun();
				}
				else {
					backwardRun();
				}
			}
		}
		else if (jump && standPosition) {  // Only JUMP in UP
			if (heroAttack){
				if (isForward) {
					forwardAttackWhileJump();
				}
				else {
					backwardAttackWhileJump();
				}
			}
			else{
				if (isForward) {
					forwardJump();
				}
				else {
					backwardJump();
				}
			}
		}
		else if (jump && !standPosition) {  // JUMP WHILE RUNNING
			if (heroAttack){
				if (isForward) {
					forwardAttackWhileJumpAndRunning();
				}
				else {
					backwardAttackWhileJumpAndRunning();
				}
			}
			else{
				if (isForward) {
					forwardJumpWhileRunning();
				}
				else {
					backwardJumpWhileRunning();
				}
			}
		}
	}
}









/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	//cout << "TEAM AERIS" << endl;
	iPassiveMouseMoveFunction_HomePage(mx, my);

	iPassiveMouseMove_Character(mx, my);

}



void iMouse(int button, int state, int mx, int my)
{
	cout << "x = " << mx << "\n" << "y = " << my << "\n\n" << endl;
	iMouseFunction_HomePage(button, state, mx, my);;

	iMouse_Character(button, state, mx, my);


}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	iKeyboardFunction_HomePage(key);					// for HOME PAGE

	iKeyboard_Character(key);


}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is: team AERIS:sihab,munia,nazifa,
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	iSpecialKeyboardFunction_HomePage(key);				// for HOME PAGE


	iSpecialKeyboard_Character(key);

}

void iSpecialKeyboardUp(unsigned char key) {
	if (key == GLUT_KEY_RIGHT) {
		isMovingRight = false; // Stop moving
		standPosition = true; // Reset to stance position
	}

	if (key == GLUT_KEY_LEFT) {
		isMovingLeft = false; // Stop moving
		standPosition = true; // Reset to stance position
	}
}


void change() {
	if (gamePaused){
		return;
	}
	else{
		heroIndex++;
		if (heroIndex >= 4) {
			heroIndex = 0;
		}
	}
}

void heroNormalattackChange() {
	if (gamePaused){
		return;
	}
	else{
		if (heroAttack){
			heroNormalAttackIndex++;
			if (heroNormalAttackIndex >= 8) {
				heroNormalAttackIndex = 0;
				heroAttack = false;
			}
		}
	}
}


void jumpChange() {
	if (gamePaused){
		return;
	}
	else{
		if (jump) {
			if (jumpUp) {
				heroCordinateJump += 20;
				if (heroCordinateJump >= JUMPLIMIT) {
					jumpUp = false;
					jumpDown = true;
				}
			}
			else {
				heroCordinateJump -= 20;
				if (heroCordinateJump <= 0) {
					jump = false;
					heroCordinateJump = 0;
				}
			}
		}
	}

}

void heroNormalAttackChangeWhileJump(){
	heroNormalAttackIndexWhileJump++;
	if (heroNormalAttackIndexWhileJump >= 10){
		heroNormalAttackIndexWhileJump = 0;
		heroAttack = false;
	}
}





void rockEnemyChange() {
	if (gamePaused) return;

	else{
		for (int i = 0; i < MAX_ENEMY; i++) {
			e1_rockEnemy[i].index++;
			if (e1_rockEnemy[i].index >= 5){
				e1_rockEnemy[i].index = 0;
			}
			if (e1_rockEnemy[i].active) {
				e1_rockEnemy[i].X -= e1_rockEnemy[i].speed;
				if (e1_rockEnemy[i].X < 0) {
					e1_rockEnemy[i].active = false; 
					if (currentLevel == 1){
						score--;
					}
					if (currentLevel == 2){
						score++;
					}
					if (currentLevel == 3){
						score += 3;
					}
				}
			}
		}
	}
}


void dragonEnemyChange() {
	if (gamePaused){
		return;
	}
	else {
		for (int i = 0; i < MAX_ENEMY; i++) {
			if (e2_dragonEnemy[i].active) {
				e2_dragonEnemy[i].index++;
				if (e2_dragonEnemy[i].index >= 17){
					e2_dragonEnemy[i].index = 0;
				}
				e2_dragonEnemy[i].X -= e2_dragonEnemy[i].speed;  // Move left
				if (e2_dragonEnemy[i].X < -267) {
					e2_dragonEnemy[i].active = false;  // Disable if off-screen
					if (currentLevel == 1){
						score--;
					}
					if (currentLevel == 2){
						score++;
					}
					if (currentLevel == 3){
						score += 2;
					}
				}
			}
		}
	}

}

void dragonEnemy2Change() {
	if (gamePaused){
		return;
	}
	else{
		for (int i = 0; i < MAX_ENEMY; i++) {
			if (e3_dragonEnemy2[i].active) {
				e3_dragonEnemy2[i].index++;
				if (e3_dragonEnemy2[i].index >= 3){
					e3_dragonEnemy2[i].index = 0;
				}
				e3_dragonEnemy2[i].X -= e3_dragonEnemy2[i].speed;

			
				if (e3_dragonEnemy2[i].X < -267) {
					e3_dragonEnemy2[i].active = false;  
					if (currentLevel == 1){
						score--;
					}
					if (currentLevel == 2){
						score++;
					}
					if (currentLevel == 3){
						score += 1;
					}
				}
			}
		}
	}
}



void flowerEnemyChange(){
	if (gamePaused){
		return;
	}
	else{
		for (int i = 0; i < MAX_ENEMY; i++) {
			if (e4_flowerEnemy[i].active) {
				e4_flowerEnemy[i].index++;
				if (e4_flowerEnemy[i].index >= 6){
					e4_flowerEnemy[i].index = 0;
				}
				e4_flowerEnemy[i].X -= e4_flowerEnemy[i].speed; 
				if (e4_flowerEnemy[i].X < 0) {
					e4_flowerEnemy[i].active = false;  
					if (currentLevel == 1){
						score--;
					}
					if (currentLevel == 2){
						score--;
					}
					if (currentLevel == 3){
						score--;
					}
				}
			}
		}

	}
}


void fireballFall()
{
	if (gamePaused){
		return;
	}
	else{
		for (int i = 0; i < MAX_ENEMY; i++) {
			if (e5_fireballEnemy[i].active) {
				e5_fireballEnemy[i].index++;
				if (e5_fireballEnemy[i].index >= 3){
					e5_fireballEnemy[i].index = 0;
				}
		
				e5_fireballEnemy[i].Y -= e5_fireballEnemy[i].speed;

			
				if (e5_fireballEnemy[i].Y < 200-25) {
					e5_fireballEnemy[i].active = false; 
					if (currentLevel == 1){
						score--;
					}
					if (currentLevel == 2){
						score--;
					}
					if (currentLevel == 3){
						score--;
					}
				}
			}
		}
	}
}

void positionFunctionFlowerEnemy(){
	int j = 1280;
	for (int i = 0; i < flowerEnemySlice; i++) {
		flowerEnemyPosition[i] = j;
		j += flowerEnemyWIDTH + 50;
	}
}

void backgroundChange(){
	if (isMovingRight) // Background Move left
	{
		for (int i = 0; i < 20; i++){
			position[i] -= width;
			if (position[i] < 0){
				position[i] = (slice * width) - width; // 120*20-120;
			}
		}
	}
	else if (isMovingLeft) // Background Move right
	{
		for (int i = 0; i < 20; i++){
			position[i] += width;
			if (position[i] >= slice * width){
				position[i] = 0;
			}
		}
	}
}


void positionFunction(){
	int i, j = 0;
	for (i = 0; i < slice; i++){
		position[i] = j;
		j += width;
	}
}

void updateTimer() {
	if (!gamePaused && gameStart) {
		totalSeconds++;
		if (gameState == 0 && !gamePaused && isPhase2){
			score += 1;
		}

		if (bossEnemyAliveTime && bossEnemyAliveTimeSeconds > 0 && gameState == 0) {
			bossEnemyAliveTimeSeconds--; // Decrease by 1 second
		}
	}
}





///////////////// Condition for Start Program \\\\\\\\\\\\\\\\\ 

int startWindow() {
	std::string input;
	cout << "Press Enter to continue program: ";
	std::getline(std::cin, input);
	cout << "\n";
	int number = 0;

	if (input.empty()) {
		number = 13;
		resetGame_level_1();
		return number;
	}
	else {
		for (int i = 0; !input.empty(); i++){
			cout << "Press Enter Key to Continue program: ";
			std::getline(std::cin, input);
			cout << "\n";
			if (input.empty()) {
				number = 13;
				resetGame_level_1();
				return number;
			}
		}
	}
}

void menuBGChange(){
	menuIndex++;
	if (menuIndex >= 116){
		menuIndex = 0;

	}

	characterBGIndex++;
	if (characterBGIndex >= 98){
		characterBGIndex = 0;

	}
}

void updateProjectiles() {
	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		if (normalAttack[i].active && !gamePaused) {
			normalAttack[i].x += normalAttack[i].speed * normalAttack[i].direction;

			// Deactivate if off-screen
			if (normalAttack[i].x < 0 || normalAttack[i].x > screenWidth) {
				normalAttack[i].active = 0;
			}
		}
		checkNormalAttackEnemyCollisions();
	}
}
void drawProjectiles() {
	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		if (normalAttack[i].active) {
			iShowBMP2(normalAttack[i].x, normalAttack[i].y, normalAttack[i].imagePath, 0);
		}
	}
}


void iSetTimer100(){
	jumpChange();
	heroNormalattackChange();
	backgroundChange();
	fireballFall();
	checkBossAttackCollision();
}

//void updateBossEnemy();

void iSetTimer200(){
	change();
	rockEnemyChange();
	dragonEnemyChange();
	flowerEnemyChange();
}

void updateAdditionalHealthBar(){
	if (bossEnemy.active){
		additionalHealthBarIndex++;
		if (additionalHealthBarIndex >= 146){
			additionalHealthBarIndex = 0;
			healthMechanism1 = true;

		}

		additionalHealthBarX -= 30;
		if (additionalHealthBarX<= 0){
			additionalHealthBarX = 0;
		}

		bossEnemyHealthBarIndex++;
		if (bossEnemyHealthBarIndex >= 140){
			bossEnemyHealthBarIndex = 0;
			healthMechanism2 = true;
		}

		bossEnemyHealthBarX -= 30;
		if (bossEnemyHealthBarX <= 670){
			bossEnemyHealthBarX = 670;
		}
	}



	// Phase 1 health bar
	normalHealthBarX -= 3;
	if (normalHealthBarX <= 865){
			normalHealthBarX = 865;
	}

	timeBarY--;
	if (timeBarY <= 660){
		timeBarY = 660;
	}
}

void iSetTimer20(){
	updateAdditionalHealthBar();
	updateProjectiles();
}


int main()
{
	///srand((unsigned)time(NULL));
	int continueGame = startWindow();
	if (continueGame == 13) {

		//resetGame_level_1();

		//iSetTimerFunction();
		//intro = iSetTimer(30, introChange);
		//menuChangeControl = iSetTimer(90, menuBGChange);
		//characterBgChangeControl = iSetTimer(90, characterBGChange);
		//characteriSetTimerControl = iSetTimer(200, change);											//***200
		//characteriSetTimerJumpControl = iSetTimer(100, jumpChange);			//**100
		//rockEnemyiSetTimerControl = iSetTimer(200, rockEnemyChange);								//***200
		//heroNormalAttackiSetTimerControl = iSetTimer(100, heroNormalattackChange); ///**100
		//timerID = iSetTimer(1000, updateTimer);
		//dragonEnemyiSetTimerControl = iSetTimer(200, dragonEnemyChange);							//***200


		//gamePlaybackgroundiSetTimerControl = iSetTimer(100, backgroundChange);		///**100


		//flowerEnemyiSetTimerControl = iSetTimer(200, FlowerEnemyChange); // Movement speed adjustment	//***200
		//fireballEnemyiSetTimerControl = iSetTimer(100, fireballFall);				///**100

		dragonEnemy2iSetTimerControl = iSetTimer(150, dragonEnemy2Change);
		iSetTimer(100, iSetTimer100);
		iSetTimer(200, iSetTimer200);
		iSetTimer(90, menuBGChange);
		iSetTimer(1000, updateTimer);
		//(20, updateProjectiles);
		iSetTimer(120, updateBossEnemy);
		//iSetTimer(20, updateAdditionalHealthBar);
		iSetTimer(20, iSetTimer20);
		//iSetTimer(100, checkPhaseTransition);
		positionFunction(); // for background
		positionFunctionFlowerEnemy();
		dracoVenatorPage = iLoadImage("image//dracoVenatorPage.png");
		if (musicOn){
			PlaySound("music\\studiokolomna.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		iInitialize(screenWidth, screenHeight, "DRACO VENATOR");
		///updated see the documentations
		//iSetSpecialKeyboardUp(iSpecialKeyboardUp);
		loadScores();
		gameState = -2;

		iStart();
	}
	return 0;
}