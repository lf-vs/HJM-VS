
// 3����ʵ��Doc.h : CMy3����ʵ��Doc ��Ľӿ�
//


#pragma once


class CMy3����ʵ��Doc : public CDocument
{
protected: // �������л�����
	CMy3����ʵ��Doc();
	DECLARE_DYNCREATE(CMy3����ʵ��Doc)

// ����
public:

// ����
public:
	CRect cr1, cr2, cr3, cr4;
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
	virtual ~CMy3����ʵ��Doc();
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
