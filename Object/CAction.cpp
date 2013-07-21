#include"CAction.h"

CAction::CAction(Ogre::Entity *mEntity,Player_Action_Type pat):
isEnabled(false),isLooped(false),mAnimationState(0)
{
	mAnimationState=mEntity->getAnimationState(getAnimationName(pat));
}

std::string CAction::getAnimationName(Player_Action_Type pat)
{
	switch(pat)
	{
	case WALK:
		mAnimationName="Walk";
		break;
	case DIE:
		mAnimationName="Die";
		break;
	}
	return mAnimationName;
}

void CAction::setEnabled()
{

	mAnimationState->setEnabled(true);
	isEnabled=true;
}

void CAction::setLoop()
{

	mAnimationState->setLoop(true);
	isLooped=true;
}
	