#include "Banks/SetAutoBank.h"
#include "Keys.h"
#include "SpriteManager.h"


const UINT8 anim_idle[] = { 1, 0 }; //The first number indicates the number of frames
const UINT8 anim_walk[] = { 5, 0,1,2,3,4 };


void START() {
}

void UPDATE() {
	if (KEY_PRESSED(J_UP)) {
		TranslateSprite(THIS, 0, -1);
		SetSpriteAnim(THIS, anim_walk, 15);
	}
	if (KEY_PRESSED(J_DOWN)) {
		TranslateSprite(THIS, 0, 1);
		SetSpriteAnim(THIS, anim_walk, 15);
	}
	if (KEY_PRESSED(J_LEFT)) {
		TranslateSprite(THIS, -1,0);
		SetSpriteAnim(THIS, anim_walk, 15);
	}
	if (KEY_PRESSED(J_RIGHT)) {
		TranslateSprite(THIS, 1,0);
		SetSpriteAnim(THIS, anim_walk, 15);
	}
	if (keys == 0) {
		SetSpriteAnim(THIS, anim_idle, 15);
	}
}

void DESTROY() {
}