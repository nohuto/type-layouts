struct _unnamed_292// Size=0x1 (Id=292)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

union _unnamed_293// Size=0x1 (Id=293)
{
    unsigned char value;// Offset=0x0 Size=0x1
    struct _unnamed_292 Fields;// Offset=0x0 Size=0x1
};

struct _SPACE_TAPE_MARKS// Size=0x6 (Id=294)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Code:3;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Reserved:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char NumMarksMSB;// Offset=0x2 Size=0x1
    unsigned char NumMarks;// Offset=0x3 Size=0x1
    unsigned char NumMarksLSB;// Offset=0x4 Size=0x1
    union _unnamed_293 Byte6;// Offset=0x5 Size=0x1
};
