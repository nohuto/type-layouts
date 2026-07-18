struct _PMD// Size=0xc (Id=3157)
{
    int mdisp;// Offset=0x0 Size=0x4
    int pdisp;// Offset=0x4 Size=0x4
    int vdisp;// Offset=0x8 Size=0x4
};

struct _s__CatchableType// Size=0x24 (Id=3047)
{
    unsigned int properties;// Offset=0x0 Size=0x4
    struct _TypeDescriptor * pType;// Offset=0x4 Size=0x8
    struct _PMD thisDisplacement;// Offset=0xc Size=0xc
    int sizeOrOffset;// Offset=0x18 Size=0x4
    void  ( * copyFunction)(void * );// Offset=0x1c Size=0x8
};
