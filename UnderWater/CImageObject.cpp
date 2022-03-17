#include "framework.h"
#include "CImageObject.h"

CImageObject::CImageObject()
{
	m_pImg = nullptr;
}

CImageObject::~CImageObject()
{
}

CImageObject* CImageObject::Clone()
{
	return nullptr;
}

void CImageObject::update()
{
	if (nullptr != m_pImg)		//이미지 없으면 출력 안함
		return;

	CRenderManager::getInst()->RenderImage(
		m_pImg
		, GetPos().x
		, GetPos().y
		, GetPos().x + GetScale().x
		, GetPos().y + GetScale().y
	);
}

void CImageObject::Load(const wstring& strkey, const wstring& strpath)
{
	m_pImg = CResourceManager::getInst()->LoadD2DImage(strkey, strpath);
}
