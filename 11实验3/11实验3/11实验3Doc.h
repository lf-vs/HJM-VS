
// 11ʵ��3Doc.h : CMy11ʵ��3Doc ��Ľӿ�
//


#pragma once
#include "11ʵ��3Set.h"


class CMy11ʵ��3Doc : public CDocument
{
protected: // �������л�����
	CMy11ʵ��3Doc();
	DECLARE_DYNCREATE(CMy11ʵ��3Doc)

// ����
public:
	CMy11ʵ��3Set m_My11ʵ��3Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy11ʵ��3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
