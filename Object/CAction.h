/*所有动作状态类*/
#pragma once
#ifndef _CAction_h_
#define _CAction_h_
#include"Common.h"

enum Player_Action_Type
{
  WALK,
  ATTACK,
  DIE,
};

class CAction
{

public:
	/*
	@mEntity         绑定动画的实体
	@pat             枚举动作类型
	@mAnimationState 与动作对的动画状态
	*/
	CAction(Ogre::Entity *mEntity,Player_Action_Type pat);
	inline bool getisEnabled(){return isEnabled;}                           //获取动画状态
	inline bool getLooped(){return isLooped;}                               //获取动画循环状态
	void setEnabled();                                                      //激活动画
	void setLoop();                                                         //设置动画循环
	std::string getAnimationName(Player_Action_Type pat);

	private:
	Ogre::AnimationState *mAnimationState;   //对应的动画状态
	std::string          mAnimationName;     //模型的动画名
	bool                 isEnabled;         //是否激活
	bool                 isLooped;         //是否循环
};
#endif//_CAction_h_