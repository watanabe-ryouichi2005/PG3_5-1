#pragma once
#include"IScene.h"
#include"Player.h"
#include"Enemy.h"
class Stage:public IScene
{public:
	void Init()override;
	~Stage();
	void Update(char*keys,char *preKeys)override;
	
	void Draw()override;
private:
	Player* player_=nullptr;
	Enemy* enemy_=nullptr;
};

