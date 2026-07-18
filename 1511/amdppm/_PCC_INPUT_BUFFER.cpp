struct _unnamed_572// Size=0x3 (Id=572)
{
    unsigned char ReservedZ[3];// Offset=0x0 Size=0x3
};

struct _unnamed_573// Size=0x3 (Id=573)
{
    unsigned char DesiredFrequency;// Offset=0x0 Size=0x1
    unsigned char ReservedZ[2];// Offset=0x1 Size=0x2
};

struct _PCC_INPUT_BUFFER// Size=0x4 (Id=574)
{
    unsigned char ControlEnabled;// Offset=0x0 Size=0x1
    union // Size=0x3 (Id=0)
    {
        struct _unnamed_572 GetAverageFrequency;// Offset=0x1 Size=0x3
        struct _unnamed_573 SetDesiredFrequency;// Offset=0x1 Size=0x3
    };
};
