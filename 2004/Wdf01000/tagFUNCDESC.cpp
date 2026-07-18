struct tagFUNCDESC// Size=0x58 (Id=3216)
{
    long memid;// Offset=0x0 Size=0x4
    long * lprgscode;// Offset=0x8 Size=0x8
    struct tagELEMDESC * lprgelemdescParam;// Offset=0x10 Size=0x8
    enum tagFUNCKIND funckind;// Offset=0x18 Size=0x4
    enum tagINVOKEKIND invkind;// Offset=0x1c Size=0x4
    enum tagCALLCONV callconv;// Offset=0x20 Size=0x4
    short cParams;// Offset=0x24 Size=0x2
    short cParamsOpt;// Offset=0x26 Size=0x2
    short oVft;// Offset=0x28 Size=0x2
    short cScodes;// Offset=0x2a Size=0x2
    struct tagELEMDESC elemdescFunc;// Offset=0x30 Size=0x20
    unsigned short wFuncFlags;// Offset=0x50 Size=0x2
};
