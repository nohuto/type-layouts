struct _UNICODE_STRING// Size=0x10 (Id=183)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

union _NDIS_MINIPORT_BLOCK::_unnamed_1308// Size=0x10 (Id=1308)
{
    struct _UNICODE_STRING Reserved4;// Offset=0x0 Size=0x10
    unsigned char MajorNdisVersion;// Offset=0x0 Size=0x1
    unsigned char MinorNdisVersion;// Offset=0x1 Size=0x1
    struct _NDIS_PCW_DATA_BLOCK * PcwDataBlock;// Offset=0x8 Size=0x8
};
