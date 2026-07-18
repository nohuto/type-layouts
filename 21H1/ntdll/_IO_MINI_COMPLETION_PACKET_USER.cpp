struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _IO_MINI_COMPLETION_PACKET_USER// Size=0x28 (Id=651)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x8
    unsigned long PacketType;// Offset=0x8 Size=0x4
    void * KeyContext;// Offset=0xc Size=0x4
    void * ApcContext;// Offset=0x10 Size=0x4
    long IoStatus;// Offset=0x14 Size=0x4
    unsigned long IoStatusInformation;// Offset=0x18 Size=0x4
    void  ( * MiniPacketCallback)(struct _IO_MINI_COMPLETION_PACKET_USER * ,void * );// Offset=0x1c Size=0x4
    void * Context;// Offset=0x20 Size=0x4
    unsigned char Allocated;// Offset=0x24 Size=0x1
};
