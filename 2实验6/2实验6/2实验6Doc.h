
// 2ʵ��6Doc.h : CMy2ʵ��6Doc ��Ľӿ�
//


#pragma once


class CMy2ʵ��6Doc : public CDocument
{
protected: // �������л�����
	CMy2ʵ��6Doc();
	DECLARE_DYNCREATE(CMy2ʵ��6Doc)

// ����
public:

// ����
public:
	CString s;
	int A;
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
	virtual ~CMy2ʵ��6Doc();
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
