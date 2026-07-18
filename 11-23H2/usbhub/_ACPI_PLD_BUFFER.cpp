struct _ACPI_PLD_BUFFER// Size=0x10 (Id=175)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned int Revision:7;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x7
        unsigned int IgnoreColor:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int Color:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
        unsigned int Width:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned int Height:16;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned int UserVisible:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Dock:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int Lid:1;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int Panel:3;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x3
        unsigned int VerticalPosition:2;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned int HorizontalPosition:2;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned int Shape:4;// Offset=0x8 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned int GroupOrientation:1;// Offset=0x8 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned int GroupToken:8;// Offset=0x8 Size=0x4 BitOffset=0xf BitSize=0x8
        unsigned int GroupPosition:8;// Offset=0x8 Size=0x4 BitOffset=0x17 BitSize=0x8
        unsigned int Bay:1;// Offset=0x8 Size=0x4 BitOffset=0x1f BitSize=0x1
        unsigned int Ejectable:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int EjectionRequired:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int CabinetNumber:8;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x8
        unsigned int CardCageNumber:8;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x8
        unsigned int Reserved:14;// Offset=0xc Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};
