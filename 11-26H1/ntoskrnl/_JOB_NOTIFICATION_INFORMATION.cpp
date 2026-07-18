struct _PSP_JOB_LIMIT_VALUES// Size=0x40 (Id=1526)
{
    unsigned long long IoReadBytes;// Offset=0x0 Size=0x8
    unsigned long long IoWriteBytes;// Offset=0x8 Size=0x8
    unsigned long long JobUserTime;// Offset=0x10 Size=0x8
    unsigned long long JobMemoryLow;// Offset=0x18 Size=0x8
    unsigned long long JobMemoryHigh;// Offset=0x20 Size=0x8
    unsigned long RateControlTolerances[3];// Offset=0x28 Size=0xc
    unsigned long RateControlToleranceIntervals[3];// Offset=0x34 Size=0xc
};

struct _JOB_NOTIFICATION_INFORMATION// Size=0x88 (Id=1183)
{
    unsigned long LimitFlags;// Offset=0x0 Size=0x4
    unsigned long ViolationFlags;// Offset=0x4 Size=0x4
    struct _PSP_JOB_LIMIT_VALUES Limits;// Offset=0x8 Size=0x40
    struct _PSP_JOB_LIMIT_VALUES Violations;// Offset=0x48 Size=0x40
};
