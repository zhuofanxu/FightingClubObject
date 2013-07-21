#include"CPlayer.h"


CPlayer::CPlayer(Ogre::SceneManager* sceneMgr,const std::string& name,const std::string& meshName):CObject(sceneMgr,
	name,meshName)
{
	mLife=100;
	mAction=0;
}

CPlayer::~CPlayer()
{
}

void CPlayer::Walk(float mWalkSpeed,const Ogre::FrameEvent& evt)
{
	if(!mAction)
	{
	//mAction=new CAction(mBodyEntity,WALK);
	//mPlayerAction[WALK]=mAction;
	mPlayerAction.insert(std::pair<Player_Action_Type,CAction*>(WALK,mAction));
	mPlayerAction[WALK]=new CAction(mBodyEntity,WALK);                           //动作实例化
	}
	mPlayerAction[WALK]->setEnabled();
	//mWalkState->addTime(evt.timeSinceLastFrame*3);
}

void CPlayer::Die(const Ogre::FrameEvent& evt)
{
	if(!(mAction+1))
	{
	mPlayerAction.insert(std::pair<Player_Action_Type,CAction*>(DIE,mAction+1));
	mPlayerAction[DIE]=new CAction(mBodyEntity,DIE);
	}
	mPlayerAction[DIE]->setEnabled();
}