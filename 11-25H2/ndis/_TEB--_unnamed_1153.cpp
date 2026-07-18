union _TEB::_unnamed_1153// Size=0x2 (Id=1153)
{
    unsigned short SameTebFlags;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SafeThunkCall:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short InDebugPrint:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short HasFiberData:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short SkipThreadAttach:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short WerInShipAssertCode:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short RanProcessInit:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short ClonedThread:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short SuppressDebugMsg:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DisableUserStackWalk:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short RtlExceptionAttached:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short InitialThread:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short SessionAware:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short LoadOwner:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short LoaderWorker:1;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x1
        unsigned short SkipLoaderInit:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short SkipFileAPIBrokering:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};
