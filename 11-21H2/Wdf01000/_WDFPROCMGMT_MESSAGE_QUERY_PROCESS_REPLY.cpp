struct _WUDFMESSAGE_REPLY_HEADER// Size=0x4 (Id=3605)
{
    long NtStatus;// Offset=0x0 Size=0x4
};

struct _WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY// Size=0xc (Id=3674)
{
    struct _WUDFMESSAGE_REPLY_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long ProcessTimeout;// Offset=0x4 Size=0x4
    unsigned long DebugModeFlags;// Offset=0x8 Size=0x4
    struct _WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY * FromHeader(struct _WUDFMESSAGE_REPLY_HEADER * );
};
