#ifndef HEROATTACK_H_INCLUDED
#define HEROATTACK_H_INCLUDED



#define _CRT_SECURE_NO_WARNINGS // Suppress warnings if needed
#define MAX_NORMAL_FIRE 10
#define MAX_SUPER_FIRE 1
#define heroWidth 42
#define heroHeight 53
int currentLevel = 1;
int heroCordinateX = 100;
int heroCordinateY = 200;
int heroCordinateJump = 0;
bool jump = false;
struct Attack {
	int x, y;
	int height, width;
	bool active;
	int direction;  // +1 or -1 (শুটিং ডিরেকশন ধরে রাখবে)
	char imagePath[100];
	int speed;
};


struct SuperAttack {
	int x, y;
	int height, width;
	bool active;
	int direction;  // +1 or -1 (শুটিং ডিরেকশন ধরে রাখবে)
	char imagePath[100];
	int speed;
};


struct Attack normalAttack[MAX_NORMAL_FIRE];
struct SuperAttack superAttack[MAX_SUPER_FIRE];


int facingDirection = 1; // 1 = ডান, -1 = বাম


void shootAttack() {
	for (int i = 0; i < MAX_NORMAL_FIRE; i++) {
		if (!normalAttack[i].active) {  // খালি জায়গা পেলে নতুন বুলেট শুট করবে

			normalAttack[i].width = 31;
			normalAttack[i].height = 16;

			normalAttack[i].active = true;
			normalAttack[i].speed = 15;
			normalAttack[i].direction = facingDirection; // বুলেট শুট হওয়ার সময়কার ডিরেকশন সংরক্ষণ

			// শুটিং ডিরেকশন অনুযায়ী ইমেজ সেট করবো
			if (normalAttack[i].direction == 1) {
				strcpy_s(normalAttack[i].imagePath, sizeof(normalAttack[i].imagePath), "image\\Character\\Normal Attack\\flame.bmp");

				normalAttack[i].x = heroCordinateX + heroWidth;
			}
			else {
				strcpy_s(normalAttack[i].imagePath, sizeof(normalAttack[i].imagePath), "image\\Character\\Normal Attack\\rev_flame.bmp");

				normalAttack[i].x = heroCordinateX - normalAttack[i].width;
			}
			normalAttack[i].y = heroCordinateY + heroCordinateJump + heroHeight / 2 - normalAttack[i].height / 2;

			break;
		}
	}
}

#endif

