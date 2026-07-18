struct _unnamed_600// Size=0x3 (Id=600)
{
    unsigned char ReservedZ[3];// Offset=0x0 Size=0x3
};

struct _unnamed_601// Size=0x3 (Id=601)
{
    unsigned char DesiredFrequency;// Offset=0x0 Size=0x1
    unsigned char ReservedZ[2];// Offset=0x1 Size=0x2
};

struct _PCC_INPUT_BUFFER// Size=0x4 (Id=602)
{
    unsigned char ControlEnabled;// Offset=0x0 Size=0x1
    union // Size=0x3 (Id=0)
    {
        struct _unnamed_600 GetAverageFrequency;// Offset=0x1 Size=0x3
        struct _unnamed_601 SetDesiredFrequency;// Offset=0x1 Size=0x3
    };
};
