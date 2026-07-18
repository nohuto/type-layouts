struct _IO_STATUS_BLOCK// Size=0x10 (Id=511)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _NT_IORING_CQE// Size=0x18 (Id=1491)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long UserData;// Offset=0x0 Size=0x8
        unsigned long long PaddingUserDataForWow;// Offset=0x0 Size=0x8
    };
    struct _IO_STATUS_BLOCK IoStatus;// Offset=0x8 Size=0x10
};
