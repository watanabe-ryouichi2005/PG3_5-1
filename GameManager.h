#pragma once



#include<memory>
#include"IScene.h"
#include"Novice.h"
#include "Title.h"
#include "Stage.h"
#include "Clear.h"
using namespace std;

class GameManager
{
public:

	GameManager();
	~GameManager();

	int Run(char* keys, char* preKeys);
private:
	unique_ptr<IScene> sceneArr_[3];

	int currentSceneNo_;
	int prevSceneNo_=0;
};

