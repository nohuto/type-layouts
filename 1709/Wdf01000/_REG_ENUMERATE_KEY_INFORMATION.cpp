enum _KEY_INFORMATION_CLASS
{
    KeyBasicInformation=0,
    KeyNodeInformation=1,
    KeyFullInformation=2,
    KeyNameInformation=3,
    KeyCachedInformation=4,
    KeyFlagsInformation=5,
    KeyVirtualizationInformation=6,
    KeyHandleTagsInformation=7,
    KeyTrustInformation=8,
    KeyLayerInformation=9,
    MaxKeyInfoClass=10
};

struct _REG_ENUMERATE_KEY_INFORMATION// Size=0x40 (Id=3711)
{
    void * Object;// Offset=0x0 Size=0x8
    unsigned long Index;// Offset=0x8 Size=0x4
    enum _KEY_INFORMATION_CLASS KeyInformationClass;// Offset=0xc Size=0x4
    void * KeyInformation;// Offset=0x10 Size=0x8
    unsigned long Length;// Offset=0x18 Size=0x4
    unsigned long * ResultLength;// Offset=0x20 Size=0x8
    void * CallContext;// Offset=0x28 Size=0x8
    void * ObjectContext;// Offset=0x30 Size=0x8
    void * Reserved;// Offset=0x38 Size=0x8
};
