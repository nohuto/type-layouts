struct _OBJECT_REF_INFO// Size=0x28 (Id=1284)
{
    struct _OBJECT_HEADER * ObjectHeader;// Offset=0x0 Size=0x8
    void * NextRef;// Offset=0x8 Size=0x8
    unsigned char ImageFileName[16];// Offset=0x10 Size=0x10
    unsigned long NextPos;// Offset=0x20 Size=0x4
    unsigned long MaxStacks;// Offset=0x24 Size=0x4
    struct _OBJECT_REF_STACK_INFO StackInfo[0];
};
