
// 11ʵ��12Doc.h : CMy11ʵ��12Doc ��Ľӿ�
//


#pragma once
#include "11ʵ��12Set.h"


class CMy11ʵ��12Doc : public CDocument
{
protected: // �������л�����
	CMy11ʵ��12Doc();
	DECLARE_DYNCREATE(CMy11ʵ��12Doc)

// ����
public:
	CMy11ʵ��12Set m_My11ʵ��12Set;

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
	virtual ~CMy11ʵ��12Doc();
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
