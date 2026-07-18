enum _KEY_SET_INFORMATION_CLASS
{
    KeyWriteTimeInformation=0,
    KeyWow64FlagsInformation=1,
    KeyControlFlagsInformation=2,
    KeySetVirtualizationInformation=3,
    KeySetDebugInformation=4,
    KeySetHandleTagsInformation=5,
    MaxKeySetInfoClass=6
};

struct _REG_SET_INFORMATION_KEY_INFORMATION// Size=0x38 (Id=2717)
{
    void * Object;// Offset=0x0 Size=0x8
    enum _KEY_SET_INFORMATION_CLASS KeySetInformationClass;// Offset=0x8 Size=0x4
    void * KeySetInformation;// Offset=0x10 Size=0x8
    unsigned long KeySetInformationLength;// Offset=0x18 Size=0x4
    void * CallContext;// Offset=0x20 Size=0x8
    void * ObjectContext;// Offset=0x28 Size=0x8
    void * Reserved;// Offset=0x30 Size=0x8
};
