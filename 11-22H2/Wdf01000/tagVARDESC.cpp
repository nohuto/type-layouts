struct tagVARDESC// Size=0x40 (Id=3667)
{
    long memid;// Offset=0x0 Size=0x4
    wchar_t * lpstrSchema;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long oInst;// Offset=0x10 Size=0x4
        struct tagVARIANT * lpvarValue;// Offset=0x10 Size=0x8
    };
    struct tagELEMDESC elemdescVar;// Offset=0x18 Size=0x20
    unsigned short wVarFlags;// Offset=0x38 Size=0x2
    enum tagVARKIND varkind;// Offset=0x3c Size=0x4
};
