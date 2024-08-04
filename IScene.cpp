
#pragma once
#include"IScene.h"
int IScene::sceneNo;

void IScene::Init()
{
}

void IScene::Update(char* /*keys*/, char* /*preKeys*/)
{
}

void IScene::Draw()
{
}

IScene::~IScene() {}

int IScene::GetSceneNo() {
	return sceneNo ;
};



