#ifndef HIGHSCORES_H_INCLUDED
#define HIGHSCORES_H_INCLUDED


#include "bitmap_loader.h"

char gameOverPage[35] = "image\\GameOver\\gameOver2.bmp";
char gameOverPopUp[4][35] = {
	"image\\GameOver\\popUp\\popUp.bmp",
	"image\\GameOver\\popUp\\submit.bmp",
	"image\\GameOver\\popUp\\scores.bmp",
	"image\\GameOver\\popUp\\retry.bmp"
};
int gameOverPopUpIndex = 0;

bool gameOverScoreButtonClick = false;

int len = 0;
char str1[16];

bool isTakeInput = false;
bool takeOnce = true;
struct HighScore {
	char name[16];
	int score;
};

void  resetNameInput();
struct HighScore storeScores[6];

void saveScores();
void checkAndUpdateHighScores(int newScore, const char *name);
void gameOver();
void takeInput(unsigned key);
void showEnterName();

void sortScores() {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (storeScores[i].score < storeScores[j].score) {
				struct HighScore temp = storeScores[i];
				storeScores[i] = storeScores[j];
				storeScores[j] = temp;
			}
		}
	}
}

void checkAndUpdateHighScores(int newScore, const char *name) {
	if (newScore > storeScores[4].score) {
		storeScores[5].score = newScore;
		strncpy(storeScores[5].name, name, sizeof(storeScores[5].name) - 1);
		storeScores[5].name[sizeof(storeScores[5].name) - 1] = '\0';
		storeScores[5].name[15] = '\0'; // Ensure the name is null-terminated
		sortScores();
		saveScores();
	}
}

void displayScores() {
	char nameBuffer[20], scoreBuffer[20];
	for (int i = 0; i < 5; i++) {
		sprintf(nameBuffer, "%s", storeScores[i].name);
		sprintf(scoreBuffer, "%d", storeScores[i].score);
		iText(175, 460 - (i * 80), nameBuffer, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(425, 460 - (i * 80), scoreBuffer, GLUT_BITMAP_TIMES_ROMAN_24);
	}
}

void loadScores() {
	FILE *file = fopen("Score.txt", "r");
	if (!file) {
		for (int i = 0; i < 5; i++) {
			strcpy(storeScores[i].name, "Unknown");
			storeScores[i].score = 0;
		}
		return;
	}
	for (int i = 0; i < 5; i++) {
		if (fscanf(file, " %15[^\n] %d", storeScores[i].name, &storeScores[i].score) != 2) {
			strcpy(storeScores[i].name, "Unknown");
			storeScores[i].score = 0;
		}
	}
	fclose(file);
}

void saveScores() {
	FILE *file = fopen("Score.txt", "w");
	if (!file) return;
	for (int i = 0; i < 5; i++) {
		fprintf(file, "%s\n%d\n", storeScores[i].name, storeScores[i].score);
	}
	fclose(file);
}

void showEnterName() {
	iSetColor(255, 255, 255);
	iShowBMP2(0, 0, gameOverPage, 0);
	iShowBMP2(0, 0, gameOverPopUp[gameOverPopUpIndex], 0);
	if (isTakeInput && takeOnce){
		iText(500, 431, str1, GLUT_BITMAP_HELVETICA_18);
	}
	else{
		if (!takeOnce){
			iText(500, 431, "SUBMITTED :) ", GLUT_BITMAP_HELVETICA_18);
		}
		else{
			iText(500, 431, "ENTER YOUR SWEET NAME...! :) ", GLUT_BITMAP_HELVETICA_18);
		}
	}
}

void clickSubmit() {
	if (len != 0){
		takeInput('\r');
	}

}

void takeInput(unsigned key) {
	if (key == '\r') {
		checkAndUpdateHighScores(score, str1);
		if (len != 0){
			resetNameInput();
			takeOnce = false;
			playButtonClickSound();
		}

	}
	else if (key == '\b' && len > 0) {
		str1[--len] = '\0';
		if (len == 0){
			if (takeOnce){
				isTakeInput = false;
			}
		}
	}
	else if (key == '\b' && len == 0) {
		if (takeOnce){
			isTakeInput = false;
		}
	}
	else if (len < 15 && takeOnce) {
		isTakeInput = true;
		if (key == ' '){
			key = ' ';  // Convert spaces to underscores (optional)
		}
		str1[len++] = key;
		str1[len] = '\0';
	}
}

void gameOver() {
	iSetColor(rand() % 255, rand() % 255, rand() % 255);
	char scoreText[50];
	sprintf(scoreText, "%d", score);
	iSetColor(255, 255, 255);
	iText(560, 480, scoreText, GLUT_BITMAP_TIMES_ROMAN_24);
	showEnterName();
}

void resetNameInput() {
	memset(str1, 0, sizeof(str1));
	len = 0;
	score = 0;
	isTakeInput = false;
}


void resetHighScore() {
	// Reset score and input states
	score = 0;
	len = 0;
	isTakeInput = false;
	takeOnce = true;
	gameOverPopUpIndex = 0;
	gameOverScoreButtonClick = false;

	// Reset the name input buffer
	memset(str1, 0, sizeof(str1));

	// You may also want to reload scores from file
	loadScores();

	// If you have other states related to gameplay, reset them here

	// Transition back to the main menu or restart the gameplay
}
#endif