struct _List// Size=0x10 (Id=319)
{
    struct _List * plistPrev;// Offset=0x0 Size=0x8
    struct _List * plistNext;// Offset=0x8 Size=0x8
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=166)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _objowner// Size=0x40 (Id=435)
{
    struct _List list;// Offset=0x0 Size=0x10
    unsigned long dwSig;// Offset=0x10 Size=0x4
    struct _NSObj * pnsObjList;// Offset=0x18 Size=0x8
    struct _EX_RUNDOWN_REF OwnerRundown;// Offset=0x20 Size=0x8
    unsigned long long DeviceCountLock;// Offset=0x28 Size=0x8
    long DeviceCount;// Offset=0x30 Size=0x4
    struct _ctxt * CurrentContext;// Offset=0x38 Size=0x8
};
