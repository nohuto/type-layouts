struct _DESCRIPTION_HEADER// Size=0x24 (Id=521)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char Revision;// Offset=0x8 Size=0x1
    unsigned char Checksum;// Offset=0x9 Size=0x1
    char OEMID[6];// Offset=0xa Size=0x6
    char OEMTableID[8];// Offset=0x10 Size=0x8
    unsigned long OEMRevision;// Offset=0x18 Size=0x4
    char CreatorID[4];// Offset=0x1c Size=0x4
    unsigned long CreatorRev;// Offset=0x20 Size=0x4
};

struct _MAPIC// Size=0x30 (Id=613)
{
    struct _DESCRIPTION_HEADER Header;// Offset=0x0 Size=0x24
    unsigned long LocalAPICAddress;// Offset=0x24 Size=0x4
    unsigned long Flags;// Offset=0x28 Size=0x4
    unsigned long APICTables[1];// Offset=0x2c Size=0x4
};
