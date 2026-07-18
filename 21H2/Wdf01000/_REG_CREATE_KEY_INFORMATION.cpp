struct _REG_CREATE_KEY_INFORMATION// Size=0x70 (Id=2074)
{
    struct _UNICODE_STRING * CompleteName;// Offset=0x0 Size=0x8
    void * RootObject;// Offset=0x8 Size=0x8
    void * ObjectType;// Offset=0x10 Size=0x8
    unsigned long CreateOptions;// Offset=0x18 Size=0x4
    struct _UNICODE_STRING * Class;// Offset=0x20 Size=0x8
    void * SecurityDescriptor;// Offset=0x28 Size=0x8
    void * SecurityQualityOfService;// Offset=0x30 Size=0x8
    unsigned long DesiredAccess;// Offset=0x38 Size=0x4
    unsigned long GrantedAccess;// Offset=0x3c Size=0x4
    unsigned long * Disposition;// Offset=0x40 Size=0x8
    void ** ResultObject;// Offset=0x48 Size=0x8
    void * CallContext;// Offset=0x50 Size=0x8
    void * RootObjectContext;// Offset=0x58 Size=0x8
    void * Transaction;// Offset=0x60 Size=0x8
    void * Reserved;// Offset=0x68 Size=0x8
};
