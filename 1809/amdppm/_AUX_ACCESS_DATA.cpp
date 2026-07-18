struct _GENERIC_MAPPING// Size=0x10 (Id=653)
{
    unsigned long GenericRead;// Offset=0x0 Size=0x4
    unsigned long GenericWrite;// Offset=0x4 Size=0x4
    unsigned long GenericExecute;// Offset=0x8 Size=0x4
    unsigned long GenericAll;// Offset=0xc Size=0x4
};

struct _GUID// Size=0x10 (Id=102)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _ACCESS_REASONS// Size=0x80 (Id=630)
{
    unsigned long Data[32];// Offset=0x0 Size=0x80
};

struct _AUX_ACCESS_DATA// Size=0xe0 (Id=146)
{
    struct _PRIVILEGE_SET * PrivilegesUsed;// Offset=0x0 Size=0x8
    struct _GENERIC_MAPPING GenericMapping;// Offset=0x8 Size=0x10
    unsigned long AccessesToAudit;// Offset=0x18 Size=0x4
    unsigned long MaximumAuditMask;// Offset=0x1c Size=0x4
    struct _GUID TransactionId;// Offset=0x20 Size=0x10
    void * NewSecurityDescriptor;// Offset=0x30 Size=0x8
    void * ExistingSecurityDescriptor;// Offset=0x38 Size=0x8
    void * ParentSecurityDescriptor;// Offset=0x40 Size=0x8
    void  ( * DeRefSecurityDescriptor)(void * ,void * );// Offset=0x48 Size=0x8
    void * SDLock;// Offset=0x50 Size=0x8
    struct _ACCESS_REASONS AccessReasons;// Offset=0x58 Size=0x80
    unsigned char GenerateStagingEvents;// Offset=0xd8 Size=0x1
};
