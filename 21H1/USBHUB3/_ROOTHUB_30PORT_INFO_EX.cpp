enum _TRISTATE
{
    TriStateUnknown=117,
    TriStateFalse=102,
    TriStateTrue=116
};

struct _ROOTHUB_30PORT_INFO_EX// Size=0x18 (Id=735)
{
    unsigned short PortNumber;// Offset=0x0 Size=0x2
    unsigned char MinorRevision;// Offset=0x2 Size=0x1
    unsigned char HubDepth;// Offset=0x3 Size=0x1
    enum _TRISTATE Removable;// Offset=0x4 Size=0x4
    enum _TRISTATE DebugCapable;// Offset=0x8 Size=0x4
    unsigned short MaxSpeedsCount;// Offset=0xc Size=0x2
    unsigned short SpeedsCount;// Offset=0xe Size=0x2
    union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED * Speeds;// Offset=0x10 Size=0x8
};
