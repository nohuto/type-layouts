struct _PORT_CHANGE_LOG_ENTRY// Size=0x20 (Id=301)
{
    unsigned long CurrentState;// Offset=0x0 Size=0x4
    unsigned long Change;// Offset=0x4 Size=0x4
    void * Pdo;// Offset=0x8 Size=0x8
    unsigned short HwPortStatus;// Offset=0x10 Size=0x2
    unsigned char PortStatusBits;// Offset=0x12 Size=0x1
    unsigned char FlushFlag;// Offset=0x13 Size=0x1
    unsigned long UsbTimeIdx;// Offset=0x14 Size=0x4
    unsigned long FrameAge;// Offset=0x18 Size=0x4
    unsigned long ValidEntry;// Offset=0x1c Size=0x4
};
