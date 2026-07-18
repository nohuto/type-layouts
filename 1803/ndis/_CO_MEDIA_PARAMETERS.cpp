struct _CO_SPECIFIC_PARAMETERS// Size=0xc (Id=759)
{
    unsigned long ParamType;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char Parameters[1];// Offset=0x8 Size=0x1
};

struct _CO_MEDIA_PARAMETERS// Size=0x20 (Id=858)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned long ReceivePriority;// Offset=0x4 Size=0x4
    unsigned long ReceiveSizeHint;// Offset=0x8 Size=0x4
    struct _CO_SPECIFIC_PARAMETERS MediaSpecific;// Offset=0x10 Size=0xc
};
