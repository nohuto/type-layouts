struct _TLSPRITESTATE// Size=0xa8 (Id=337)
{
    unsigned char bInsideDriverCall;// Offset=0x0 Size=0x1
    unsigned long flOriginalSurfFlags;// Offset=0x4 Size=0x4
    unsigned long iOriginalType;// Offset=0x8 Size=0x4
    unsigned long flSpriteSurfFlags;// Offset=0xc Size=0x4
    unsigned long iSpriteType;// Offset=0x10 Size=0x4
    unsigned long flags;// Offset=0x14 Size=0x4
    unsigned long iType;// Offset=0x18 Size=0x4
    void * pState;// Offset=0x20 Size=0x8
    void * pfnStrokeAndFillPath;// Offset=0x28 Size=0x8
    void * pfnStrokePath;// Offset=0x30 Size=0x8
    void * pfnFillPath;// Offset=0x38 Size=0x8
    void * pfnPaint;// Offset=0x40 Size=0x8
    void * pfnBitBlt;// Offset=0x48 Size=0x8
    void * pfnCopyBits;// Offset=0x50 Size=0x8
    void * pfnStretchBlt;// Offset=0x58 Size=0x8
    void * pfnTextOut;// Offset=0x60 Size=0x8
    void * pfnLineTo;// Offset=0x68 Size=0x8
    void * pfnTransparentBlt;// Offset=0x70 Size=0x8
    void * pfnAlphaBlend;// Offset=0x78 Size=0x8
    void * pfnPlgBlt;// Offset=0x80 Size=0x8
    void * pfnGradientFill;// Offset=0x88 Size=0x8
    void * pfnSaveScreenBits;// Offset=0x90 Size=0x8
    void * pfnStretchBltROP;// Offset=0x98 Size=0x8
    void * pfnDrawStream;// Offset=0xa0 Size=0x8
};
