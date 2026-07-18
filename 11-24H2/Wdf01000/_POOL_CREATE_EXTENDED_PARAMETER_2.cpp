enum _POOL_CREATE_EXTENDED_PARAMETER_TYPE
{
    PoolCreateExtendedParameterInvalidType=0,
    PoolCreateExtendedParameterName=1
};

struct _UNICODE_STRING// Size=0x10 (Id=250)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _POOL_CREATE_EXTENDED_PARAMETER// Size=0x18 (Id=4036)
{
    enum _POOL_CREATE_EXTENDED_PARAMETER_TYPE Type;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING PoolName;// Offset=0x8 Size=0x10
};
