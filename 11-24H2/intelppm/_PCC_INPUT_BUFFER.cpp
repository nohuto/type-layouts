struct _unnamed_737// Size=0x3 (Id=737)
{
    unsigned char ReservedZ[3];// Offset=0x0 Size=0x3
};

struct _unnamed_738// Size=0x3 (Id=738)
{
    unsigned char DesiredFrequency;// Offset=0x0 Size=0x1
    unsigned char ReservedZ[2];// Offset=0x1 Size=0x2
};

struct _PCC_INPUT_BUFFER// Size=0x4 (Id=739)
{
    unsigned char ControlEnabled;// Offset=0x0 Size=0x1
    union // Size=0x3 (Id=0)
    {
        struct _unnamed_737 GetAverageFrequency;// Offset=0x1 Size=0x3
        struct _unnamed_738 SetDesiredFrequency;// Offset=0x1 Size=0x3
    };
};
