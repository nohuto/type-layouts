struct _ETW_DUPLICATE_HANDLE_EVENT// Size=0x1a (Id=1883)
{
    void * Object;// Offset=0x0 Size=0x8
    unsigned long SourceHandle;// Offset=0x8 Size=0x4
    unsigned long TargetHandle;// Offset=0xc Size=0x4
    unsigned long TargetProcessId;// Offset=0x10 Size=0x4
    unsigned short ObjectType;// Offset=0x14 Size=0x2
    unsigned long SourceProcessId;// Offset=0x16 Size=0x4
};
