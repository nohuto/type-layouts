struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_INTERRUPT_MODERATION
{
    NdisInterruptModerationUnknown=0,
    NdisInterruptModerationNotSupported=1,
    NdisInterruptModerationEnabled=2,
    NdisInterruptModerationDisabled=3
};

struct _NDIS_INTERRUPT_MODERATION_PARAMETERS// Size=0xc (Id=1760)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_INTERRUPT_MODERATION InterruptModeration;// Offset=0x8 Size=0x4
};
