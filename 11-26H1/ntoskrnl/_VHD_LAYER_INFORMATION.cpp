struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _VHD_LAYER_INFORMATION// Size=0x18 (Id=2614)
{
    struct _BOOT_LAYER_INFORMATION * ParentLayer;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING VhdFilePath;// Offset=0x8 Size=0x10
};
