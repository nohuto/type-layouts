struct _unnamed_663// Size=0x3 (Id=663)
{
    unsigned char ReservedZ[3];// Offset=0x0 Size=0x3
};

struct _unnamed_664// Size=0x3 (Id=664)
{
    unsigned char DesiredFrequency;// Offset=0x0 Size=0x1
    unsigned char ReservedZ[2];// Offset=0x1 Size=0x2
};

struct _PCC_INPUT_BUFFER// Size=0x4 (Id=665)
{
    unsigned char ControlEnabled;// Offset=0x0 Size=0x1
    union // Size=0x3 (Id=0)
    {
        struct _unnamed_663 GetAverageFrequency;// Offset=0x1 Size=0x3
        struct _unnamed_664 SetDesiredFrequency;// Offset=0x1 Size=0x3
    };
};
