#pragma once
#include"IScene.h"
#include"Clear.h"
class Title: public IScene
{public:
	void Init()override;
	void Update(char* keys, char* preKeys)override;
	void Draw()override;



};

