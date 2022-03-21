#include "framework.h"
#include "CScene_Stage01.h"
#include "CScene_Title.h"
#include "CImageObject.h"
#include "CImageButton.h"
#include "CPlayer.h"

CScene_Stage01::CScene_Stage01()
{
}

CScene_Stage01::~CScene_Stage01()
{
}

void CScene_Stage01::Enter()
{
	CImageObject* backgroundObject = new CImageObject;
	backgroundObject->Load(L"BackImage", L"texture\\Map.bmp");

	backgroundObject->SetPos(fPoint(0.f, 0.f));
	backgroundObject->SetScale(fPoint(640.f, 480.f));
	AddObject(backgroundObject, GROUP_GAMEOBJ::BACKGROUND);

	CGameObject* pPlayer = new CPlayer;
	pPlayer->SetPos(fPoint(320.f, 240.f));
	pPlayer->SetScale(fPoint(19.f, 29.f));
}

void CScene_Stage01::Exit()
{
}
