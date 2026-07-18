struct _BASEOBJECT// Size=0x18 (Id=565)
{
    void * hHmgr;// Offset=0x0 Size=0x8
    unsigned long ulShareCount;// Offset=0x8 Size=0x4
    unsigned short cExclusiveLock;// Offset=0xc Size=0x2
    unsigned short BaseFlags;// Offset=0xe Size=0x2
    struct _W32THREAD * Tid;// Offset=0x10 Size=0x8
};
