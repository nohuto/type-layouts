struct _WUDFMESSAGE_REPLY_HEADER// Size=0x4 (Id=3252)
{
    long NtStatus;// Offset=0x0 Size=0x4
};

struct _WDFPROCMGMT_MESSAGE_OPEN_PROCESS_REPLY// Size=0x10 (Id=3257)
{
    struct _WUDFMESSAGE_REPLY_HEADER Header;// Offset=0x0 Size=0x4
    void * ProcessHandle;// Offset=0x8 Size=0x8
    struct _WDFPROCMGMT_MESSAGE_OPEN_PROCESS_REPLY * FromHeader(struct _WUDFMESSAGE_REPLY_HEADER * );
};
