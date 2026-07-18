struct _WUDFMESSAGE_REPLY_HEADER// Size=0x4 (Id=935)
{
    long NtStatus;// Offset=0x0 Size=0x4
};

struct _WUDFMESSAGE_IO_REPLY// Size=0x10 (Id=1000)
{
    struct _WUDFMESSAGE_REPLY_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long long Information;// Offset=0x8 Size=0x8
    struct _WUDFMESSAGE_IO_REPLY * FromHeader(struct _WUDFMESSAGE_REPLY_HEADER * );
};
