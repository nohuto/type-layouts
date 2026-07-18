struct FxPostProcessInfo// Size=0x18 (Id=1108)
{
    void FxPostProcessInfo();
    unsigned char SomethingToDo();
    void Evaluate(class FxPkgPnp * );
    struct FxCREvent * m_Event;// Offset=0x0 Size=0x8
    unsigned char m_DeleteObject;// Offset=0x8 Size=0x1
    unsigned char m_SetRemovedEvent;// Offset=0x9 Size=0x1
    struct _IRP * m_FireAndForgetIrp;// Offset=0x10 Size=0x8
};
