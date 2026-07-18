struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

union _NDIS_COMMON_OPEN_BLOCK::_unnamed_751// Size=0x8 (Id=751)
{
    union // Size=0x8 (Id=0)
    {
        void * MacHandle;// Offset=0x0 Size=0x8
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    };
};
