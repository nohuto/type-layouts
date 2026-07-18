struct tagSAFEARRAY// Size=0x20 (Id=3758)
{
    unsigned short cDims;// Offset=0x0 Size=0x2
    unsigned short fFeatures;// Offset=0x2 Size=0x2
    unsigned long cbElements;// Offset=0x4 Size=0x4
    unsigned long cLocks;// Offset=0x8 Size=0x4
    void * pvData;// Offset=0x10 Size=0x8
    struct tagSAFEARRAYBOUND rgsabound[1];// Offset=0x18 Size=0x8
};
