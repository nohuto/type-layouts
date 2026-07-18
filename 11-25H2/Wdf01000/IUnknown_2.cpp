struct IUnknown// Size=0x8 (Id=1500)
{
    HRESULT QueryInterface(struct _GUID & ,void ** );
    unsigned long AddRef();
    unsigned long Release();
    void IUnknown(struct IUnknown * );
    void IUnknown(struct IUnknown & );
    void IUnknown();
    struct IUnknown & operator=(struct IUnknown * );
    struct IUnknown & operator=(struct IUnknown & );
};
