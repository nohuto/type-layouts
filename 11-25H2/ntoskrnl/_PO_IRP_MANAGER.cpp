struct _PO_IRP_QUEUE// Size=0x10 (Id=2062)
{
    struct _IRP * CurrentIrp;// Offset=0x0 Size=0x8
    struct _IRP * PendingIrpList;// Offset=0x8 Size=0x8
};

struct _PO_IRP_MANAGER// Size=0x20 (Id=1754)
{
    struct _PO_IRP_QUEUE DeviceIrpQueue;// Offset=0x0 Size=0x10
    struct _PO_IRP_QUEUE SystemIrpQueue;// Offset=0x10 Size=0x10
};
