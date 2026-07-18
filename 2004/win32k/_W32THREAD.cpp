struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

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

struct _W32THREAD// Size=0xd8 (Id=134)
{
    struct _ETHREAD * pEThread;// Offset=0x0 Size=0x4
    unsigned long RefCount;// Offset=0x4 Size=0x4
    struct _TL * ptlW32;// Offset=0x8 Size=0x4
    void * pgdiDcattr;// Offset=0xc Size=0x4
    void * pgdiBrushAttr;// Offset=0x10 Size=0x4
    struct _LIST_ENTRY UMPDOBJList;// Offset=0x14 Size=0x8
    void * pUMPDHeap;// Offset=0x1c Size=0x4
    void * pProxyPort;// Offset=0x20 Size=0x4
    void * pClientID;// Offset=0x24 Size=0x4
    void * DxThread;// Offset=0x28 Size=0x4
    struct _LIST_ENTRY GdiTmpTgoList;// Offset=0x2c Size=0x8
    unsigned long pRBRecursionCount;// Offset=0x34 Size=0x4
    unsigned long pNonRBRecursionCount;// Offset=0x38 Size=0x4
    struct _TLSPRITESTATE tlSpriteState;// Offset=0x3c Size=0x60
    void * pSpriteState;// Offset=0x9c Size=0x4
    void * pDevHTInfo;// Offset=0xa0 Size=0x4
    unsigned long ulDevHTInfoUniqueness;// Offset=0xa4 Size=0x4
    void * pdcoAA;// Offset=0xa8 Size=0x4
    void * pdcoRender;// Offset=0xac Size=0x4
    void * pdcoSrc;// Offset=0xb0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        int bEnableEngUpdateDeviceSurface:1;// Offset=0xb4 Size=0x4 BitOffset=0x0 BitSize=0x1
        int bIncludeSprites:1;// Offset=0xb4 Size=0x4 BitOffset=0x1 BitSize=0x1
        int bPerMonAwareVirtualized:1;// Offset=0xb4 Size=0x4 BitOffset=0x2 BitSize=0x1
        int bEnableAppContainerRendering:1;// Offset=0xb4 Size=0x4 BitOffset=0x3 BitSize=0x1
        int bSnapWindowScreenAccess:1;// Offset=0xb4 Size=0x4 BitOffset=0x4 BitSize=0x1
        int bGdiEngMode:1;// Offset=0xb4 Size=0x4 BitOffset=0x5 BitSize=0x1
    };
    unsigned long ulWindowSystemRendering;// Offset=0xb8 Size=0x4
    unsigned long iVisRgnUniqueness;// Offset=0xbc Size=0x4
    unsigned long dpiContext;// Offset=0xc0 Size=0x4
    enum DPI_HOSTING_BEHAVIOR dpiHostingBehavior;// Offset=0xc4 Size=0x4
    void * pUmfdTls;// Offset=0xc8 Size=0x4
    struct tagDPICONTEXTINFO * pdci;// Offset=0xcc Size=0x4
    struct tagDPIHOSTINGBEHAVIORINFO * pdhbi;// Offset=0xd0 Size=0x4
    unsigned long ulDCompQuotaGuardCount;// Offset=0xd4 Size=0x4
};
