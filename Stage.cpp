#include<math.h>
#include"Novice.h"
#include"Stage.h"
#include"Player.h"
#include"Enemy.h"
Stage::~Stage()
{
	delete player_;
	delete enemy_;
}

void Stage::Init()
{
	player_ = new Player({ 1280 / 2, 720 / 2 }, 16, 4);
	enemy_ = new Enemy({ 100, 300 }, 3, 16, true);
}

void Stage::Update(char* keys, char* preKeys)
{
	player_->Update(keys, preKeys);
	enemy_->Update();

	float r1 = (float)enemy_->radius_;
	float r2 = (float)player_->bullet_->r_;

	float a = enemy_->pos_.x - player_->bullet_->pos_.x;
	float b = enemy_->pos_.y - player_->bullet_->pos_.y;
	float distance = sqrtf(a * a + b * b);

	//撃った弾と敵が当たったらクリア
	if (distance <= r1 + r2) {
		sceneNo = CLEAR;
	}
}

void Stage::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, 255, kFillModeSolid);
	
	player_->Draw();


	enemy_->Draw();
}
