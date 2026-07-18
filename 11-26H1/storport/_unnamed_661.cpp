union _unnamed_661// Size=0x4 (Id=661)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PrivilegeTransitionInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PrivilegeStateError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AdminPrivilegeRefCountError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PrivilegeTransitionConflict:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long InAdminPrivilegeWithoutRefCount:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InUserPrivilegeWithNonZeroRefCount:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
