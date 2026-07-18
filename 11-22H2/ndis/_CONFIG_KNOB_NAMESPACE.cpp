enum _CONFIG_KNOB_NAMESPACE_TYPE
{
    ConfigKnobNamespaceNdisGlobal=0,
    ConfigKnobNamespaceNetworkInterface=1,
    ConfigKnobNamespaceExecutionContext=2
};

struct _GUID// Size=0x10 (Id=282)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CONFIG_KNOB_NAMESPACE// Size=0x14 (Id=571)
{
    enum _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType;// Offset=0x0 Size=0x4
    struct _GUID ObjectId;// Offset=0x4 Size=0x10
};
