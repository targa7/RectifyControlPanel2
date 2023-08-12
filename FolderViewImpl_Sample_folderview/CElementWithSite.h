#pragma once
class CElementWithSite : public Element, public IObjectWithSite
{
public:
	static HRESULT Register(HINSTANCE hInstance, unsigned short const* unknown, bool unknown2, PropertyInfo const* const* unknown3, unsigned int unknown4);
	static DirectUI::IClassInfo* Class;

	//IUnknown implementation
	virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void** ppvObject);

	virtual ULONG STDMETHODCALLTYPE AddRef(void);

	virtual ULONG STDMETHODCALLTYPE Release(void);
	//IObjectWithSite implemenation

	virtual HRESULT STDMETHODCALLTYPE SetSite(IUnknown* pUnkSite);

	virtual HRESULT STDMETHODCALLTYPE GetSite(REFIID riid, void** ppvSite);
};
