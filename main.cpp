#include "Novice.h"
#include"GameManager.h"
#include"Title.h"
#include "Clear.h"
#include"Stage.h"
const char kWindowTitle[] = "GC1D_ワタナベ_リョウイチ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
	GameManager* gameManager = new GameManager();

		
	gameManager->Run(keys, preKeys);

	// ウィンドウの×ボタンが押されるまでループ
	/*while (Novice::ProcessMessage() == 0) {

		Novice::BeginFrame();

		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);


		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0)
		{
			break;
		}

		Novice::EndFrame();
	}*/

	// ライブラリの終了
	Novice::Finalize();

	return 0;
}

