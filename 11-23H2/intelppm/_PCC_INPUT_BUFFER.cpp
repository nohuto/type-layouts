struct _unnamed_713// Size=0x3 (Id=713)
{
    unsigned char ReservedZ[3];// Offset=0x0 Size=0x3
};

struct _unnamed_714// Size=0x3 (Id=714)
{
    unsigned char DesiredFrequency;// Offset=0x0 Size=0x1
    unsigned char ReservedZ[2];// Offset=0x1 Size=0x2
};

struct _PCC_INPUT_BUFFER// Size=0x4 (Id=715)
{
    unsigned char ControlEnabled;// Offset=0x0 Size=0x1
    union // Size=0x3 (Id=0)
    {
        struct _unnamed_713 GetAverageFrequency;// Offset=0x1 Size=0x3
        struct _unnamed_714 SetDesiredFrequency;// Offset=0x1 Size=0x3
    };
};
