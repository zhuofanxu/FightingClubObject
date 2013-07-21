/*������ҽ�ɫ����*/
#pragma once
#ifndef _CPlayer_h_
#define _CPlayer_h_
#include"CObject.h"
#include"CAction.h"
#include<map>
class CPlayer:public CObject
{
public:
	//��ɫ��ͨ�õ�һЩ����
	CPlayer(Ogre::SceneManager* sceneMgr,const std::string& name,const std::string& meshName);
	virtual ~CPlayer();
	void Walk(float mWalkSpeed,const Ogre::FrameEvent& evt);      //��ɫ����
	void Die(const Ogre::FrameEvent& evt);                       //��ɫ����                        //��ɫ����
	//void Run();                                                //��ɫ�ܶ�
	void Destroy();                                            //��ɫ����
	float GetLife(){return mLife;}                            //��ȡ��ɫ����ֵ
	

protected:
	//��ɫ�Ĺ��е�һЩ����
	float   mLife;                          //��ɫ������ֵ����ӦѪ���Ľ���
	CAction* mAction;                     //��ɫ����,ʹ��ָ��ָ���ָ�룬�Ա�mAction[i]���Ա�ʾ�����
	std::string mPlayerName;               //��ɫ��
	std::map<Player_Action_Type,CAction*>mPlayerAction;  //�ֱ��ö������ͺͶ�����ָ�������Զ�����������ʹ���map����
};
#endif //_CPlayer_h_