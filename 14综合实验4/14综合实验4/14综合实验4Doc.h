
// 14�ۺ�ʵ��4Doc.h : CMy14�ۺ�ʵ��4Doc ��Ľӿ�
//


#pragma once
#include "14�ۺ�ʵ��4Set.h"


class CMy14�ۺ�ʵ��4Doc : public CDocument
{
protected: // �������л�����
	CMy14�ۺ�ʵ��4Doc();
	DECLARE_DYNCREATE(CMy14�ۺ�ʵ��4Doc)

// ����
public:
	CMy14�ۺ�ʵ��4Set m_My14�ۺ�ʵ��4Set;

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
	virtual ~CMy14�ۺ�ʵ��4Doc();
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
