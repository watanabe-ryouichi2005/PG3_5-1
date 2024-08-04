#pragma once
#include "IScene.h"
#include "tama.h"
#include "Vector2.h"



	class Player:IScene
	{
	public:
		Bullet* bullet_;
		Vector2 pos_;
		int r_;
		int speed_;

	public:
		Player(Vector2 pos, int r, int speed);
		~Player();
		void Update(char* keys, char* preKeys) override;
		void Draw();

		
	};


	

