struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_INTERRUPT_TYPE
{
    NDIS_CONNECT_LINE_BASED=1,
    NDIS_CONNECT_MESSAGE_BASED=2
};

struct _NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS// Size=0x60 (Id=619)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char  ( * InterruptHandler)(void * ,unsigned char * ,unsigned long * );// Offset=0x8 Size=0x8
    void  ( * InterruptDpcHandler)(void * ,void * ,void * ,void * );// Offset=0x10 Size=0x8
    void  ( * DisableInterruptHandler)(void * );// Offset=0x18 Size=0x8
    void  ( * EnableInterruptHandler)(void * );// Offset=0x20 Size=0x8
    unsigned char MsiSupported;// Offset=0x28 Size=0x1
    unsigned char MsiSyncWithAllMessages;// Offset=0x29 Size=0x1
    unsigned char  ( * MessageInterruptHandler)(void * ,unsigned long ,unsigned char * ,unsigned long * );// Offset=0x30 Size=0x8
    void  ( * MessageInterruptDpcHandler)(void * ,unsigned long ,void * ,void * ,void * );// Offset=0x38 Size=0x8
    void  ( * DisableMessageInterruptHandler)(void * ,unsigned long );// Offset=0x40 Size=0x8
    void  ( * EnableMessageInterruptHandler)(void * ,unsigned long );// Offset=0x48 Size=0x8
    enum _NDIS_INTERRUPT_TYPE InterruptType;// Offset=0x50 Size=0x4
    struct _IO_INTERRUPT_MESSAGE_INFO * MessageInfoTable;// Offset=0x58 Size=0x8
};
