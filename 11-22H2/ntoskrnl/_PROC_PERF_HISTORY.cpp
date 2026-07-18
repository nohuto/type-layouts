struct _PROC_PERF_HISTORY_ENTRY// Size=0xc (Id=1985)
{
    unsigned short Utility;// Offset=0x0 Size=0x2
    unsigned short AffinitizedUtility;// Offset=0x2 Size=0x2
    unsigned short Frequency;// Offset=0x4 Size=0x2
    unsigned char ImportantPercent;// Offset=0x6 Size=0x1
    unsigned char IdealPercent;// Offset=0x7 Size=0x1
    unsigned char TaggedPercent[4];// Offset=0x8 Size=0x4
};

struct _PROC_PERF_HISTORY// Size=0x38 (Id=1870)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Slot;// Offset=0x4 Size=0x4
    unsigned long UtilityTotal;// Offset=0x8 Size=0x4
    unsigned long AffinitizedUtilityTotal;// Offset=0xc Size=0x4
    unsigned long FrequencyTotal;// Offset=0x10 Size=0x4
    unsigned long ImportantPercentTotal;// Offset=0x14 Size=0x4
    unsigned long IdealPercentTotal;// Offset=0x18 Size=0x4
    unsigned long TaggedPercentTotal[4];// Offset=0x1c Size=0x10
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];// Offset=0x2c Size=0xc
};
