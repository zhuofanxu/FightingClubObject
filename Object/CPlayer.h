/*所有玩家角色基类*/
#pragma once
#ifndef _CPlayer_h_
#define _CPlayer_h_
#include"CObject.h"
#include"CAction.h"
#include<map>
class CPlayer:public CObject
{
public:
	//角色的通用的一些操作
	CPlayer(Ogre::SceneManager* sceneMgr,const std::string& name,const std::string& meshName);
	virtual ~CPlayer();
	void Walk(float mWalkSpeed,const Ogre::FrameEvent& evt);      //角色行走
	void Die(const Ogre::FrameEvent& evt);                       //角色死亡                        //角色死亡
	//void Run();                                                //角色跑动
	void Destroy();                                            //角色销毁
	float GetLife(){return mLife;}                            //获取角色生命值
	

protected:
	//角色的共有的一些属性
	float   mLife;                          //角色的生命值，对应血条的进度
	CAction* mAction;                     //角色动作,使用指向指针的指针，以便mAction[i]可以表示多对象
	std::string mPlayerName;               //角色名
	std::map<Player_Action_Type,CAction*>mPlayerAction;  //分别用动作类型和动作类指针两种自定义的数据类型创建map对象
};
#endif //_CPlayer_h_