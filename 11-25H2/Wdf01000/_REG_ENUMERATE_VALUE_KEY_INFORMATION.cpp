enum _KEY_VALUE_INFORMATION_CLASS
{
    KeyValueBasicInformation=0,
    KeyValueFullInformation=1,
    KeyValuePartialInformation=2,
    KeyValueFullInformationAlign64=3,
    KeyValuePartialInformationAlign64=4,
    KeyValueLayerInformation=5,
    MaxKeyValueInfoClass=6
};

struct _REG_ENUMERATE_VALUE_KEY_INFORMATION// Size=0x40 (Id=3426)
{
    void * Object;// Offset=0x0 Size=0x8
    unsigned long Index;// Offset=0x8 Size=0x4
    enum _KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass;// Offset=0xc Size=0x4
    void * KeyValueInformation;// Offset=0x10 Size=0x8
    unsigned long Length;// Offset=0x18 Size=0x4
    unsigned long * ResultLength;// Offset=0x20 Size=0x8
    void * CallContext;// Offset=0x28 Size=0x8
    void * ObjectContext;// Offset=0x30 Size=0x8
    void * Reserved;// Offset=0x38 Size=0x8
};
