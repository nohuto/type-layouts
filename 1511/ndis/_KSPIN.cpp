struct _KSPIN// Size=0x88 (Id=360)
{
    struct _KSPIN_DESCRIPTOR_EX * Descriptor;// Offset=0x0 Size=0x8
    void * Bag;// Offset=0x8 Size=0x8
    void * Context;// Offset=0x10 Size=0x8
    unsigned long Id;// Offset=0x18 Size=0x4
    enum KSPIN_COMMUNICATION Communication;// Offset=0x1c Size=0x4
    unsigned char ConnectionIsExternal;// Offset=0x20 Size=0x1
    struct KSIDENTIFIER ConnectionInterface;// Offset=0x28 Size=0x18
    struct KSIDENTIFIER ConnectionMedium;// Offset=0x40 Size=0x18
    struct KSPRIORITY ConnectionPriority;// Offset=0x58 Size=0x8
    union KSDATAFORMAT * ConnectionFormat;// Offset=0x60 Size=0x8
    struct KSMULTIPLE_ITEM * AttributeList;// Offset=0x68 Size=0x8
    unsigned long StreamHeaderSize;// Offset=0x70 Size=0x4
    enum KSPIN_DATAFLOW DataFlow;// Offset=0x74 Size=0x4
    enum KSSTATE DeviceState;// Offset=0x78 Size=0x4
    enum KSRESET ResetState;// Offset=0x7c Size=0x4
    enum KSSTATE ClientState;// Offset=0x80 Size=0x4
};
