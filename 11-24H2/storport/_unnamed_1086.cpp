struct _unnamed_1085// Size=0x1 (Id=1085)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Link:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flag:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x4
        unsigned char VendorUnique:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

union _unnamed_1086// Size=0x1 (Id=1086)
{
    unsigned char value;// Offset=0x0 Size=0x1
    struct _unnamed_1085 Fields;// Offset=0x0 Size=0x1
};
