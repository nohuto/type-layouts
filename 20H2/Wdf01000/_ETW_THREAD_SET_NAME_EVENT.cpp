struct _ETW_THREAD_SET_NAME_EVENT// Size=0xc (Id=2522)
{
    unsigned long ProcessId;// Offset=0x0 Size=0x4
    unsigned long ThreadId;// Offset=0x4 Size=0x4
    wchar_t ThreadName[1];// Offset=0x8 Size=0x2
};
