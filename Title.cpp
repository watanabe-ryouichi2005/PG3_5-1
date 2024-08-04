#include "Title.h"
#include "Novice.h"
void Title::Init() {}

void Title::Update(char* keys, char* preKeys)
{
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE])
	{
		sceneNo = STAGE;
	}
}

void Title::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, 0x0000ffff, kFillModeSolid);
	Novice::ScreenPrintf(600, 360, "Game Title");
}

