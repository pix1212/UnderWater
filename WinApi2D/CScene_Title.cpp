#include "framework.h"
#include "CScene_Title.h"
#include "CImageObject.h"
#include "CImageButton.h"

CScene_Title::CScene_Title()
{
}

CScene_Title::~CScene_Title()
{
}

void ClickStartButton(DWORD_PTR, DWORD_PTR)
{
	if (KeyDown(VK_RETURN))
	{
		ChangeScn(GROUP_SCENE::STAGE_01);

	}
		
}

void ClickExitButton(DWORD_PTR, DWORD_PTR)
{
	PostQuitMessage(0);
}

void CScene_Title::Enter()
{
	//TODO:
	
	// 0. 배경 출력
	CImageObject* backgroundObject = new CImageObject;
	backgroundObject->Load(L"BackImage", L"texture\\Title_enter.bmp");

	backgroundObject->SetPos(fPoint(0.f, 0.f));
	backgroundObject->SetScale(fPoint(640.f, 480.f));
	AddObject(backgroundObject, GROUP_GAMEOBJ::BACKGROUND);


	//1. 로고 출력용 오브젝트 출력
	/*
	CImageObject* logoObject = new CImageObject;
	logoObject->Load(L"LogoImage", L"texture\\Title_enter.bmp"); 

	logoObject->SetPos(fPoint(0.f, 0.f));
	logoObject->SetScale(fPoint(640.f, 480.f));
	AddObject(logoObject, GROUP_GAMEOBJ::BACKGROUND);
	*/	

	//2. 시작 버튼
	
	/*CImageButton* startButton = new CImageButton;
	startButton->Load(L"Button", L"texture\\Button.bmp");
	startButton->SetText(L"PRESS 2 OR ENTER");
	startButton->SetPos(fPoint(0.f, 0.f));
	startButton->SetScale(fPoint(0.f, 0.f));
	startButton->SetClickedCallBack(ClickStartButton, 0, 0);
	AddObject(startButton, GROUP_GAMEOBJ::BACKGROUND);*/

	//3. 종료 버튼

	/*CImageButton* exitButton = new CImageButton;
	exitButton->Load(L"Button", L"texture\\Button.bmp");
	exitButton->SetText(L"PRESS 2 OR ENTER");
	exitButton->SetPos(fPoint(0.f, 0.f));
	exitButton->SetScale(fPoint(0.f, 0.f));
	exitButton->SetClickedCallBack(ClickExitButton, 0, 0);
	AddObject(exitButton, GROUP_GAMEOBJ::BACKGROUND);*/
}

void CScene_Title::Exit()
{
}

