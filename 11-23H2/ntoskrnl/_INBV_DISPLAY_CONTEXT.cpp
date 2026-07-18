enum _INBV_PIXEL_FORMAT
{
    PixelFormatUnknown=0,
    PixelFormat4BitPlanar=1,
    PixelFormatR8G8B8=2,
    PixelFormatR8G8B8X8=3,
    PixelFormatB8G8R8=4,
    PixelFormatB8G8R8X8=5
};

struct _INBV_MODE_INFORMATION// Size=0x10 (Id=1612)
{
    unsigned long Height;// Offset=0x0 Size=0x4
    unsigned long Width;// Offset=0x4 Size=0x4
    unsigned long Stride;// Offset=0x8 Size=0x4
    enum _INBV_PIXEL_FORMAT PixelFormat;// Offset=0xc Size=0x4
};

union _unnamed_1388// Size=0x8 (Id=1388)
{
    void * FrameBuffer;// Offset=0x0 Size=0x8
    long  ( * BltRoutine)(struct _INBV_GRAPHICS_RECTANGLE * ,struct _INBV_OFFSET * ,unsigned char );// Offset=0x0 Size=0x8
};

struct _INBV_DISPLAY_CONTEXT// Size=0x28 (Id=1389)
{
    unsigned char FrameBufferValid;// Offset=0x0 Size=0x1
    unsigned char FrameBufferMapped;// Offset=0x1 Size=0x1
    unsigned char DisplayRotation;// Offset=0x2 Size=0x1
    struct _INBV_MODE_INFORMATION ModeInformation;// Offset=0x4 Size=0x10
    void * ShadowBuffer;// Offset=0x18 Size=0x8
    union _unnamed_1388 VideoMemory;// Offset=0x20 Size=0x8
};
