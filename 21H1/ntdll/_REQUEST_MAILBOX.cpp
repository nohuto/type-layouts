struct _KREQUEST_PACKET// Size=0x10 (Id=369)
{
    void * CurrentPacket[3];// Offset=0x0 Size=0xc
    void  ( * WorkerRoutine)(void * ,void * ,void * ,void * );// Offset=0xc Size=0x4
};

struct _REQUEST_MAILBOX// Size=0x20 (Id=352)
{
    struct _REQUEST_MAILBOX * Next;// Offset=0x0 Size=0x4
    unsigned long RequestSummary;// Offset=0x4 Size=0x4
    struct _KREQUEST_PACKET RequestPacket;// Offset=0x8 Size=0x10
    long * NodeTargetCountAddr;// Offset=0x18 Size=0x4
    long NodeTargetCount;// Offset=0x1c Size=0x4
};
