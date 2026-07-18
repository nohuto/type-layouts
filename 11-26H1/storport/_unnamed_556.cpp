struct _unnamed_556// Size=0x10 (Id=556)
{
    unsigned short FState;// Offset=0x0 Size=0x2
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char FStateTransition:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DStateTransition:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Reserved0:6;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
        unsigned char AsUchar;// Offset=0x2 Size=0x1
    };
    unsigned char Reserved1[5];// Offset=0x3 Size=0x5
    struct _IRP * PowerIrp;// Offset=0x8 Size=0x8
};
