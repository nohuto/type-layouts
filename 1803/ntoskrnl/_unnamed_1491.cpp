struct _IO_STATUS_BLOCK// Size=0x10 (Id=81)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

union _unnamed_1491// Size=0x10 (Id=1491)
{
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x0 Size=0x10
};
