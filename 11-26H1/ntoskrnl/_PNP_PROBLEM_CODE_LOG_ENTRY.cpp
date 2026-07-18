struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _PNP_PROBLEM_CODE_LOG_OPERATION
{
    ProblemCodeOpInvalid=0,
    ProblemCodeOpSet=1,
    ProblemCodeOpClear=2,
    ProblemCodeOpMax=3
};

struct _PNP_PROBLEM_CODE_LOG_ENTRY// Size=0x18 (Id=1977)
{
    union _LARGE_INTEGER Timestamp;// Offset=0x0 Size=0x8
    enum _PNP_PROBLEM_CODE_LOG_OPERATION Operation;// Offset=0x8 Size=0x4
    unsigned long ProblemCode;// Offset=0xc Size=0x4
    long ProblemStatus;// Offset=0x10 Size=0x4
};
