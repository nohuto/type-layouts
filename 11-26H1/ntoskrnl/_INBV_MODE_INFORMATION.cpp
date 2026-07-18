enum _INBV_PIXEL_FORMAT
{
    PixelFormatUnknown=0,
    PixelFormat4BitPlanar=1,
    PixelFormatR8G8B8=2,
    PixelFormatR8G8B8X8=3,
    PixelFormatB8G8R8=4,
    PixelFormatB8G8R8X8=5
};

struct _INBV_MODE_INFORMATION// Size=0x10 (Id=1849)
{
    unsigned long Height;// Offset=0x0 Size=0x4
    unsigned long Width;// Offset=0x4 Size=0x4
    unsigned long Stride;// Offset=0x8 Size=0x4
    enum _INBV_PIXEL_FORMAT PixelFormat;// Offset=0xc Size=0x4
};
