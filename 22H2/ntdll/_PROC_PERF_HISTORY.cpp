struct _PROC_PERF_HISTORY_ENTRY// Size=0xa (Id=655)
{
    unsigned short Utility;// Offset=0x0 Size=0x2
    unsigned short AffinitizedUtility;// Offset=0x2 Size=0x2
    unsigned short Frequency;// Offset=0x4 Size=0x2
    unsigned char TaggedPercent[3];// Offset=0x6 Size=0x3
};

struct _PROC_PERF_HISTORY// Size=0x2c (Id=612)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Slot;// Offset=0x4 Size=0x4
    unsigned long UtilityTotal;// Offset=0x8 Size=0x4
    unsigned long AffinitizedUtilityTotal;// Offset=0xc Size=0x4
    unsigned long FrequencyTotal;// Offset=0x10 Size=0x4
    unsigned long TaggedPercentTotal[3];// Offset=0x14 Size=0xc
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];// Offset=0x20 Size=0xa
};
