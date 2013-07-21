#pragma once
#ifndef _CPlayerMySelf_h_
#define _CPlayerMySelf_h_
#include"CPlayer.h"
class CPlayerMySelf:public CPlayer
{
public:
	CPlayerMySelf(const std::string& PlayerName,Ogre::SceneManager* sceneMgr,const std::string& name,const std::string& meshName);
	~CPlayerMySelf();

	
};
#endif //_CPlayerMySelf_h_