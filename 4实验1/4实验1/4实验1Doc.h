
// 4ʵ��1Doc.h : CMy4ʵ��1Doc ��Ľӿ�
//


#pragma once


class CMy4ʵ��1Doc : public CDocument
{
protected: // �������л�����
	CMy4ʵ��1Doc();
	DECLARE_DYNCREATE(CMy4ʵ��1Doc)

// ����
public:
	int A, B, C, D;
	CRect cr;
// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy4ʵ��1Doc();
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
