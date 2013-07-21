/*���ж���״̬��*/
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
	@mEntity         �󶨶�����ʵ��
	@pat             ö�ٶ�������
	@mAnimationState �붯���ԵĶ���״̬
	*/
	CAction(Ogre::Entity *mEntity,Player_Action_Type pat);
	inline bool getisEnabled(){return isEnabled;}                           //��ȡ����״̬
	inline bool getLooped(){return isLooped;}                               //��ȡ����ѭ��״̬
	void setEnabled();                                                      //�����
	void setLoop();                                                         //���ö���ѭ��
	std::string getAnimationName(Player_Action_Type pat);

	private:
	Ogre::AnimationState *mAnimationState;   //��Ӧ�Ķ���״̬
	std::string          mAnimationName;     //ģ�͵Ķ�����
	bool                 isEnabled;         //�Ƿ񼤻�
	bool                 isLooped;         //�Ƿ�ѭ��
};
#endif//_CAction_h_