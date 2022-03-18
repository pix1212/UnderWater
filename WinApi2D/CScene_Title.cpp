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
	//0. 로고 출력용 오브젝트 출력
	CImageObject* logoObject = new CImageObject;
	logoObject->Load(L"LogoImage", L"texture\\Title.bmp"); 
	logoObject->SetPos(fPoint(0.f, 0.f));
	logoObject->SetScale(fPoint(640.f, 479.f));
	AddObject(logoObject, GROUP_GAMEOBJ::BACKGROUND);

	//1. 배경 출력
	//2. 시작 버튼
	//3. 종료 버튼
}

void CScene_Title::Exit()
{
}

