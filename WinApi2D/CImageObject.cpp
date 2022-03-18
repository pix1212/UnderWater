#include "framework.h"
#include "CImageObject.h"

CImageObject::CImageObject()
{
	m_pImg = nullptr;
}

CImageObject::~CImageObject()
{
	//���ҽ� �Ŵ����� �Ҳ���
}

CImageObject* CImageObject::Clone()
{
	return nullptr;
}

void CImageObject::update()
{
}

void CImageObject::render()
{

	if (nullptr == m_pImg)
		return;

	CRenderManager::getInst()->RenderImage(
		m_pImg,
		GetPos().x,
		GetPos().y,
		GetPos().x + GetScale().x,
		GetPos().y + GetScale().y
	);

}

void CImageObject::Load(const wstring& strkey, const wstring& strPath)
{
	m_pImg = CResourceManager::getInst()->LoadD2DImage(strkey, strPath);
}