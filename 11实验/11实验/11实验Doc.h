
// 11ʵ��Doc.h : CMy11ʵ��Doc ��Ľӿ�
//


#pragma once
#include "11ʵ��Set.h"


class CMy11ʵ��Doc : public CDocument
{
protected: // �������л�����
	CMy11ʵ��Doc();
	DECLARE_DYNCREATE(CMy11ʵ��Doc)

// ����
public:
	CMy11ʵ��Set m_My11ʵ��Set;

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
	virtual ~CMy11ʵ��Doc();
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
