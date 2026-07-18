struct ACPI_LPI// Size=0x68 (Id=649)
{
    unsigned long Revision;// Offset=0x0 Size=0x4
    unsigned long long LevelId;// Offset=0x8 Size=0x8
    unsigned long Count;// Offset=0x10 Size=0x4
    struct ACPI_LPI_STATE State[1];// Offset=0x18 Size=0x50
};
