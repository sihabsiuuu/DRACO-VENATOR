//Character.h

#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include "Background.h"
#include "Enemy.h"

// rock enemy
#define rockWidth 80
#define rockHeight 73

bool canUseMedicate = true;
void healthFunction();

#define JUMPLIMIT 220
bool isOptionOver = true;
bool isOption = false;
int heroMovingSpeed = 2;

char heroIntro[5][50] = { "image//Character//intro//intro1.bmp", "image//Character//intro//intro2.bmp", "image//Character//intro//intro3.bmp", "image//Character//intro//intro4.bmp", "image//Character//intro//intro5.bmp" };

char heroRun[4][50] = { "image//Character//run//run1.bmp", "image//Character//run//run2.bmp", "image//Character//run//run3.bmp", "image//Character//run//run4.bmp" };
char heroReverseRun[4][50] = { "image//Character//run//rev_run1.bmp", "image//Character//run//rev_run2.bmp", "image//Character//run//rev_run3.bmp", "image//Character//run//rev_run4.bmp" };

char heroJump[9][50] = { "image//Character//jump//jump1.bmp", "image//Character//jump//jump2.bmp", "image//Character//jump//jump3.bmp", "image//Character//jump//jump4.bmp", "image//Character//jump//jump5.bmp", "image//Character//jump//jump6.bmp", "image//Character//jump//jump7.bmp", "image//Character//jump//jump8.bmp", "image//Character//jump//jump9.bmp" };
char heroReverseJump[9][50] = { "image//Character//jump//rev_jump1.bmp", "image//Character//jump//rev_jump2.bmp", "image//Character//jump//rev_jump3.bmp", "image//Character//jump//rev_jump4.bmp", "image//Character//jump//rev_jump5.bmp", "image//Character//jump//rev_jump6.bmp", "image//Character//jump//rev_jump7.bmp", "image//Character//jump//rev_jump8.bmp", "image//Character//jump//rev_jump9.bmp" };


char heroStance[4][50] = { "image//Character//stance//slide1.bmp", "image//Character//stance//slide2.bmp", "image//Character//stance//slide3.bmp", "image//Character//stance//slide4.bmp" };
char heroReverseStance[4][50] = { "image//Character//stance//rev_slide1.bmp", "image//Character//stance//rev_slide2.bmp", "image//Character//stance//rev_slide3.bmp", "image//Character//stance//rev_slide4.bmp" };

char heroNormalAttack[8][50] = { "image//Character//Normal Attack//slide1.bmp", "image//Character//Normal Attack//slide2.bmp", "image//Character//Normal Attack//slide3.bmp", "image//Character//Normal Attack//slide4.bmp", "image//Character//Normal Attack//slide5.bmp", "image//Character//Normal Attack//slide6.bmp", "image//Character//Normal Attack//slide7.bmp", "image//Character//Normal Attack//slide8.bmp" };
char heroReverseNormalAttack[8][50] = { "image//Character//Normal Attack//rev_slide1.bmp", "image//Character//Normal Attack//rev_slide2.bmp", "image//Character//Normal Attack//rev_slide3.bmp", "image//Character//Normal Attack//rev_slide4.bmp", "image//Character//Normal Attack//rev_slide5.bmp", "image//Character//Normal Attack//rev_slide6.bmp", "image//Character//Normal Attack//rev_slide7.bmp", "image//Character//Normal Attack//rev_slide8.bmp" };

char heroNormalAttackWhileJump[2][60] = { "image//Character//Normal Attack//jumpAttackRight.bmp", "image//Character//Normal Attack//jumpAttackLeft.bmp" };

char heroAttackFlame[2][65] = { "image//Character//Normal Attack//Attack Flame//attackFlame1.bmp", "image//Character//Normal Attack//Attack Flame//attackFlame2.bmp" };

char heroNormalAttackFlame[12][50] = { "image//Character//Normal Attack//flame1.bmp", "image//Character//Normal Attack//flame2.bmp", "image//Character//Normal Attack//flame3.bmp", "image//Character//Normal Attack//flame4.bmp", "image//Character//Normal Attack//flame5.bmp", "image//Character//Normal Attack//flame6.bmp", "image//Character//Normal Attack//flame7.bmp", "image//Character//Normal Attack//flame8.bmp", "image//Character//Normal Attack//flame9.bmp", "image//Character//Normal Attack//flame10.bmp", "image//Character//Normal Attack//flame11.bmp", "image//Character//Normal Attack//flame12.bmp" };

char healthBar[30] = "image//Health//Health Bar.bmp";
char health[7][30] = { "image//Health//health.bmp", "image//Health//health.bmp", "image//Health//health.bmp", "image//Health//health.bmp", "image//Health//health.bmp", "image//Health//health.bmp", "image//Health//health.bmp" };


char characters[6][40] = { "image\\Characters\\Character 1.bmp", "image\\Characters\\Character 2.bmp", "image\\Characters\\Character 3.bmp", "image\\Characters\\Character 4.bmp", "image\\Characters\\Character 5.bmp", "image\\Characters\\Character 6.bmp" };
int characterPageIndex = 0;

bool OPTIONS = false;
bool CHARACTERS = false;
bool SCORES = false;

char playMap[4][30] = { "image\\Map\\Map.bmp", "image\\Map\\Map – 1.bmp","image\\Map\\Map – 2.bmp","image\\Map\\Map – 3.bmp" };
int playMapIndex = 0;

char medicate[2][30] = { "image\\Medicate\\medi2.bmp", "image\\Medicate\\medi3.bmp" };
int medicateIndex = 0;


//CHRACTER BG
char characterBG[99][50] = {
	"image\\Characters\\ChBG\\frame00001.bmp",
	"image\\Characters\\ChBG\\frame00002.bmp",
	"image\\Characters\\ChBG\\frame00003.bmp",
	"image\\Characters\\ChBG\\frame00004.bmp",
	"image\\Characters\\ChBG\\frame00005.bmp",
	"image\\Characters\\ChBG\\frame00006.bmp",
	"image\\Characters\\ChBG\\frame00007.bmp",
	"image\\Characters\\ChBG\\frame00008.bmp",
	"image\\Characters\\ChBG\\frame00009.bmp",
	"image\\Characters\\ChBG\\frame00010.bmp",
	"image\\Characters\\ChBG\\frame00011.bmp",
	"image\\Characters\\ChBG\\frame00012.bmp",
	"image\\Characters\\ChBG\\frame00013.bmp",
	"image\\Characters\\ChBG\\frame00014.bmp",
	"image\\Characters\\ChBG\\frame00015.bmp",
	"image\\Characters\\ChBG\\frame00016.bmp",
	"image\\Characters\\ChBG\\frame00017.bmp",
	"image\\Characters\\ChBG\\frame00018.bmp",
	"image\\Characters\\ChBG\\frame00019.bmp",
	"image\\Characters\\ChBG\\frame00020.bmp",
	"image\\Characters\\ChBG\\frame00021.bmp",
	"image\\Characters\\ChBG\\frame00022.bmp",
	"image\\Characters\\ChBG\\frame00023.bmp",
	"image\\Characters\\ChBG\\frame00024.bmp",
	"image\\Characters\\ChBG\\frame00025.bmp",
	"image\\Characters\\ChBG\\frame00026.bmp",
	"image\\Characters\\ChBG\\frame00027.bmp",
	"image\\Characters\\ChBG\\frame00028.bmp",
	"image\\Characters\\ChBG\\frame00029.bmp",
	"image\\Characters\\ChBG\\frame00030.bmp",
	"image\\Characters\\ChBG\\frame00031.bmp",
	"image\\Characters\\ChBG\\frame00032.bmp",
	"image\\Characters\\ChBG\\frame00033.bmp",
	"image\\Characters\\ChBG\\frame00034.bmp",
	"image\\Characters\\ChBG\\frame00035.bmp",
	"image\\Characters\\ChBG\\frame00036.bmp",
	"image\\Characters\\ChBG\\frame00037.bmp",
	"image\\Characters\\ChBG\\frame00038.bmp",
	"image\\Characters\\ChBG\\frame00039.bmp",
	"image\\Characters\\ChBG\\frame00040.bmp",
	"image\\Characters\\ChBG\\frame00041.bmp",
	"image\\Characters\\ChBG\\frame00042.bmp",
	"image\\Characters\\ChBG\\frame00043.bmp",
	"image\\Characters\\ChBG\\frame00044.bmp",
	"image\\Characters\\ChBG\\frame00045.bmp",
	"image\\Characters\\ChBG\\frame00046.bmp",
	"image\\Characters\\ChBG\\frame00047.bmp",
	"image\\Characters\\ChBG\\frame00048.bmp",
	"image\\Characters\\ChBG\\frame00049.bmp",
	"image\\Characters\\ChBG\\frame00050.bmp",
	"image\\Characters\\ChBG\\frame00051.bmp",
	"image\\Characters\\ChBG\\frame00052.bmp",
	"image\\Characters\\ChBG\\frame00053.bmp",
	"image\\Characters\\ChBG\\frame00054.bmp",
	"image\\Characters\\ChBG\\frame00055.bmp",
	"image\\Characters\\ChBG\\frame00056.bmp",
	"image\\Characters\\ChBG\\frame00057.bmp",
	"image\\Characters\\ChBG\\frame00058.bmp",
	"image\\Characters\\ChBG\\frame00059.bmp",
	"image\\Characters\\ChBG\\frame00060.bmp",
	"image\\Characters\\ChBG\\frame00061.bmp",
	"image\\Characters\\ChBG\\frame00062.bmp",
	"image\\Characters\\ChBG\\frame00063.bmp",
	"image\\Characters\\ChBG\\frame00064.bmp",
	"image\\Characters\\ChBG\\frame00065.bmp",
	"image\\Characters\\ChBG\\frame00066.bmp",
	"image\\Characters\\ChBG\\frame00067.bmp",
	"image\\Characters\\ChBG\\frame00068.bmp",
	"image\\Characters\\ChBG\\frame00069.bmp",
	"image\\Characters\\ChBG\\frame00070.bmp",
	"image\\Characters\\ChBG\\frame00071.bmp",
	"image\\Characters\\ChBG\\frame00072.bmp",
	"image\\Characters\\ChBG\\frame00073.bmp",
	"image\\Characters\\ChBG\\frame00074.bmp",
	"image\\Characters\\ChBG\\frame00075.bmp",
	"image\\Characters\\ChBG\\frame00076.bmp",
	"image\\Characters\\ChBG\\frame00077.bmp",
	"image\\Characters\\ChBG\\frame00078.bmp",
	"image\\Characters\\ChBG\\frame00079.bmp",
	"image\\Characters\\ChBG\\frame00080.bmp",
	"image\\Characters\\ChBG\\frame00081.bmp",
	"image\\Characters\\ChBG\\frame00082.bmp",
	"image\\Characters\\ChBG\\frame00083.bmp",
	"image\\Characters\\ChBG\\frame00084.bmp",
	"image\\Characters\\ChBG\\frame00085.bmp",
	"image\\Characters\\ChBG\\frame00086.bmp",
	"image\\Characters\\ChBG\\frame00087.bmp",
	"image\\Characters\\ChBG\\frame00088.bmp",
	"image\\Characters\\ChBG\\frame00089.bmp",
	"image\\Characters\\ChBG\\frame00090.bmp",
	"image\\Characters\\ChBG\\frame00091.bmp",
	"image\\Characters\\ChBG\\frame00092.bmp",
	"image\\Characters\\ChBG\\frame00093.bmp",
	"image\\Characters\\ChBG\\frame00094.bmp",
	"image\\Characters\\ChBG\\frame00095.bmp",
	"image\\Characters\\ChBG\\frame00096.bmp",
	"image\\Characters\\ChBG\\frame00097.bmp",
	"image\\Characters\\ChBG\\frame00098.bmp",
	"image\\Characters\\ChBG\\frame00099.bmp",
};
int characterBGIndex = 0;

char options[4][40] = { "image\\Options\\Options Controls.bmp", "image\\Options\\Options GamePlay.bmp", "image\\Options\\Options Video.bmp", "image\\Options\\Options Audio.bmp" };
char optionIndex = 0;


char optionPages[5][40] = { "image\\Options\\Options Controls Page.bmp", "image\\Options\\Options Gameplay Page.bmp", "image\\Options\\Options Preset Medium.bmp", "image\\Options\\Options Music On.bmp", "image\\Options\\Options Music Off.bmp" };
char optionPagesIndex = 0;
// Character.h


int heroIndex = 0;


int heroNormalAttackIndex = 0;
int heroNormalAttackIndexWhileJump = 0;

int heroJumpIndex = 0;


int healthCordinateX = 910;
int healthCordinateY = 623;
int healthCordinateXIncreasing = 42;



void forwardAttackWhileJumpAndRunning();
void backwardAttackWhileJumpAndRunning();
void heroNormalAttackChangeWhileJump();

void rockEnemyHeroCollisionCheck();
void dragonEnemyHeroCollisionCheck();
void dragonEnemy2HerocollisionCheck();
void flowerEnemyHeroCollisionCheck();
void fireballEnemyHeroCollisionCheck();


//Functions
void iMouseMove_Character();
void ipassiveMouseMove_Character();
void iMouse_Character();
void iKeyboard_Character();
void iSpecialKeyboard_Character();

void heroBoundary();
void forwardRun();
void backwardRun();

void forwardJump();
void backwardJump();

void forwardJumpWhileRunning();
void backwardJumpWhileRunning();
void runningJumpAction();

void forwardAttack();
void backwardAttack();

void forwardAttackWhileJump();
void backwardAttackWhileJump();

void runningJumpAction();
void heroNormalAttackChangeWhileJump();


// From HomePage.h
int backButtonX = 10;
int backButtonY = 660;

//int gameState = -1;
int mouseOverState = -1;

// Function from HomePage.h
void ipassiveMouseMoveFunction_HomePage();
void iMouseFunction_HomePage();
void iKeyboardFunction_HomePage();
void iSpecialKeyboardFunction_HomePage();


void loadImage();
void backButtonImage();
void handleHomePageMouseOver();
void playButtonClickSound(); // when music is off
void musicOnOff();
void handlePageMusic();
void drawMusicIcon();
void handlePlayGamePageMouseOver();



bool musicOn = false;

bool isForward = true;
bool standPosition = true;

bool isMovingRight = false;
bool isMovingLeft = false;


bool jumpUp = false;
bool jumpDown = false;

bool heroAttack = false;

bool gamePaused = false;

bool showExitPopup = false;

bool isCollisionChecked = false;

void openLinkedinOfMunia() {
	ShellExecute(0, "open", "https://www.facebook.com/jahan.munia.50", 0, 0, SW_SHOWNORMAL);
}
void openLinkedinOfSihab() {
	ShellExecute(0, "open", "https://sites.google.com/view/aeris60", 0, 0, SW_SHOWNORMAL);
}
void openLinkedinOfNazifa() {
	ShellExecute(0, "open", "https://www.facebook.com/nazifa989", 0, 0, SW_SHOWNORMAL);
}




// FUNCTIONS



// HERO BOUNDARY
void heroBoundary() {
	if (heroCordinateX <= 0 + 10) {
		heroCordinateX = 0 + 10;
	}
	else if (heroCordinateX >= 1200) {
		heroCordinateX = 1200;
	}
}







////	HERO RUN FUNCTIONS
void forwardRun() {
	if (!standPosition && isMovingRight) {
		iShowBMP2(heroCordinateX, heroCordinateY, heroRun[heroIndex], 0);
	}
	else {
		iShowBMP2(heroCordinateX, heroCordinateY, heroStance[heroIndex], 0);
	}
}

void backwardRun() {
	if (!standPosition && isMovingLeft) {
		iShowBMP2(heroCordinateX, heroCordinateY, heroReverseRun[heroIndex], 0);
	}
	else {
		iShowBMP2(heroCordinateX, heroCordinateY, heroReverseStance[heroIndex], 0);
	}
}



void forwardJump(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroJump[3], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroJump[5], 0);
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroJump[5], 0);
	}
}

void backwardJump(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroReverseJump[3], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroReverseJump[5], 0);
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroReverseJump[5], 0);
	}
}


///// HERO ATTACK FUNCTIONS
void forwardJumpWhileRunning(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroJump[3], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroJump[5], 0);
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroJump[5], 0);
	}
	if (isMovingRight) {
		//heroCordinateX += 0; //for SPEED or DISTANCE
		heroBoundary();
	}
}
void backwardJumpWhileRunning(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroReverseJump[3], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroReverseJump[5], 0);
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroReverseJump[5], 0);
	}
	if (isMovingLeft) {
		//heroCordinateX -= 0; //for SPEED or DISTANCE
		heroBoundary();
	}
}


void forwardAttack() {
	if (standPosition && !isMovingRight) {
		iShowBMP2(heroCordinateX, heroCordinateY, heroNormalAttack[heroNormalAttackIndex], 0);

	}
	else if (!standPosition && isMovingRight){
		forwardRun();
	}
	else {
		iShowBMP2(heroCordinateX, heroCordinateY, heroStance[heroIndex], 0);
	}
}

void backwardAttack() {
	if (standPosition && !isMovingLeft) {
		iShowBMP2(heroCordinateX, heroCordinateY, heroReverseNormalAttack[heroNormalAttackIndex], 0);
	}
	else if (!standPosition && isMovingLeft){
		backwardRun();
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY, heroReverseStance[heroIndex], 0);
	}
}


void forwardAttackWhileJump(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[0], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[0], 0);
	}
	heroNormalAttackChangeWhileJump();
}

void backwardAttackWhileJump(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[1], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[1], 0);
	}
	heroNormalAttackChangeWhileJump();
}

void forwardAttackWhileJumpAndRunning(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[0], 0);
	}
	else if (jumpDown) {
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[0], 0);
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY, heroRun[heroIndex], 0);
	}
	if (isMovingRight) {
		//heroCordinateX += 20; // for SPEED or DISTANCE
		heroBoundary();
	}
	heroNormalAttackChangeWhileJump();
}
void backwardAttackWhileJumpAndRunning(){
	if (jumpUp){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[1], 0);
	}
	else if (jumpDown){
		iShowBMP2(heroCordinateX, heroCordinateY + heroCordinateJump, heroNormalAttackWhileJump[1], 0);
	}
	else{
		iShowBMP2(heroCordinateX, heroCordinateY, heroRun[heroIndex], 0);
	}

	if (isMovingLeft) {
		//heroCordinateX -= 20; // for SPEED or DISTANCE
		heroBoundary();
	}
	heroNormalAttackChangeWhileJump();
}

void runningJumpAction(){
	if (isMovingRight) {
		heroCordinateX += heroMovingSpeed; // for speed or distance when RUNNING + JUMP
		heroBoundary();
	}
	if (isMovingLeft){
		heroCordinateX -= heroMovingSpeed;
		heroBoundary();
	}
}






//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Functions Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://


/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove_Character(int mx, int my)
{


}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove_Character(int mx, int my)
{
	if (gameState == 3)
	{
		if ((mx >= 131 && mx <= 223) && (my >= 414 && my <= 427)){				//Option Index = 0;
			optionIndex = 0;
			isOptionOver = true;
		}
		else if ((mx >= 131 && mx <= 223) && (my >= 374 && my <= 389)){		//Option Index = 1;
			optionIndex = 1;
			isOptionOver = true;
		}
		else if ((mx >= 131 && mx <= 185) && (my >= 336 && my <= 349)){		//Option Index = 2;
			optionIndex = 2;
			isOptionOver = true;
		}
		else if ((mx >= 131 && mx <= 185) && (my >= 294 && my <= 307)){		//Option Index = 3;
			optionIndex = 3;
			isOptionOver = true;
		}

	}
}

void iMouse_Character(int button, int state, int mx, int my)
{


	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (gameState == 1)
		{
			//playButtonClickSound();
			if ((mx >= 135 && mx <= 194) && (my >= 460 && my <= 505)){				//gameState = 0		// START GAME
				characterPageIndex = 0;
				if (!musicOn){
					playButtonClickSound();
				}
			}
			else if ((mx >= 201 && mx <= 260) && (my >= 458 && my <= 505)){		//gameState = 1		// CHARACTER PAGE
				characterPageIndex = 1;
				if (!musicOn){
					playButtonClickSound();
				}
			}
			else if ((mx >= 267 && mx <= 326) && (my >= 458 && my <= 505)){		//gameState = 2		// HIGH SCORES
				characterPageIndex = 2;
				if (!musicOn){
					playButtonClickSound();
				}
			}
			else if ((mx >= 168 && mx <= 227) && (my >= 400 && my <= 447)){		//gameState = 3		// INSTRUCTIONS
				characterPageIndex = 3;
				if (!musicOn){
					playButtonClickSound();
				}
			}
			else if ((mx >= 234 && mx <= 286) && (my >= 400 && my <= 447)){			//gameState = 4		// CREDITS
				characterPageIndex = 4;
				if (!musicOn){
					playButtonClickSound();
				}
			}
			else if ((mx >= 293 && mx <= 345) && (my >= 400 && my <= 447)){		//gameState = 5		// CLOSE THE PROGRAM
				characterPageIndex = 5;
				if (!musicOn){
					playButtonClickSound();
				}
			}


			if ((mx >= 1181 && mx <= 1213) && (my >= 60 && my <= 76)){ // back button
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					handlePageMusic();
				}
				characterPageIndex = 0;

			}
		}

		if (gameState == 4){
			if ((mx >= 140 && mx <= 407) && (my >= 303 && my <= 570)){
				openLinkedinOfMunia();
			}
			else if ((mx >= 507 && mx <= 771) && (my >= 304 && my <= 570)){
				openLinkedinOfSihab();
			}
			else if ((mx >= 873 && mx <= 1135) && (my >= 304 && my <= 569)){
				openLinkedinOfNazifa();
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){


	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard_Character(unsigned char key)
{



	if (key == '\r')
	{

	}

	if (gameState == 0 && (key == 'P' || key == 'p') && !showExitPopup) {
		gamePaused = !gamePaused;  // it means,,, paused thakle unpause hbe unpause thakle paused hbe.
		if (gamePaused){
			if (musicOn){
				PlaySound(0, 0, 0);
			}
			else{
				playButtonClickSound();
			}
		}
		else{
			if (musicOn){
				PlaySound("music\\Sekiro_startGame2.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			else{
				playButtonClickSound();
			}
		}
	}

	if (!gamePaused){

		if (key == 'W' || key == 'w' || key == ' '){			// UP
			if (!jump){
				jump = true;
				jumpUp = true;
				jumpDown = false;
			}
			//collisionCheck();

		}
		if (key == 'S' || key == 's'){							// DOWN
			if (jump){
				jump = true;
				jumpUp = false;
				jumpDown = true;
			}
			if ((isMovingRight || isMovingLeft) && !jump){		// for stance hero's  own direction 
				isMovingRight = false;
				isMovingLeft = false;
			}
			//collisionCheck();
		}

		if (key == 'A' || key == 'a'){							//LEFT
			if (isForward){
				isForward = false;
				isMovingLeft = false;
				isMovingRight = false;
			}
			else{
				heroCordinateX -= 20;
				heroBoundary();

				heroIndex++;
				if (heroIndex >= 4)
					heroIndex = 0;

				standPosition = false;
				isForward = false;
				isMovingLeft = true;
				isMovingRight = false;

			}
			//collisionCheck();
			facingDirection = -1;
		}

		if (key == 'D' || key == 'd'){							// RIGHT

			if (!isForward){
				isMovingRight = false;
				isMovingLeft = false;
				isForward = true;
			}
			else{
				heroCordinateX += 20;
				heroBoundary();

				heroIndex++;
				if (heroIndex >= 4)
					heroIndex = 0;

				standPosition = false;
				isMovingRight = true;
				isMovingLeft = false;
				isForward = true;

			}
			facingDirection = 1;
		}
		if (key == 'F' || key == 'f'){
			heroAttack = true;
			if (!jump){
				isMovingRight = false;
				isMovingLeft = false;
			}
			if (isMovingRight || isMovingLeft){
				standPosition = false;
			}
			else {
				standPosition = true;
			}
			heroNormalAttackIndex = 0;
			heroNormalAttackIndexWhileJump = 0;
			
			shootAttack();



		}
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard_Character(unsigned char key)
{

	if (!gamePaused){
		if (key == GLUT_KEY_RIGHT && gameState == 0){
			if (!isForward){
				isMovingRight = false;
				isMovingLeft = false;
				isForward = true;
			}
			else{
				heroCordinateX += 20;
				heroBoundary();

				heroIndex++;
				if (heroIndex >= 4)
					heroIndex = 0;

				standPosition = false;
				isMovingRight = true;
				isMovingLeft = false;
				isForward = true;

			}
			heroAttack = false;
			heroNormalAttackIndex = 0;
			facingDirection = 1;

		}


		if (key == GLUT_KEY_LEFT && gameState == 0){
			if (isForward){
				isForward = false;
				isMovingLeft = false;
				isMovingRight = false;
			}
			else{
				heroCordinateX -= 20;
				heroBoundary();

				heroIndex++;
				if (heroIndex >= 4)
					heroIndex = 0;

				standPosition = false;
				isForward = false;
				isMovingLeft = true;
				isMovingRight = false;

			}
			heroAttack = false;
			heroNormalAttackIndex = 0;
			facingDirection = -1;
		}



		if (key == GLUT_KEY_UP && gameState == 0){			// UP
			if (!jump){
				jump = true;
				jumpUp = true;
				jumpDown = false;
			}
		}


		if (key == GLUT_KEY_DOWN && gameState == 0){
			if (jump){
				jump = true;
				jumpUp = false;
				jumpDown = true;
				heroCordinateJump -= 20;
			}
			if ((isMovingRight || isMovingLeft) && !jump){
				isMovingRight = false;
				isMovingLeft = false;
			}
		}

		if (key == GLUT_KEY_HOME)
		{

		}
	}


}

void resetHero() {
	heroCordinateX = 100;
	heroCordinateY = 200;
	heroCordinateJump = 0;
	jump = false;
	facingDirection = 1;
	healthIndex = 7;

	isMovingRight = false;
	isMovingLeft = false;
	isForward = true;
	// Reset all normalAttack
	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		normalAttack[i].active = false;
	}
}
#endif



