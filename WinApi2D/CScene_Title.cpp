#include "framework.h"
#include "CScene_Title.h"
#include "CImageObject.h"

CScene_Title::CScene_Title()
{
}

CScene_Title::~CScene_Title()
{
}

void CScene_Title::Enter()
{
	//TODO:
	//0. �ΰ� ��¿� ������Ʈ ���
	CImageObject* logoObject = new CImageObject;
	logoObject->Load(L"LogoImage", L"texture\\Title.bmp"); 
	logoObject->SetPos(fPoint(0.f, 0.f));
	logoObject->SetScale(fPoint(640.f, 479.f));
	AddObject(logoObject, GROUP_GAMEOBJ::BACKGROUND);

	//1. ��� ���
	//2. ���� ��ư
	//3. ���� ��ư
}

void CScene_Title::Exit()
{
}

