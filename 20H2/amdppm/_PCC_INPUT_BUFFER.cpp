struct _anonymous_701// Size=0x3 (Id=701)
{
    unsigned char ReservedZ[3];// Offset=0x0 Size=0x3
};

struct _anonymous_702// Size=0x3 (Id=702)
{
    unsigned char DesiredFrequency;// Offset=0x0 Size=0x1
    unsigned char ReservedZ[2];// Offset=0x1 Size=0x2
};

struct _PCC_INPUT_BUFFER// Size=0x4 (Id=703)
{
    unsigned char ControlEnabled;// Offset=0x0 Size=0x1
    union // Size=0x3 (Id=0)
    {
        struct _anonymous_701 GetAverageFrequency;// Offset=0x1 Size=0x3
        struct _anonymous_702 SetDesiredFrequency;// Offset=0x1 Size=0x3
    };
};
