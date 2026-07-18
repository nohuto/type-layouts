struct _TLSPRITESTATE// Size=0x60 (Id=315)
{
    unsigned char bInsideDriverCall;// Offset=0x0 Size=0x1
    unsigned long flOriginalSurfFlags;// Offset=0x4 Size=0x4
    unsigned long iOriginalType;// Offset=0x8 Size=0x4
    unsigned long flSpriteSurfFlags;// Offset=0xc Size=0x4
    unsigned long iSpriteType;// Offset=0x10 Size=0x4
    unsigned long flags;// Offset=0x14 Size=0x4
    unsigned long iType;// Offset=0x18 Size=0x4
    void * pState;// Offset=0x1c Size=0x4
    void * pfnStrokeAndFillPath;// Offset=0x20 Size=0x4
    void * pfnStrokePath;// Offset=0x24 Size=0x4
    void * pfnFillPath;// Offset=0x28 Size=0x4
    void * pfnPaint;// Offset=0x2c Size=0x4
    void * pfnBitBlt;// Offset=0x30 Size=0x4
    void * pfnCopyBits;// Offset=0x34 Size=0x4
    void * pfnStretchBlt;// Offset=0x38 Size=0x4
    void * pfnTextOut;// Offset=0x3c Size=0x4
    void * pfnLineTo;// Offset=0x40 Size=0x4
    void * pfnTransparentBlt;// Offset=0x44 Size=0x4
    void * pfnAlphaBlend;// Offset=0x48 Size=0x4
    void * pfnPlgBlt;// Offset=0x4c Size=0x4
    void * pfnGradientFill;// Offset=0x50 Size=0x4
    void * pfnSaveScreenBits;// Offset=0x54 Size=0x4
    void * pfnStretchBltROP;// Offset=0x58 Size=0x4
    void * pfnDrawStream;// Offset=0x5c Size=0x4
};
