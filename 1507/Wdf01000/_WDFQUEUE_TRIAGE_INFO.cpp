struct _WDFQUEUE_TRIAGE_INFO// Size=0x1c (Id=1962)
{
    unsigned long QueueSize;// Offset=0x0 Size=0x4
    unsigned long IrpQueue1;// Offset=0x4 Size=0x4
    unsigned long IrpQueue2;// Offset=0x8 Size=0x4
    unsigned long RequestList1;// Offset=0xc Size=0x4
    unsigned long RequestList2;// Offset=0x10 Size=0x4
    unsigned long FwdProgressContext;// Offset=0x14 Size=0x4
    unsigned long PkgIo;// Offset=0x18 Size=0x4
};
