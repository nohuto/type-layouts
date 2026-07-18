struct _WHEA_ACPI_HEADER// Size=0x24 (Id=3314)
{
    unsigned int Signature;// Offset=0x0 Size=0x4
    unsigned int Length;// Offset=0x4 Size=0x4
    unsigned char Revision;// Offset=0x8 Size=0x1
    unsigned char Checksum;// Offset=0x9 Size=0x1
    unsigned char OemId[6];// Offset=0xa Size=0x6
    unsigned long long OemTableId;// Offset=0x10 Size=0x8
    unsigned int OemRevision;// Offset=0x18 Size=0x4
    unsigned int CreatorId;// Offset=0x1c Size=0x4
    unsigned int CreatorRevision;// Offset=0x20 Size=0x4
};

struct _SIGNAL_REG_VALUE// Size=0x2c (Id=3531)
{
    unsigned char RegName[32];// Offset=0x0 Size=0x20
    unsigned int MsrAddr;// Offset=0x20 Size=0x4
    unsigned long long Value;// Offset=0x24 Size=0x8
};

struct _EFI_ACPI_RAS_SIGNAL_TABLE// Size=0x54 (Id=1555)
{
    struct _WHEA_ACPI_HEADER Header;// Offset=0x0 Size=0x24
    unsigned int NumberRecord;// Offset=0x24 Size=0x4
    struct _SIGNAL_REG_VALUE Entries[1];// Offset=0x28 Size=0x2c
};
