
// G26W03MFC1View.h: CG26W03MFC1View 클래스의 인터페이스
//

#pragma once


class CG26W03MFC1View : public CView
{
protected: // serialization에서만 만들어집니다.
	CG26W03MFC1View() noexcept;
	DECLARE_DYNCREATE(CG26W03MFC1View)

// 특성입니다.
public:
	CG26W03MFC1Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CG26W03MFC1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // G26W03MFC1View.cpp의 디버그 버전
inline CG26W03MFC1Doc* CG26W03MFC1View::GetDocument() const
   { return reinterpret_cast<CG26W03MFC1Doc*>(m_pDocument); }
#endif

