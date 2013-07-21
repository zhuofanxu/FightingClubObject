#include"CPlayerMySelf.h"

CPlayerMySelf::CPlayerMySelf(const std::string& PlayerName,Ogre::SceneManager* sceneMgr,const std::string& name,const std::string& meshName):CPlayer(
	sceneMgr,name,meshName)
{
	mPlayerName=PlayerName;
}

CPlayerMySelf::~CPlayerMySelf()
{
}

