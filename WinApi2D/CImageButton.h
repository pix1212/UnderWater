#pragma once
#include "CButtonUI.h"

class CD2DImage;

class CImageButton :  public CButtonUI
{
private:
	CD2DImage* m_pImg;
	wstring m_strText;

public:

	virtual void render();
	void Load(const wstring& strkey, const wstring& strPath);
	void setText(const wstring& str);

	CImageButton();
	 ~CImageButton();

};

