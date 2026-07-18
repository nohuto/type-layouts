struct _NDIS_WOL_XLATION_CONTEXT// Size=0x20 (Id=1366)
{
    unsigned long OriginalOid;// Offset=0x0 Size=0x4
    void * InformationBuffer;// Offset=0x8 Size=0x8
    unsigned long InformationBufferLength;// Offset=0x10 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct _NDIS_PM_WOL_PATTERN * WolPattern;// Offset=0x18 Size=0x8
        struct _NDIS_PM_PACKET_PATTERN * PacketPattern;// Offset=0x18 Size=0x8
        unsigned long PatternToRemove;// Offset=0x18 Size=0x4
    };
};
