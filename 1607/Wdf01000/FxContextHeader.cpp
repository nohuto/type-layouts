struct FxContextHeader// Size=0x40 (Id=958)
{
    class FxObject * Object;// Offset=0x0 Size=0x8
    struct FxContextHeader * NextHeader;// Offset=0x8 Size=0x8
    void  ( * EvtCleanupCallback)(void * );// Offset=0x10 Size=0x8
    void  ( * EvtDestroyCallback)(void * );// Offset=0x18 Size=0x8
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO * ContextTypeInfo;// Offset=0x20 Size=0x8
    unsigned long long Context[1];// Offset=0x30 Size=0x8
};
