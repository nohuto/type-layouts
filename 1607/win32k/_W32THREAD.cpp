struct _LIST_ENTRY// Size=0x10 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _TLSPRITESTATE// Size=0xa8 (Id=268)
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

struct _W32THREAD// Size=0x178 (Id=125)
{
    struct _ETHREAD * pEThread;// Offset=0x0 Size=0x8
    unsigned long RefCount;// Offset=0x8 Size=0x4
    struct _TL * ptlW32;// Offset=0x10 Size=0x8
    void * pgdiDcattr;// Offset=0x18 Size=0x8
    void * pgdiBrushAttr;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY UMPDOBJList;// Offset=0x28 Size=0x10
    void * pUMPDHeap;// Offset=0x38 Size=0x8
    void * pProxyPort;// Offset=0x40 Size=0x8
    void * pClientID;// Offset=0x48 Size=0x8
    void * DxThread;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY GdiTmpTgoList;// Offset=0x58 Size=0x10
    unsigned long pRBRecursionCount;// Offset=0x68 Size=0x4
    unsigned long pNonRBRecursionCount;// Offset=0x6c Size=0x4
    struct _TLSPRITESTATE tlSpriteState;// Offset=0x70 Size=0xa8
    void * pSpriteState;// Offset=0x118 Size=0x8
    void * pDevHTInfo;// Offset=0x120 Size=0x8
    unsigned long ulDevHTInfoUniqueness;// Offset=0x128 Size=0x4
    void * pdcoAA;// Offset=0x130 Size=0x8
    void * pdcoRender;// Offset=0x138 Size=0x8
    void * pdcoSrc;// Offset=0x140 Size=0x8
    unsigned char bEnableEngUpdateDeviceSurface;// Offset=0x148 Size=0x1
    unsigned char bIncludeSprites;// Offset=0x149 Size=0x1
    unsigned char bEnableAppContainerRendering;// Offset=0x14a Size=0x1
    unsigned char bGdiEngMode;// Offset=0x14b Size=0x1
    unsigned long ulWindowSystemRendering;// Offset=0x14c Size=0x4
    unsigned long iVisRgnUniqueness;// Offset=0x150 Size=0x4
    unsigned long dpiContext;// Offset=0x154 Size=0x4
    void * pUmfdTls;// Offset=0x158 Size=0x8
    struct tagDPICONTEXTINFO * pdci;// Offset=0x160 Size=0x8
    void * psoUMPDTmpSrc;// Offset=0x168 Size=0x8
    void * pThreadRestrictNewHandlesRegion;// Offset=0x170 Size=0x8
};
