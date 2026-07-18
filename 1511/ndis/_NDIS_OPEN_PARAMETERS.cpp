struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_OPEN_PARAMETERS// Size=0x38 (Id=1303)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * AdapterName;// Offset=0x8 Size=0x8
    enum _NDIS_MEDIUM * MediumArray;// Offset=0x10 Size=0x8
    unsigned int MediumArraySize;// Offset=0x18 Size=0x4
    unsigned int * SelectedMediumIndex;// Offset=0x20 Size=0x8
    unsigned short * FrameTypeArray;// Offset=0x28 Size=0x8
    unsigned int FrameTypeArraySize;// Offset=0x30 Size=0x4
};
