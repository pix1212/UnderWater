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
	// 0. 로고 출력용 오브젝트 제작
	
	CImageObject* logoObject = new CImageObject;
	logoObject->SetPos(fPoint());
	logoObject->SetScale(fPoint());
	AddObject(logoObject, GROUP_GAMEOBJ::BACKGROUND);


	// 1. 배경출력
	// 2. 시작버튼
	// 3. 종료버튼
}


void CScene_Title::Exit()
{
}






