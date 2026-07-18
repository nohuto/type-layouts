struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _DEVPROPKEY// Size=0x14 (Id=1167)
{
    struct _GUID fmtid;// Offset=0x0 Size=0x10
    unsigned long pid;// Offset=0x10 Size=0x4
};

enum _DEVPROPSTORE
{
    DEVPROP_STORE_SYSTEM=0,
    DEVPROP_STORE_USER=1
};

struct _DEVPROPCOMPKEY// Size=0x20 (Id=464)
{
    struct _DEVPROPKEY Key;// Offset=0x0 Size=0x14
    enum _DEVPROPSTORE Store;// Offset=0x14 Size=0x4
    wchar_t * LocaleName;// Offset=0x18 Size=0x8
};

struct _DEVPROPERTY// Size=0x30 (Id=1986)
{
    struct _DEVPROPCOMPKEY CompKey;// Offset=0x0 Size=0x20
    unsigned long Type;// Offset=0x20 Size=0x4
    unsigned long BufferSize;// Offset=0x24 Size=0x4
    void * Buffer;// Offset=0x28 Size=0x8
};
