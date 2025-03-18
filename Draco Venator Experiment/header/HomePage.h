//HomePage.h
//#include<iostream>

#ifndef HOMEPAGE_H_INCLUDED
#define HOMEPAGE_H_INCLUDED

int dracoVenatorPage;

#include "Character.h"
#include "HighScores.h"

///INTRO


// gameState = 7 ; for Game Level Page;
// gameState = 8; for Game Map Page;

char Intro[327][50] = {
	"image\\Intro\\Intro0000.bmp", "image\\Intro\\Intro0001.bmp", "image\\Intro\\Intro0002.bmp",
	"image\\Intro\\Intro0003.bmp", "image\\Intro\\Intro0004.bmp", "image\\Intro\\Intro0005.bmp",
	"image\\Intro\\Intro0006.bmp", "image\\Intro\\Intro0007.bmp", "image\\Intro\\Intro0008.bmp",
	"image\\Intro\\Intro0009.bmp", "image\\Intro\\Intro0010.bmp", "image\\Intro\\Intro0011.bmp",
	"image\\Intro\\Intro0012.bmp", "image\\Intro\\Intro0013.bmp", "image\\Intro\\Intro0014.bmp",
	"image\\Intro\\Intro0015.bmp", "image\\Intro\\Intro0016.bmp", "image\\Intro\\Intro0017.bmp",
	"image\\Intro\\Intro0018.bmp", "image\\Intro\\Intro0019.bmp", "image\\Intro\\Intro0020.bmp",
	"image\\Intro\\Intro0021.bmp", "image\\Intro\\Intro0022.bmp", "image\\Intro\\Intro0023.bmp",
	"image\\Intro\\Intro0024.bmp", "image\\Intro\\Intro0025.bmp", "image\\Intro\\Intro0026.bmp",
	"image\\Intro\\Intro0027.bmp", "image\\Intro\\Intro0028.bmp", "image\\Intro\\Intro0029.bmp",
	"image\\Intro\\Intro0030.bmp", "image\\Intro\\Intro0031.bmp", "image\\Intro\\Intro0032.bmp",
	"image\\Intro\\Intro0033.bmp", "image\\Intro\\Intro0034.bmp", "image\\Intro\\Intro0035.bmp",
	"image\\Intro\\Intro0036.bmp", "image\\Intro\\Intro0037.bmp", "image\\Intro\\Intro0038.bmp",
	"image\\Intro\\Intro0039.bmp", "image\\Intro\\Intro0040.bmp", "image\\Intro\\Intro0041.bmp",
	"image\\Intro\\Intro0042.bmp", "image\\Intro\\Intro0043.bmp", "image\\Intro\\Intro0044.bmp",
	"image\\Intro\\Intro0045.bmp", "image\\Intro\\Intro0046.bmp", "image\\Intro\\Intro0047.bmp",
	"image\\Intro\\Intro0048.bmp", "image\\Intro\\Intro0049.bmp", "image\\Intro\\Intro0050.bmp",
	"image\\Intro\\Intro0051.bmp", "image\\Intro\\Intro0052.bmp", "image\\Intro\\Intro0053.bmp",
	"image\\Intro\\Intro0054.bmp", "image\\Intro\\Intro0055.bmp", "image\\Intro\\Intro0056.bmp",
	"image\\Intro\\Intro0057.bmp", "image\\Intro\\Intro0058.bmp", "image\\Intro\\Intro0059.bmp",
	"image\\Intro\\Intro0060.bmp", "image\\Intro\\Intro0061.bmp", "image\\Intro\\Intro0062.bmp",
	"image\\Intro\\Intro0063.bmp", "image\\Intro\\Intro0064.bmp", "image\\Intro\\Intro0065.bmp",
	"image\\Intro\\Intro0066.bmp", "image\\Intro\\Intro0067.bmp", "image\\Intro\\Intro0068.bmp",
	"image\\Intro\\Intro0069.bmp", "image\\Intro\\Intro0070.bmp", "image\\Intro\\Intro0071.bmp",
	"image\\Intro\\Intro0072.bmp", "image\\Intro\\Intro0073.bmp", "image\\Intro\\Intro0074.bmp",
	"image\\Intro\\Intro0075.bmp", "image\\Intro\\Intro0076.bmp", "image\\Intro\\Intro0077.bmp",
	"image\\Intro\\Intro0078.bmp", "image\\Intro\\Intro0079.bmp", "image\\Intro\\Intro0080.bmp",
	"image\\Intro\\Intro0081.bmp", "image\\Intro\\Intro0082.bmp", "image\\Intro\\Intro0083.bmp",
	"image\\Intro\\Intro0084.bmp", "image\\Intro\\Intro0085.bmp", "image\\Intro\\Intro0086.bmp",
	"image\\Intro\\Intro0087.bmp", "image\\Intro\\Intro0088.bmp", "image\\Intro\\Intro0089.bmp",
	"image\\Intro\\Intro0090.bmp", "image\\Intro\\Intro0091.bmp", "image\\Intro\\Intro0092.bmp",
	"image\\Intro\\Intro0093.bmp", "image\\Intro\\Intro0094.bmp", "image\\Intro\\Intro0095.bmp",
	"image\\Intro\\Intro0096.bmp", "image\\Intro\\Intro0097.bmp", "image\\Intro\\Intro0098.bmp",
	"image\\Intro\\Intro0099.bmp", "image\\Intro\\Intro0100.bmp", "image\\Intro\\Intro0101.bmp",
	"image\\Intro\\Intro0102.bmp", "image\\Intro\\Intro0103.bmp", "image\\Intro\\Intro0104.bmp",
	"image\\Intro\\Intro0105.bmp", "image\\Intro\\Intro0106.bmp", "image\\Intro\\Intro0107.bmp",
	"image\\Intro\\Intro0108.bmp", "image\\Intro\\Intro0109.bmp", "image\\Intro\\Intro0110.bmp",
	"image\\Intro\\Intro0111.bmp", "image\\Intro\\Intro0112.bmp", "image\\Intro\\Intro0113.bmp",
	"image\\Intro\\Intro0114.bmp", "image\\Intro\\Intro0115.bmp", "image\\Intro\\Intro0116.bmp",
	"image\\Intro\\Intro0117.bmp", "image\\Intro\\Intro0118.bmp", "image\\Intro\\Intro0119.bmp",
	"image\\Intro\\Intro0120.bmp", "image\\Intro\\Intro0121.bmp", "image\\Intro\\Intro0122.bmp",
	"image\\Intro\\Intro0123.bmp", "image\\Intro\\Intro0124.bmp", "image\\Intro\\Intro0125.bmp",
	"image\\Intro\\Intro0126.bmp", "image\\Intro\\Intro0127.bmp", "image\\Intro\\Intro0128.bmp",
	"image\\Intro\\Intro0129.bmp", "image\\Intro\\Intro0130.bmp", "image\\Intro\\Intro0131.bmp",
	"image\\Intro\\Intro0132.bmp", "image\\Intro\\Intro0133.bmp", "image\\Intro\\Intro0134.bmp",
	"image\\Intro\\Intro0135.bmp", "image\\Intro\\Intro0136.bmp", "image\\Intro\\Intro0137.bmp",
	"image\\Intro\\Intro0138.bmp", "image\\Intro\\Intro0139.bmp", "image\\Intro\\Intro0140.bmp",
	"image\\Intro\\Intro0141.bmp", "image\\Intro\\Intro0142.bmp", "image\\Intro\\Intro0143.bmp",
	"image\\Intro\\Intro0144.bmp", "image\\Intro\\Intro0145.bmp", "image\\Intro\\Intro0146.bmp",
	"image\\Intro\\Intro0147.bmp", "image\\Intro\\Intro0148.bmp", "image\\Intro\\Intro0149.bmp",
	"image\\Intro\\Intro0150.bmp", "image\\Intro\\Intro0151.bmp", "image\\Intro\\Intro0152.bmp",
	"image\\Intro\\Intro0153.bmp", "image\\Intro\\Intro0154.bmp", "image\\Intro\\Intro0155.bmp",
	"image\\Intro\\Intro0156.bmp", "image\\Intro\\Intro0157.bmp", "image\\Intro\\Intro0158.bmp",
	"image\\Intro\\Intro0159.bmp", "image\\Intro\\Intro0160.bmp", "image\\Intro\\Intro0161.bmp",
	"image\\Intro\\Intro0162.bmp", "image\\Intro\\Intro0163.bmp", "image\\Intro\\Intro0164.bmp",
	"image\\Intro\\Intro0165.bmp", "image\\Intro\\Intro0166.bmp", "image\\Intro\\Intro0167.bmp",
	"image\\Intro\\Intro0168.bmp", "image\\Intro\\Intro0169.bmp", "image\\Intro\\Intro0170.bmp",
	"image\\Intro\\Intro0171.bmp", "image\\Intro\\Intro0172.bmp", "image\\Intro\\Intro0173.bmp",
	"image\\Intro\\Intro0174.bmp", "image\\Intro\\Intro0175.bmp", "image\\Intro\\Intro0176.bmp",
	"image\\Intro\\Intro0177.bmp", "image\\Intro\\Intro0178.bmp", "image\\Intro\\Intro0179.bmp",
	"image\\Intro\\Intro0180.bmp", "image\\Intro\\Intro0181.bmp", "image\\Intro\\Intro0182.bmp",
	"image\\Intro\\Intro0183.bmp", "image\\Intro\\Intro0184.bmp", "image\\Intro\\Intro0185.bmp",
	"image\\Intro\\Intro0186.bmp", "image\\Intro\\Intro0187.bmp", "image\\Intro\\Intro0188.bmp",
	"image\\Intro\\Intro0189.bmp", "image\\Intro\\Intro0190.bmp", "image\\Intro\\Intro0191.bmp",
	"image\\Intro\\Intro0192.bmp", "image\\Intro\\Intro0193.bmp", "image\\Intro\\Intro0194.bmp",
	"image\\Intro\\Intro0195.bmp", "image\\Intro\\Intro0196.bmp", "image\\Intro\\Intro0197.bmp",
	"image\\Intro\\Intro0198.bmp", "image\\Intro\\Intro0199.bmp", "image\\Intro\\Intro0200.bmp",
	"image\\Intro\\Intro0201.bmp", "image\\Intro\\Intro0202.bmp", "image\\Intro\\Intro0203.bmp",
	"image\\Intro\\Intro0204.bmp", "image\\Intro\\Intro0205.bmp", "image\\Intro\\Intro0206.bmp",
	"image\\Intro\\Intro0207.bmp", "image\\Intro\\Intro0208.bmp", "image\\Intro\\Intro0209.bmp",
	"image\\Intro\\Intro0210.bmp", "image\\Intro\\Intro0211.bmp", "image\\Intro\\Intro0212.bmp",
	"image\\Intro\\Intro0213.bmp", "image\\Intro\\Intro0214.bmp", "image\\Intro\\Intro0215.bmp",
	"image\\Intro\\Intro0216.bmp", "image\\Intro\\Intro0217.bmp", "image\\Intro\\Intro0218.bmp",
	"image\\Intro\\Intro0219.bmp", "image\\Intro\\Intro0220.bmp", "image\\Intro\\Intro0221.bmp",
	"image\\Intro\\Intro0222.bmp", "image\\Intro\\Intro0223.bmp", "image\\Intro\\Intro0224.bmp",
	"image\\Intro\\Intro0225.bmp", "image\\Intro\\Intro0226.bmp", "image\\Intro\\Intro0227.bmp",
	"image\\Intro\\Intro0228.bmp", "image\\Intro\\Intro0229.bmp", "image\\Intro\\Intro0230.bmp",
	"image\\Intro\\Intro0231.bmp", "image\\Intro\\Intro0232.bmp", "image\\Intro\\Intro0233.bmp",
	"image\\Intro\\Intro0234.bmp", "image\\Intro\\Intro0235.bmp", "image\\Intro\\Intro0236.bmp",
	"image\\Intro\\Intro0237.bmp", "image\\Intro\\Intro0238.bmp", "image\\Intro\\Intro0239.bmp",
	"image\\Intro\\Intro0240.bmp", "image\\Intro\\Intro0241.bmp", "image\\Intro\\Intro0242.bmp",
	"image\\Intro\\Intro0243.bmp", "image\\Intro\\Intro0244.bmp", "image\\Intro\\Intro0245.bmp",
	"image\\Intro\\Intro0246.bmp", "image\\Intro\\Intro0247.bmp", "image\\Intro\\Intro0248.bmp",
	"image\\Intro\\Intro0249.bmp", "image\\Intro\\Intro0250.bmp", "image\\Intro\\Intro0251.bmp",
	"image\\Intro\\Intro0252.bmp", "image\\Intro\\Intro0253.bmp", "image\\Intro\\Intro0254.bmp",
	"image\\Intro\\Intro0255.bmp", "image\\Intro\\Intro0256.bmp", "image\\Intro\\Intro0257.bmp",
	"image\\Intro\\Intro0258.bmp", "image\\Intro\\Intro0259.bmp", "image\\Intro\\Intro0260.bmp",
	"image\\Intro\\Intro0261.bmp", "image\\Intro\\Intro0262.bmp", "image\\Intro\\Intro0263.bmp",
	"image\\Intro\\Intro0264.bmp", "image\\Intro\\Intro0265.bmp", "image\\Intro\\Intro0266.bmp",
	"image\\Intro\\Intro0267.bmp", "image\\Intro\\Intro0268.bmp", "image\\Intro\\Intro0269.bmp",
	"image\\Intro\\Intro0270.bmp", "image\\Intro\\Intro0271.bmp", "image\\Intro\\Intro0272.bmp",
	"image\\Intro\\Intro0273.bmp", "image\\Intro\\Intro0274.bmp", "image\\Intro\\Intro0275.bmp",
	"image\\Intro\\Intro0276.bmp", "image\\Intro\\Intro0277.bmp", "image\\Intro\\Intro0278.bmp",
	"image\\Intro\\Intro0279.bmp", "image\\Intro\\Intro0280.bmp", "image\\Intro\\Intro0281.bmp",
	"image\\Intro\\Intro0282.bmp", "image\\Intro\\Intro0283.bmp", "image\\Intro\\Intro0284.bmp",
	"image\\Intro\\Intro0285.bmp", "image\\Intro\\Intro0286.bmp", "image\\Intro\\Intro0287.bmp",
	"image\\Intro\\Intro0288.bmp", "image\\Intro\\Intro0289.bmp", "image\\Intro\\Intro0290.bmp",
	"image\\Intro\\Intro0291.bmp", "image\\Intro\\Intro0292.bmp", "image\\Intro\\Intro0293.bmp",
	"image\\Intro\\Intro0294.bmp", "image\\Intro\\Intro0295.bmp", "image\\Intro\\Intro0296.bmp",
	"image\\Intro\\Intro0297.bmp", "image\\Intro\\Intro0298.bmp", "image\\Intro\\Intro0299.bmp",
	"image\\Intro\\Intro0300.bmp", "image\\Intro\\Intro0301.bmp", "image\\Intro\\Intro0302.bmp",
	"image\\Intro\\Intro0303.bmp", "image\\Intro\\Intro0304.bmp", "image\\Intro\\Intro0305.bmp",
	"image\\Intro\\Intro0306.bmp", "image\\Intro\\Intro0307.bmp", "image\\Intro\\Intro0308.bmp",
	"image\\Intro\\Intro0309.bmp", "image\\Intro\\Intro0310.bmp", "image\\Intro\\Intro0311.bmp",
	"image\\Intro\\Intro0312.bmp", "image\\Intro\\Intro0313.bmp", "image\\Intro\\Intro0314.bmp",
	"image\\Intro\\Intro0315.bmp", "image\\Intro\\Intro0316.bmp", "image\\Intro\\Intro0317.bmp",
	"image\\Intro\\Intro0318.bmp", "image\\Intro\\Intro0319.bmp", "image\\Intro\\Intro0320.bmp",
	"image\\Intro\\Intro0321.bmp", "image\\Intro\\Intro0322.bmp", "image\\Intro\\Intro0323.bmp",
	"image\\Intro\\Intro0324.bmp", "image\\Intro\\Intro0325.bmp", "image\\Intro\\Intro0326.bmp"
};

//Menu Page
char menu[120][30] = {
	"image\\Menu\\menu00001.bmp", "image\\Menu\\menu00002.bmp", "image\\Menu\\menu00003.bmp",
	"image\\Menu\\menu00004.bmp", "image\\Menu\\menu00005.bmp", "image\\Menu\\menu00006.bmp",
	"image\\Menu\\menu00007.bmp", "image\\Menu\\menu00008.bmp", "image\\Menu\\menu00009.bmp",
	"image\\Menu\\menu00010.bmp", "image\\Menu\\menu00011.bmp", "image\\Menu\\menu00012.bmp",
	"image\\Menu\\menu00013.bmp", "image\\Menu\\menu00014.bmp", "image\\Menu\\menu00015.bmp",
	"image\\Menu\\menu00016.bmp", "image\\Menu\\menu00017.bmp", "image\\Menu\\menu00018.bmp",
	"image\\Menu\\menu00019.bmp", "image\\Menu\\menu00020.bmp", "image\\Menu\\menu00021.bmp",
	"image\\Menu\\menu00022.bmp", "image\\Menu\\menu00023.bmp", "image\\Menu\\menu00024.bmp",
	"image\\Menu\\menu00025.bmp", "image\\Menu\\menu00026.bmp", "image\\Menu\\menu00027.bmp",
	"image\\Menu\\menu00028.bmp", "image\\Menu\\menu00029.bmp", "image\\Menu\\menu00030.bmp",
	"image\\Menu\\menu00031.bmp", "image\\Menu\\menu00032.bmp", "image\\Menu\\menu00033.bmp",
	"image\\Menu\\menu00034.bmp", "image\\Menu\\menu00035.bmp", "image\\Menu\\menu00036.bmp",
	"image\\Menu\\menu00037.bmp", "image\\Menu\\menu00038.bmp", "image\\Menu\\menu00039.bmp",
	"image\\Menu\\menu00040.bmp", "image\\Menu\\menu00041.bmp", "image\\Menu\\menu00042.bmp",
	"image\\Menu\\menu00043.bmp", "image\\Menu\\menu00044.bmp", "image\\Menu\\menu00045.bmp",
	"image\\Menu\\menu00046.bmp", "image\\Menu\\menu00047.bmp", "image\\Menu\\menu00048.bmp",
	"image\\Menu\\menu00049.bmp", "image\\Menu\\menu00050.bmp", "image\\Menu\\menu00051.bmp",
	"image\\Menu\\menu00052.bmp", "image\\Menu\\menu00053.bmp", "image\\Menu\\menu00054.bmp",
	"image\\Menu\\menu00055.bmp", "image\\Menu\\menu00056.bmp", "image\\Menu\\menu00057.bmp",
	"image\\Menu\\menu00058.bmp", "image\\Menu\\menu00059.bmp", "image\\Menu\\menu00060.bmp",
	"image\\Menu\\menu00061.bmp", "image\\Menu\\menu00062.bmp", "image\\Menu\\menu00063.bmp",
	"image\\Menu\\menu00064.bmp", "image\\Menu\\menu00065.bmp", "image\\Menu\\menu00066.bmp",
	"image\\Menu\\menu00067.bmp", "image\\Menu\\menu00068.bmp", "image\\Menu\\menu00069.bmp",
	"image\\Menu\\menu00070.bmp", "image\\Menu\\menu00071.bmp", "image\\Menu\\menu00072.bmp",
	"image\\Menu\\menu00073.bmp", "image\\Menu\\menu00074.bmp", "image\\Menu\\menu00075.bmp",
	"image\\Menu\\menu00076.bmp", "image\\Menu\\menu00077.bmp", "image\\Menu\\menu00078.bmp",
	"image\\Menu\\menu00079.bmp", "image\\Menu\\menu00080.bmp", "image\\Menu\\menu00081.bmp",
	"image\\Menu\\menu00082.bmp", "image\\Menu\\menu00083.bmp", "image\\Menu\\menu00084.bmp",
	"image\\Menu\\menu00085.bmp", "image\\Menu\\menu00086.bmp", "image\\Menu\\menu00087.bmp",
	"image\\Menu\\menu00088.bmp", "image\\Menu\\menu00089.bmp", "image\\Menu\\menu00090.bmp",
	"image\\Menu\\menu00091.bmp", "image\\Menu\\menu00092.bmp", "image\\Menu\\menu00093.bmp",
	"image\\Menu\\menu00094.bmp", "image\\Menu\\menu00095.bmp", "image\\Menu\\menu00096.bmp",
	"image\\Menu\\menu00097.bmp", "image\\Menu\\menu00098.bmp", "image\\Menu\\menu00099.bmp",
	"image\\Menu\\menu00100.bmp", "image\\Menu\\menu00101.bmp", "image\\Menu\\menu00102.bmp",
	"image\\Menu\\menu00103.bmp", "image\\Menu\\menu00104.bmp", "image\\Menu\\menu00105.bmp",
	"image\\Menu\\menu00106.bmp", "image\\Menu\\menu00107.bmp", "image\\Menu\\menu00108.bmp",
	"image\\Menu\\menu00109.bmp", "image\\Menu\\menu00110.bmp", "image\\Menu\\menu00111.bmp",
	"image\\Menu\\menu00112.bmp", "image\\Menu\\menu00113.bmp", "image\\Menu\\menu00114.bmp",
	"image\\Menu\\menu00115.bmp", "image\\Menu\\menu00116.bmp", "image\\Menu\\menu00117.bmp",
	"image\\Menu\\menu00118.bmp", "image\\Menu\\menu00119.bmp", "image\\Menu\\menu00120.bmp"
};

int introImageIndex = 0;
int menuIndex = 0;

//OPTIONS

char gameLevel[4][35] = { "image\\Level\\Game Level.bmp", "image\\Level\\Game Level – 1.bmp", "image\\Level\\Game Level – 2.bmp", "image\\Level\\Game Level – 3.bmp" };
int gameLevelIndex = 0;


//Backgraound work
int position[20];
char image[20][30] = { "image\\Background\\image.01.bmp", "image\\Background\\image.02.bmp", "image\\Background\\image.03.bmp", "image\\Background\\image.04.bmp", "image\\Background\\image.05.bmp", "image\\Background\\image.06.bmp", "image\\Background\\image.07.bmp", "image\\Background\\image.08.bmp", "image\\Background\\image.09.bmp", "image\\Background\\image.10.bmp", "image\\Background\\image.11.bmp", "image\\Background\\image.12.bmp", "image\\Background\\image.13.bmp", "image\\Background\\image.14.bmp", "image\\Background\\image.15.bmp", "image\\Background\\image.16.bmp", "image\\Background\\image.17.bmp", "image\\Background\\image.18.bmp", "image\\Background\\image.19.bmp", "image\\Background\\image.20.bmp" };
int slice = 20;
int width = 120;
int i = 0;

//


char normalBg[30] = "image\\bg.bmp";

char enterPage[30] = "image\\enterpage.bmp";

char playGamePagePopUpOver[4][60] = {
	"image\\Button\\playGamePagePopUp\\resumeRestartExitPopUp.bmp",
	"image\\Button\\playGamePagePopUp\\1.resumeOver.bmp",
	"image\\Button\\playGamePagePopUp\\2.restartOver.bmp",
	"image\\Button\\playGamePagePopUp\\3.exitOver.bmp"
};


char menuControl[6][50] = {
	"image\\Menu\\menuControl\\Menu Home.bmp", "image\\Menu\\menuControl\\\Menu Play.bmp",
	"image\\Menu\\menuControl\\Menu Characters.bmp", "image\\Menu\\menuControl\\Menu Score.bmp",
	"image\\Menu\\menuControl\\Menu Options.bmp", "image\\Menu\\menuControl\\Menu Quit.bmp"
};
int menuControlIndex = 0;




char playGamePage1[30] = "image\\playGamePage.bmp";					// gameState = 0
char playGamePage2[30] = "image\\venom.bmp";
//char storyPage[40] = "image\\Story\\story1.bmp";					// gameState = 1
char highScorePage[30] = "image\\pageImage\\highScore.bmp";;		// gameState = 2
char instructionsPage[30] = "image\\instructions.bmp";				// gameState = 3
char creditsPage[30] = "image\\credits.bmp";						// gameState = 4
// gameState = 5 for exit the total game

char storyPage[6][30] = { "image\\Story\\story1.bmp", "image\\Story\\story2.bmp", "image\\Story\\story3.bmp", "image\\Story\\story4.bmp", "image\\Story\\story5.bmp", "image\\Story\\story6.bmp" };
int storyPageIndex = 0;				//gameState = 7,8,9,10,11,12 for Story page

//MUSIC BUTTON
char unmuteMusicIcon[30] = "image\\soundimage\\unmute.bmp";
char muteMusicIcon[30] = "image\\soundimage\\mute.bmp";

//BACK BUTTON
char backButtonIcon[30] = "image\\backbutton.bmp";

// for Play Game Page
char gamePausedIcon[30] = "image\\Button\\gamePaused.bmp";					// in the center of the screen
char gameUnPausedIcon[40] = "image\\Button\\gameResume.bmp";

char playGamePausedIcon[40] = "image\\Button\\playGamePausedIcon.bmp";		// for showExitPopUp in the left corner in gameState == 0;
char playGameResumeIcon[40] = "image\\Button\\playGameResumeIcon.bmp";		// for showExitPopUp in the left corner in gameState == 0;

char timeBar[3][35] = { "image\\Time Bar\\level1_timeBar.bmp", "image\\Time Bar\\level2_timeBar.bmp", "image\\Time Bar\\level3_timeBar.bmp" };
int timeBarIndex = 0;


///
int totalSeconds = 0;  // Start from 0 (infinite time)
int timerID;
int homePageIndex = 0;

int resumeButtonIndex = 0;
int playGamePageIndex = 0;
int gamePausedButtonOver = 0;

bool playGameIcon = false;

// functions
void resetGame_level_1();
void resetGame_level_2();
void resetGame_level_3();
void mouseOverSound();


//// FUNCTIONS

// Function to open the website
void openWebsite() {
	ShellExecute(0, "open", "https://sites.google.com/view/aeris60", 0, 0, SW_SHOWNORMAL);
}

void resetGame_level_1() {
	printf("Reset level 1\n\n");
	
	resetHero();
	resetEnemies();
	resetHighScore();
	gameState = 0;
	totalSeconds = 0;
	currentLevel = 1;
	healthIndex = 7;
	bossEnemy.health = 1000;
}

void resetGame_level_2() {
	printf("Reset level 2\n\n");
	
	resetHero();
	resetEnemies();
	resetHighScore();
	gameState = 0;
	totalSeconds = 0;
	healthIndex = 7;
	bossEnemy.health = 1000;
	currentLevel = 2;
	canUseMedicate = true;
}

void resetGame_level_3() {
	printf("Reset level 3\n\n");
	
	resetHero();
	resetEnemies();
	resetHighScore();
	gameState = 0;
	totalSeconds = 0;
	currentLevel = 3;
	healthIndex = 7;
	bossEnemy.health = 1000;
	canUseMedicate = true;
}



// DRAW MUSIC ICON 
void drawMusicIcon() {
	if (musicOn){
		iShowBMP2(0 + 50, 0 + 50, unmuteMusicIcon, 0);		//when music is on, then show UNMUTE sound in Display
	}
	if (!musicOn){
		iShowBMP2(0 + 50, 0 + 50, muteMusicIcon, 0);		////when music is off, then show MUTE sound in Display
	}
}

void playButtonClickSound(){											//when music is off,,,then play button sound ,,,,,otherwise play page music
	if (!musicOn){
		PlaySound("music\\lightswitch.wav", NULL, SND_ASYNC);

	}
	else{
		return;
	}
}
void musicOnOff(){												// music on off function

	if (musicOn){
		drawMusicIcon();
		musicOn = false;
		PlaySound(0, 0, 0);

	}
	else{
		drawMusicIcon();
		musicOn = true;
		handlePageMusic();

	}
}

//PAGE MUSIC CONTROL
void handlePageMusic(){

	if (musicOn && gameState != -1){
		if (gameState == 0){
			PlaySound("music\\Sekiro_startGame.wav", NULL, SND_LOOP | SND_ASYNC);			//START GAME PAGE MUSIC		
		}
		else if (gameState == 1){
			PlaySound("music\\story.wav", NULL, SND_LOOP | SND_ASYNC);						//STORY PAGE MUSIC
		}
		else if (gameState == 2){
			PlaySound("music\\highscores.wav", NULL, SND_LOOP | SND_ASYNC);					//HIGH SCORES PAGE MUSIC
		}
		else if (gameState == 3){
			PlaySound("music\\instructions.wav", NULL, SND_LOOP | SND_ASYNC);				//INSTRUCTIONS PAGE MUSIC
		}
		else if (gameState == 4){
			PlaySound("music\\credits.wav", NULL, SND_LOOP | SND_ASYNC);					//CREDITS PAGE MUSIC
		}
		else if (gameState == -2){
			PlaySound("music\\studiokolomna.wav", NULL, SND_LOOP | SND_ASYNC);				//when click back icon is will change music to home page music
		}
		else if (musicOn && (gameState == 8 || gameState == 7)){
			PlaySound("music\\studiokolomna2.wav", NULL, SND_LOOP | SND_ASYNC);
		}
	}
	else if (musicOn && gameState == -1){
		PlaySound("music\\studiokolomna2.wav", NULL, SND_LOOP | SND_ASYNC);					//when click back icon is will change music to home page music
	}
	if (gamePaused){
		PlaySound(0, 0, 0);
	}
}


void backButtonImage(){
	iShowBMP2(backButtonX, backButtonY, backButtonIcon, 0);
}

void loadImage(){

	if (gameState == -1){
		iShowBMP(0, 0, menu[menuIndex]);
		iShowBMP2(0, 0, menuControl[menuControlIndex], 0);
		characterPageIndex = 0;
	}
	else if (gameState == 0){						//Play Game Page Function	
		//iShowBMP(0, 0, playGamePage);
		if (!gamePaused){
			for (int i = 0; i < 20; i++){
				iShowBMP(position[i], 0, image[i]);
			}
		}
		if (gamePaused && !showExitPopup){
			//iShowBMP(0, 0, playGamePage1);
			iShowBMP(0, 0, characterBG[characterBGIndex]);
		}
		if (gamePaused && showExitPopup){
			//iShowBMP(0, 0, playGamePage2);
			iShowBMP(0, 0, characterBG[characterBGIndex]);
		}

		if (!gamePaused || !showExitPopup){
			iShowBMP2(backButtonX, backButtonY, playGameResumeIcon, 0);
		}
		if (gamePaused || showExitPopup){
			iShowBMP2(backButtonX, backButtonY, playGamePausedIcon, 0);
		}
	}
	else if (gameState == 1){						//Story Page Function 
		CHARACTERS = false;
		iShowBMP(0, 0, characterBG[characterBGIndex]);
		iShowBMP2(0, 0, characters[characterPageIndex], 0);
	}
	else if (gameState == 2){						//High Scores Page Function
		SCORES = false;
		iShowBMP(0, 0, characterBG[characterBGIndex]);
		iShowBMP2(0, 0, highScorePage, 0);
		displayScores();

	}
	else if (gameState == 3){						//Instruction Page Function
		OPTIONS = false;
		if (isOptionOver && !isOption){
			iShowBMP(0, 0, options[optionIndex]);
		}
		else if (isOption && isOptionOver){
			iShowBMP(0, 0, optionPages[optionPagesIndex]);
		}
	}
	else if (gameState == 4){
		iShowBMP(0, 0, characterBG[characterBGIndex]);
		iShowBMP2(0, 0, creditsPage, 0);				//Credits Page Function
	}
	else if (gameState == 5){
		exit(0);									// To close the program.
	}
	else if (gameState == 6){
		backButtonImage();
		iShowBMP(0, 0, characterBG[characterBGIndex]);
		gameOver();
	}
	else if (gameState == 7){
		iShowBMP(0, 0, gameLevel[gameLevelIndex]);
	}
	else if (gameState == 8){
		iShowBMP(0, 0, playMap[playMapIndex]);
	}

	//Back Button
	if (gameState != -1 && gameState != 0) {
		iShowBMP2(backButtonX, backButtonY, backButtonIcon, 0);
	}
	if (gameState == -2)										// Enter page image
	{
		iShowBMP(0, 0, enterPage);
	}
	if (gameState == -3){
		iShowBMP(0, 0, Intro[introImageIndex]);
	}
}

void handleHomeMouseOver() {										//MOUSE OVER in HOME PAGE
	if (mouseOverState != -1 && gameState == -1) {
		iShowBMP2(0, 0, menuControl[menuControlIndex + mouseOverState + 1], 0);
	}
}

void handlePlayGamePageMouseOver() {								//MOUSE OVER in PLAY GAME PAGE
	iShowBMP2(213, 120, playGamePagePopUpOver[playGamePageIndex], 0);
}




void mouseOverSound(){
	if (!musicOn){
		PlaySound("music\\mouseOverSound.wav", NULL, SND_ASYNC);		//resume music;
	}
}






//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Functions Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://

/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouseFunction_HomePage(int button, int state, int mx, int my)
{
	//cout << "x = " << mx << " y = " << my << endl;
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		//playButtonClickSound();
		if (gameState == -1 && (mx >= 134 && mx <= 171) && (my >= 415 && my <= 427)){				//gameState = 0		// START GAME
			gameState = 7;
			loadImage();
			playButtonClickSound();

		}
		else if (gameState == -1 && (mx >= 134 && mx <= 242) && (my >= 374 && my <= 386)){		//gameState = 1		// CHARACTER PAGE
			gameState = 1;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
			storyPageIndex = 0;
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 188) && (my >= 333 && my <= 345)){		//gameState = 2		// HIGH SCORES
			gameState = 2;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 205) && (my >= 294 && my <= 306)){		//gameState = 3		// OPTIONS
			optionIndex = 0;
			optionPagesIndex = 0;
			gameState = 3;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
			return;
		}
		else if (gameState == -1 && (mx >= 1151 && mx <= 1214) && (my >= 646 && my <= 683)){			//gameState = 4		// CREDITS
			gameState = 4;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 171) && (my >= 254 && my <= 266)){		//gameState = 5		// CLOSE THE PROGRAM
			gameState = 5;
			loadImage();
			playButtonClickSound();
			exit(0);
		}


		else if (gameState != -1 && gameState != 0 && (mx >= 10 && mx <= 60) && (my >= 660 && my <= 720) && !showExitPopup && !gamePaused)				// Upper Back Button Click Function
		{
			if (OPTIONS && gameState == 4){
				gameState = 3;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
			}
			else if (CHARACTERS && gameState == 4){
				gameState = 1;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
			}
			else if (SCORES && gameState == 4){
				gameState = 2;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
			}
			else if (gameState == 7){			// game state 7 to -1 by click back button
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (gameState == 6){			// game state 7 to -1 by click back button
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (gameState == 8){			// game state 8 to 7 by click back button
				gameState = 7;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (gameState == 2){			// game state 2 to -1 by click back button
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					handlePageMusic();
				}

				if (gameOverScoreButtonClick){								// backbutton x game over score x score from game over score
					gameState = 6;
					gameOverPopUpIndex = 0;
					gameOverScoreButtonClick = false;
					if (musicOn){
						PlaySound(0, 0, 0);
					}
					else{
						playButtonClickSound();
					}
					return;
				}
			}
			else if (gameState == 3){
				if (isOptionOver == true && isOption == false){ // backbutton in option page
					gameState = -1;
					optionIndex = 0;
					optionPagesIndex = 0;
					if (!musicOn){
						playButtonClickSound();
					}
					else{
						handlePageMusic();
					}

				}

				if (isOptionOver == true && isOption == true){ // apply button
					isOptionOver = true;
					isOption = false;
					optionIndex = optionPagesIndex;
					if (!musicOn){
						playButtonClickSound();
					}

				}
				if (isOptionOver == true && isOption == true){ // cancel button
					isOptionOver = true;
					isOption = false;
					optionIndex = optionPagesIndex;
					if (!musicOn){
						playButtonClickSound();
					}
				}
			}
			else if (gameState == -2 && (mx >= 5 && mx <= 117) && (my >= 685 && my <= 710)){
				openWebsite();
			}
			else{
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
			}

		}


		else if (gameState == 0 && (mx >= 10 && mx <= 60) && (my >= 660 && my <= 720))				// Back Button Click Function in gamessState ==0;
		{
			if (gameState == 0 && !showExitPopup && !gamePaused) {
				showExitPopup = true;
				gamePaused = true;
				PlaySound(0, 0, 0);
				playButtonClickSound();
			}
			if (gameState == 0 && showExitPopup) {
				showExitPopup = true;
				gamePaused = true;
				//playButtonClickSound();
			}
		}
		else if (gameState == 7){											// For Game Level
			//if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
			if (mx >= 133 && mx <= 404 && my >= 152 && my <= 635){				//LEVEL - 1 CLICK
				gameState = 8;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (mx >= 504 && mx <= 775 && my >= 152 && my <= 635){			//LEVEL - 2 CLICK
				gameState = 8;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (mx >= 874 && mx <= 1145 && my >= 152 && my <= 635){		//LEVEL - `3 CLICK
				gameState = 8;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (gameState == 7 && (mx >= 1181 && mx <= 1213) && (my >= 60 && my <= 76)){ // backbutton in option page
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
			}
		}
		else if (gameState == 8){

			if ((mx >= 133 && mx <= 404 && my >= 152 && my <= 635)){				// in MAP selection click
				gameState = 0;
				if (currentLevel == 1){
					resetGame_level_1();
				}
				else if (currentLevel == 2){
					resetGame_level_2();
				}
				else if (currentLevel == 3){
					resetGame_level_3();
				}
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					handlePageMusic();
				}
			}
			else if ((mx >= 504 && mx <= 775 && my >= 152 && my <= 635)){
				gameState = 0;
				if (currentLevel == 1){
					resetGame_level_1();
				}
				else if (currentLevel == 2){
					resetGame_level_2();
				}
				else if (currentLevel == 3){
					resetGame_level_3();
				}
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					handlePageMusic();
				}
			}
			else if ((mx >= 874 && mx <= 1145 && my >= 152 && my <= 635)){
				gameState = 0;
				if (currentLevel == 1){
					resetGame_level_1();
				}
				else if (currentLevel == 2){
					resetGame_level_2();
				}
				else if (currentLevel == 3){
					resetGame_level_3();
				}
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					handlePageMusic();
				}
			}
			return;
		}
		else if (gameState == 3)
		{
			if ((mx >= 131 && mx <= 223) && (my >= 414 && my <= 427)){				//gameState = 0		// START GAME
				optionPagesIndex = 0;
				if (!musicOn){
					playButtonClickSound();
				}
				isOption = true;
			}
			else if ((mx >= 131 && mx <= 223) && (my >= 374 && my <= 389)){		//gameState = 1		// CHARACTER PAGE
				optionPagesIndex = 1;
				if (!musicOn){
					playButtonClickSound();
				}
				isOption = true;

			}
			else if ((mx >= 131 && mx <= 185) && (my >= 336 && my <= 349)){		//gameState = 2		// HIGH SCORES
				optionPagesIndex = 2;
				if (!musicOn){
					playButtonClickSound();
				}
				isOption = true;
			}
			else if ((mx >= 131 && mx <= 185) && (my >= 294 && my <= 307)){		//gameState = 3		// INSTRUCTIONS
				optionPagesIndex = 3;
				if (!musicOn){
					playButtonClickSound();
				}
				isOption = true;
			}

			if (isOptionOver == true && isOption == false && (mx >= 1181 && mx <= 1213) && (my >= 60 && my <= 76)){ // backbutton in option page
				gameState = -1;
				optionIndex = 0;
				optionPagesIndex = 0;
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					handlePageMusic();
				}
			}

			if (isOptionOver == true && isOption == true && (mx >= 1069 && mx <= 1109) && (my >= 63 && my <= 74)){ // apply button
				isOptionOver = true;
				isOption = false;
				optionIndex = optionPagesIndex;
				if (!musicOn){
					playButtonClickSound();
				}

			}
			if (isOptionOver == true && isOption == true && (mx >= 1164 && mx <= 1215) && (my >= 63 && my <= 74)){ // cancel button
				isOptionOver = true;
				isOption = false;
				optionIndex = optionPagesIndex;
				if (!musicOn){
					playButtonClickSound();
				}
			}


		}

	}




	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)						// >> MUSIC ON OFF USING MOUSE
	{
		if (!showExitPopup && !gamePaused){
			if ((mx >= 50 && mx <= 100) && (my >= 50 && my <= 100))
			{
				musicOnOff();
			}
		}

		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{

		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		if (gameState == -2 && (mx >= 5 && mx <= 117) && (my >= 685 && my <= 710)){
			openWebsite();
		}
		if (gameState == 2 && (mx >= 1181 && mx <= 1213) && (my >= 60 && my <= 76)){ // backbutton in highscore page
			gameOverPopUpIndex = 0;
			gameState = 6;
			gameOverScoreButtonClick = false;

			if (takeOnce && len == 0){
				isTakeInput = false;
			}

			if (musicOn){
				PlaySound(0, 0, 0);
			}
			else{
				playButtonClickSound();
			}
			return;
		}
		if ((gameState == -1 || gameState == 1 || gameState == 2 || gameState == 3) && (mx >= 1105 && mx <= 1138) && (my >= 640 && my <= 660)){
			openWebsite();
		}
		if ((gameState == 1) && gameState != 3 && (mx >= 1151 && mx <= 1214) && (my >= 646 && my <= 683)){				// CREDITS in game state == 1 & 3
			CHARACTERS = true;
			gameState = 4;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
		}
		if ((gameState == 3) && gameState != 1 && (mx >= 1151 && mx <= 1214) && (my >= 646 && my <= 683)){				// CREDITS in game state == 1 & 3
			OPTIONS = true;
			gameState = 4;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
		}
		if ((gameState == 2) && (mx >= 1151 && mx <= 1214) && (my >= 646 && my <= 683)){				// CREDITS in game state == 1 & 3
			SCORES = true;
			gameState = 4;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
		}

	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		if (showExitPopup && gameState == 0) {

			//RESUME BUTTON
			if (mx >= 526 && mx <= 748 && my >= 436 && my <= 524) {
				showExitPopup = false;
				gamePaused = false;
				if (musicOn){
					PlaySound("music\\Sekiro_startGame2.wav", NULL, SND_LOOP | SND_ASYNC);		// resume music
				}
				else{
					playButtonClickSound();
				}
			}

			//RESTART BUTTON
			if (mx >= 526 && mx <= 748 && my >= 312 && my <= 400){
				showExitPopup = false;
				if (currentLevel == 1){
					resetGame_level_1();
				}
				else if (currentLevel == 2){
					resetGame_level_2();
				}
				else if (currentLevel == 3){
					resetGame_level_3();
				}
				gamePaused = false;
				handlePageMusic();
				if (!musicOn){
					playButtonClickSound();
				}
			}

			//EXIT BUTTON
			if (mx >= 526 && mx <= 748 && my >= 188 && my <= 276) {
				gameState = 8;
				if (musicOn){
					PlaySound("music\\studiokolomna2.wav", NULL, SND_LOOP | SND_ASYNC);
				}
				else{
					playButtonClickSound();
				}

				showExitPopup = false;

				if (gamePaused){
					gamePaused = false;
				}
				else{
					if (currentLevel == 1){
						resetGame_level_1();
					}
					else if (currentLevel == 2){
						resetGame_level_2();
					}
					else if (currentLevel == 3){
						resetGame_level_3();
					}
				}
			}

		}
		if (gamePaused && gameState == 0 && !showExitPopup && (mx >= 605 && mx <= 672 && my >= 327 && my <= 393)){		// UNPAUSE BUTTON  Middle in the screen
			gamePaused = false;
			if (musicOn){
				PlaySound("music\\Sekiro_startGame2.wav", NULL, SND_LOOP | SND_ASYNC);
			}
			else{
				playButtonClickSound();
			}
		}
		if ((gameState == 7) && (mx >= 219 && mx <= 391 && my >= 214 && my <= 275)){
			gameState = 0;
			loadImage();
			playButtonClickSound();
			handlePageMusic();
			if (gamePaused){
				gamePaused = false;
			}
			else{
				if (currentLevel == 1){
					resetGame_level_1();
				}
				else if (currentLevel == 2){
					resetGame_level_2();
				}
				else if (currentLevel == 3){
					resetGame_level_3();
				}
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		if (gameState == 6){	// game over page
			if ((mx >= 339 && mx <= 572 && my >= 275 && my <= 352)){		//submit click
				clickSubmit();
			}
			else if ((mx >= 706 && mx <= 939 && my >= 275 && my <= 352)){			// scores click
				gameState = 2;
				gameOverScoreButtonClick = true;
				if (musicOn){
					handlePageMusic();
				}
				else{
					playButtonClickSound();
				}
			}
			else if ((mx >= 522 && mx <= 756 && my >= 159 && my <= 237)){		// retry click
				if (currentLevel == 1){
					resetGame_level_1();
				}
				else if (currentLevel == 2){
					resetGame_level_2();
				}
				else if (currentLevel == 3){
					resetGame_level_3();
				}
				resetNameInput();

				if (musicOn){
					handlePageMusic();
				}
				else{
					playButtonClickSound();
				}

			}
			else {
				gameOverPopUpIndex = 0;
			}

			if (gameState == 6 && (mx >= 495 && mx <= 780) && (my >= 417 && my <= 460)){		//gameState = 1		// CHARACTER PAGE
				if (takeOnce){
					isTakeInput = true;
				}
			}
		}
	}

}


//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMoveFunction_HomePage(int mx, int my){
	//printf("%d\n %d\n\n", mx, my);
	if (gameState == -1)										// MOUSE MOVE STATE TO MOUSE OVER IN MENU PAGE
	{
		if (gameState == -1 && (mx >= 134 && mx <= 171) && (my >= 415 && my <= 427)){				//gameState = 0		// START GAME
			mouseOverState = 0;
			//mouseOverSound();
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 242) && (my >= 375 && my <= 387)){		//gameState = 1		// CHARACTER PAGE
			mouseOverState = 1;
			//mouseOverSound();
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 188) && (my >= 334 && my <= 346)){		//gameState = 2		// HIGH SCORES
			mouseOverState = 2;
			//mouseOverSound();
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 205) && (my >= 294 && my <= 306)){		//gameState = 3		// OPTIONS
			mouseOverState = 3;
			//mouseOverSound();
		}
		else if (gameState == -1 && (mx >= 134 && mx <= 171) && (my >= 256 && my <= 267)){			//gameState = 4		// QUIT
			mouseOverState = 4;
			//mouseOverSound();
		}
		else{
			mouseOverState = -1;
		}
	}
	else {
		mouseOverState = -1;
	}

	if (showExitPopup && gameState == 0) {

		// RESUME OVER	
		if (mx >= 526 && mx <= 748 && my >= 436 && my <= 524) {
			playGamePageIndex = 1;
			//mouseOverSound();
		}

		//RESTART OVER
		else if (mx >= 526 && mx <= 748 && my >= 312 && my <= 400){
			playGamePageIndex = 2;
			//mouseOverSound();
		}
		// EXIT OVER
		else if (mx >= 526 && mx <= 748 && mx <= 748 && my >= 188 && my <= 276) {
			playGamePageIndex = 3;
			//mouseOverSound();
		}
		else{
			playGamePageIndex = 0;
		}
		//handlePlayGamePageMouseOver();
	}
	else{
		playGamePageIndex = 0;
	}

	if (gameState == 0 && (mx >= 10 && mx <= 60) && (my >= 660 && my <= 720)){
		resumeButtonIndex = 1;
		//mouseOverSound();
	}
	else {
		resumeButtonIndex = 0;
	}

	if (gamePaused && gameState == 0 && !showExitPopup && (mx >= 605 && mx <= 672 && my >= 327 && my <= 393)){
		gamePausedButtonOver = 1;
		//mouseOverSound();
	}
	else{
		gamePausedButtonOver = 0;
	}

	if (gameState == 7){											// For Game Level	
		if ((mx >= 133 && mx <= 404 && my >= 152 && my <= 635)){				// iMouse Click er kaj Character er iMouse e ache
			gameLevelIndex = 1;
			currentLevel = 1;
		}
		else if ((mx >= 504 && mx <= 775 && my >= 152 && my <= 635)){
			gameLevelIndex = 2;
			currentLevel = 2;
		}
		else if ((mx >= 874 && mx <= 1145 && my >= 152 && my <= 635)){
			gameLevelIndex = 3;
			currentLevel = 3;
		}
		else {
			gameLevelIndex = 0;
		}
	}
	else {
		gameLevelIndex = 0;
	}
	if (gameState == 8){
		if ((mx >= 133 && mx <= 404 && my >= 152 && my <= 635)){				// iMouse Click er kaj Character er iMouse e ache
			playMapIndex = 1;
		}
		else if ((mx >= 504 && mx <= 775 && my >= 152 && my <= 635)){
			playMapIndex = 2;
		}
		else if ((mx >= 874 && mx <= 1145 && my >= 152 && my <= 635)){
			playMapIndex = 3;
		}
		else {
			playMapIndex = 0;
		}
	}
	else {
		playMapIndex = 0;
	}

	if (gameState == 6){	// game over page
		if ((mx >= 339 && mx <= 572 && my >= 275 && my <= 352)){
			gameOverPopUpIndex = 1;
		}
		else if ((mx >= 706 && mx <= 939 && my >= 275 && my <= 352)){
			gameOverPopUpIndex = 2;
		}
		else if ((mx >= 522 && mx <= 756 && my >= 159 && my <= 237)){
			gameOverPopUpIndex = 3;
		}
		else {
			gameOverPopUpIndex = 0;
		}
	}
	else{
		gameOverPopUpIndex = 0;
	}
}







/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboardFunction_HomePage(unsigned char key)
{
	if (key == 27 && gameState == 2 && gameOverScoreButtonClick == true){
		gameOverPopUpIndex = 0;
		gameState = 6;
		gameOverScoreButtonClick = false;

		if (takeOnce && len == 0){
			isTakeInput = false;
		}

		if (musicOn){
			PlaySound(0, 0, 0);
		}
		else{
			playButtonClickSound();
		}
		return;
	}

	if (gameState != -1 && gameState != -2 && gameState != 0){


		if (key == 27){				// Back Button Click Function // ESC KEY
			if (OPTIONS && gameState == 4){
				gameState = 3;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
				return;
			}
			else if (CHARACTERS && gameState == 4){
				gameState = 1;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
			}
			else if (SCORES && gameState == 4){
				gameState = 2;
				if (!musicOn){
					playButtonClickSound();
				}
				if (musicOn){
					handlePageMusic();
				}
				return;
			}
			else if (gameState == 7){
				gameState = -1;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (gameState == 8){
				gameState = 7;
				if (!musicOn){
					playButtonClickSound();
				}
				return;
			}
			else if (gameState == 3){
				if (isOptionOver == true && isOption == false){ // backbutton in option page
					gameState = -1;
					optionIndex = 0;
					optionPagesIndex = 0;
					if (!musicOn){
						playButtonClickSound();
					}
					else{
						handlePageMusic();
					}

				}

				if (isOptionOver == true && isOption == true){ // apply button
					isOptionOver = true;
					isOption = false;
					optionIndex = optionPagesIndex;
					if (!musicOn){
						playButtonClickSound();
					}

				}
				if (isOptionOver == true && isOption == true){ // cancel button
					isOptionOver = true;
					isOption = false;
					optionIndex = optionPagesIndex;
					if (!musicOn){
						playButtonClickSound();
					}
				}
			}
			else{
				gameState = -1;
				if (musicOn){
					handlePageMusic();
				}
				else{
					playButtonClickSound();
				}
			}
		}

	}

	if (key == 13 && gameState == -2 && gameState != -1 && gameState != -3)
	{
		gameState = -1;
		if (!musicOn){
			playButtonClickSound();
		}
	}

	if (key == 27) { // ESC key pressed
		if (gameState == 0 && gameState != -1) {
			if (showExitPopup && gamePaused){
				showExitPopup = false; // Close popup // NO
				gamePaused = false;
				if (musicOn){
					PlaySound("music\\Sekiro_startGame2.wav", NULL, SND_LOOP | SND_ASYNC);		//resume music;
				}
				else{
					playButtonClickSound();
				}
			}
			else if (!showExitPopup && !gamePaused){
				showExitPopup = true;
				if (!musicOn){
					playButtonClickSound();
				}
				else{
					PlaySound(0, 0, 0);
				}
				gamePaused = true;
			}
		}
		else if (gameState != -1 && gameState != -2 && gameState != 0 && gameState != 1 && gameState != 3) {
			gameState = -1;
			if (musicOn) {
				handlePageMusic();
			}
		}
	}

	if (key == 13 && showExitPopup && gameState == 0){
		gameState = 8;
		if (musicOn){
			PlaySound("music\\studiokolomna2.wav", NULL, SND_LOOP | SND_ASYNC);
		}
		else{
			playButtonClickSound();
		}

		showExitPopup = false;

		if (gamePaused){
			gamePaused = false;
		}
		else{
			if (currentLevel == 1){
				resetGame_level_1();
			}
			else if (currentLevel == 2){
				resetGame_level_2();
			}
			else if (currentLevel == 3){
				resetGame_level_3();
			}
		}
	}

	if ((key == 'M' || key == 'm') && !showExitPopup && !gamePaused)					// FOR MUTE AND UNMUTE
	{
		musicOnOff();

	}
	if ((key == 'B' || key == 'b') && gameState == 0){
		if (canUseMedicate && healthIndex <7){
			healthIndex++;
			canUseMedicate = false;
		}

	}
	
	if (key == 'Q' || key == 'q'){
		healthIndex = 0;
		takeOnce = true;
	}
	
	if (gameState == 6){
		takeInput(key);
	}






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

void iSpecialKeyboardFunction_HomePage(unsigned char key){
	// MENU PAGE'S FUNCTIONS ////// DON'T TOUCH

	if (key == GLUT_KEY_F10 && !showExitPopup && !gamePaused)					// FOR MUTE AND UNMUTE
	{
		musicOnOff();

	}


	if (key == GLUT_KEY_END && (gameState == -1 || gameState == -2))
	{
		gameState = 5;															// to close the program ,,,when player is at home page or enter page
	}
	if (key == GLUT_KEY_HOME && gameState == -1 && gameState != -2){
		gameState = -2;
		if (!musicOn){
			playButtonClickSound();
		}
	}
	//playButtonClickSound();
	if (gameState == -1 && key == GLUT_KEY_F1){									//gameState = 0		// START GAME
		gameState = 7;
		playButtonClickSound();
		//handlePageMusic();
	}
	else if (gameState == -1 && key == GLUT_KEY_F2){		//gameState = 1		// STORY PAGE
		gameState = 1;
		loadImage();
		playButtonClickSound();
		handlePageMusic();
	}
	else if (gameState == -1 && key == GLUT_KEY_F3) {		//gameState = 2		// HIGH SCORES
		gameState = 2;
		loadImage();
		playButtonClickSound();
		handlePageMusic();
	}
	else if (gameState == -1 && key == GLUT_KEY_F4){		//gameState = 3		// OPTIONS
		optionIndex = 0;
		optionPagesIndex = 0;
		gameState = 3;
		loadImage();
		playButtonClickSound();
		handlePageMusic();
	}
	else if (gameState == -1 && key == GLUT_KEY_F5){		//gameState = 4		// CREDITS
		gameState = 4;
		loadImage();
		playButtonClickSound();
		handlePageMusic();
	}

}
#endif