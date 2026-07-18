struct _REG_LOAD_KEY_INFORMATION// Size=0x58 (Id=2247)
{
    void * Object;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING * KeyName;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING * SourceFile;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
    void * TrustClassObject;// Offset=0x20 Size=0x8
    void * UserEvent;// Offset=0x28 Size=0x8
    unsigned long DesiredAccess;// Offset=0x30 Size=0x4
    void ** RootHandle;// Offset=0x38 Size=0x8
    void * CallContext;// Offset=0x40 Size=0x8
    void * ObjectContext;// Offset=0x48 Size=0x8
    void * Reserved;// Offset=0x50 Size=0x8
};
