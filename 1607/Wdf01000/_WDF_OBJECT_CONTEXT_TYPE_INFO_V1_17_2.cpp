struct _WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17// Size=0x28 (Id=2798)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    char * ContextName;// Offset=0x8 Size=0x8
    unsigned long long ContextSize;// Offset=0x10 Size=0x8
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO_V1_17 * UniqueType;// Offset=0x18 Size=0x8
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO *  ( * EvtDriverGetUniqueContextType)();// Offset=0x20 Size=0x8
};
