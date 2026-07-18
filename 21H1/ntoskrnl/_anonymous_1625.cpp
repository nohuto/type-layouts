struct _IO_STATUS_BLOCK// Size=0x10 (Id=416)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

union _anonymous_1625// Size=0x10 (Id=1625)
{
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x0 Size=0x10
};
