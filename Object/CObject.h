/*-----------------------------------------------------------------
������3d�����п���Ⱦ����Ļ��࣬��̬�Ķ�̬����Ⱦ�����ɴ�����ʵ��
------------------------------------------------------------------*/
#pragma once
#ifndef _CObject_h_
#define _CObject_h_
#include"Common.h"
class CObject
{
public:
	//�����ͨ�õ�һЩ����

	CObject();
	/*
	@sceneMgr �����˶���ĳ���������
	@name     �˶�����Զ��������
	@meshName �˶������õ�ģ���� 
	*/
	CObject(Ogre::SceneManager* sceneMgr,const std::string& name,const std::string& meshName);
	
	virtual ~CObject();
	//virtual void CreateObject(Ogre::SceneManager* mSceneMgr)=0;
	inline  std::string        getName(){return mName;}                      // ��ȡ�˶��������         
	inline  Ogre::SceneManager *getSceneManager(){return mSceneManager;}    // �����˶���ĳ���������
	inline  Ogre::Entity       *getBodyEntity(){return mBodyEntity;}       // ��ȡ��ʵ��
	inline  Ogre::SceneNode    *getBodyNode(){return mBodyNode;}          // �˶���󶨵Ľڵ�
	inline  bool               isCollision(){return mCollision;}         //�Ƿ���Ҫ��ײ���
	/*��������,���ţ���λ���˴������麯���������������չ*/
	virtual void setPosition(Ogre::Vector3& pos){mBodyNode->setPosition(pos);}
	virtual void setScale(Ogre::Vector3& scale){mBodyNode->setScale(scale);}
	virtual void setOrientation(Ogre::Quaternion& qut){mBodyNode->setOrientation(qut);}
	virtual Ogre::Vector3 getPosition() { return mBodyNode->_getDerivedPosition(); }
	virtual Ogre::Vector3 getScale() const { return mBodyNode->getScale(); }
	virtual Ogre::Quaternion getOrientation() const { return mBodyNode->getOrientation(); }

	//void DestroyObject();
protected:
	//�����е�һЩ����

	Ogre::SceneManager* mSceneManager;    //��������ĳ���������
	Ogre::Entity* mBodyEntity;          //��Entity
	Ogre::SceneNode* mBodyNode;   //���ڵ�

	std::string mName;                  //������ 
	std::string mMeshName;             //ģ����
	std::string mNormalMat;           //�����Ĳ�����
	std::string mDamageMat;          //���ܹ����Ĳ�����

	bool        mCollision;        //�Ƿ�����ײ
};
#endif //_CObject_h_