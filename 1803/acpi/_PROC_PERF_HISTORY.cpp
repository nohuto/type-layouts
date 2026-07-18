struct _PROC_PERF_HISTORY_ENTRY// Size=0x8 (Id=529)
{
    unsigned short Utility;// Offset=0x0 Size=0x2
    unsigned short AffinitizedUtility;// Offset=0x2 Size=0x2
    unsigned char Frequency;// Offset=0x4 Size=0x1
    unsigned char TaggedPercent[2];// Offset=0x5 Size=0x2
};

struct _PROC_PERF_HISTORY// Size=0x24 (Id=482)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long Slot;// Offset=0x4 Size=0x4
    unsigned long UtilityTotal;// Offset=0x8 Size=0x4
    unsigned long AffinitizedUtilityTotal;// Offset=0xc Size=0x4
    unsigned long FrequencyTotal;// Offset=0x10 Size=0x4
    unsigned long TaggedPercentTotal[2];// Offset=0x14 Size=0x8
    struct _PROC_PERF_HISTORY_ENTRY HistoryList[1];// Offset=0x1c Size=0x8
};
