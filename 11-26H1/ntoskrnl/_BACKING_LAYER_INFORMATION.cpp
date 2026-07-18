struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _BACKING_LAYER_INFORMATION// Size=0x18 (Id=2543)
{
    struct _BOOT_LAYER_INFORMATION * Layer;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING RelativePath;// Offset=0x8 Size=0x10
};
