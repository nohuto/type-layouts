struct _GET_EVENT_STATUS_NOTIFICATION// Size=0xa (Id=467)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Immediate:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x4
        unsigned char Lun:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Reserved2[2];// Offset=0x2 Size=0x2
    unsigned char NotificationClassRequest;// Offset=0x4 Size=0x1
    unsigned char Reserved3[2];// Offset=0x5 Size=0x2
    unsigned char EventListLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
