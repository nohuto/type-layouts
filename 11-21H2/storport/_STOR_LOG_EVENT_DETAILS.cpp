enum _STOR_EVENT_ASSOCIATION_ENUM
{
    StorEventAdapterAssociation=0,
    StorEventLunAssociation=1,
    StorEventTargetAssociation=2,
    StorEventInvalidAssociation=3
};

struct _STOR_LOG_EVENT_DETAILS// Size=0x48 (Id=156)
{
    unsigned long InterfaceRevision;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    enum _STOR_EVENT_ASSOCIATION_ENUM EventAssociation;// Offset=0xc Size=0x4
    unsigned long PathId;// Offset=0x10 Size=0x4
    unsigned long TargetId;// Offset=0x14 Size=0x4
    unsigned long LunId;// Offset=0x18 Size=0x4
    unsigned char StorportSpecificErrorCode;// Offset=0x1c Size=0x1
    unsigned long ErrorCode;// Offset=0x20 Size=0x4
    unsigned long UniqueId;// Offset=0x24 Size=0x4
    unsigned long DumpDataSize;// Offset=0x28 Size=0x4
    void * DumpData;// Offset=0x30 Size=0x8
    unsigned long StringCount;// Offset=0x38 Size=0x4
    wchar_t ** StringList;// Offset=0x40 Size=0x8
};
