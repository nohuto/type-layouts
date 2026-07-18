union _DL_OUI// Size=0x3 (Id=194)
{
    union // Size=0x3 (Id=0)
    {
        unsigned char Byte[3];// Offset=0x0 Size=0x3
        struct // Size=0x1 (Id=0)
        {
            unsigned char Group:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Local:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
};

union _DL_EI48// Size=0x3 (Id=1488)
{
    unsigned char Byte[3];// Offset=0x0 Size=0x3
};

struct _DL_EUI48::_unnamed_1726// Size=0x6 (Id=1726)
{
    union _DL_OUI Oui;// Offset=0x0 Size=0x3
    union _DL_EI48 Ei48;// Offset=0x3 Size=0x3
};
