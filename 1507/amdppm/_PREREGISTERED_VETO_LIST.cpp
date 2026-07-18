struct _UNICODE_STRING// Size=0x10 (Id=163)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

struct _PREREGISTERED_VETO_LIST// Size=0x18 (Id=426)
{
    unsigned long VetoCount;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING VetoNames[1];// Offset=0x8 Size=0x10
};
