
// 8ʵ��2��1��Doc.h : CMy8ʵ��2��1��Doc ��Ľӿ�
//


#pragma once


class CMy8ʵ��2��1��Doc : public CDocument
{
protected: // �������л�����
	CMy8ʵ��2��1��Doc();
	DECLARE_DYNCREATE(CMy8ʵ��2��1��Doc)

// ����
public:
	CRect cr;
	bool set;
	int x1, x2, y1, y2;
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
	virtual ~CMy8ʵ��2��1��Doc();
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
