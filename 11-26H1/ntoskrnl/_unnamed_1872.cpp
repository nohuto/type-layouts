struct _unnamed_1872// Size=0x4 (Id=1872)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InvalidVa:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long NoPhase0Ptes:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NoPageLock:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ImagePageNotValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FreezeIoFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FreezeIoNoAttribute:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PteBusy:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ImageWriteNotFrozen:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PrivilegedWriteNotFrozen:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long NoPrivilegedPageLock:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long ModifiedNoPageLock:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ModifiedPageDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long ModifiedPageFileOnly:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ModifiedPageNoSlots:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long ModifiedPageNoRefCount:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long ImageNoPatches:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long CopyPrivilegedFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long LiveAddressNotKernel:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
    };
};
