#pragma once
#include "CGameObject.h"

class CD2DImage;

class CImageObject : public CGameObject
{

private:

	CD2DImage* m_pImg;

public:

	CImageObject();
	virtual	~CImageObject();


	CImageObject* Clone();

	virtual void update();
	virtual void render();

	//이미지 로딩하는 기능
	void Load(const wstring& strkey, const wstring& strpath);

};

