struct _IPT_TRACE_EVENT_DATA// Size=0x28 (Id=2546)
{
    unsigned long long TimeStamp;// Offset=0x0 Size=0x8
    unsigned long ProcessId;// Offset=0x8 Size=0x4
    unsigned long ThreadId;// Offset=0xc Size=0x4
    unsigned long long IptOption;// Offset=0x10 Size=0x8
    unsigned long IptTraceSize;// Offset=0x18 Size=0x4
    unsigned long IptTraceStopOffset;// Offset=0x1c Size=0x4
    unsigned char IptTrace[1];// Offset=0x20 Size=0x1
};
