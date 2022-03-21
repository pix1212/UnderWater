#pragma once
#include "CGameObject.h"
class CPlayer :  public CGameObject
{
public:

	CPlayer();
	virtual ~CPlayer();

	void update();
	void render();
	virtual CGameObject* Clone();


};

