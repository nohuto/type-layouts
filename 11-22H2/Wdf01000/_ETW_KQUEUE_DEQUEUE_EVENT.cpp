struct _ETW_KQUEUE_DEQUEUE_EVENT// Size=0x10 (Id=2008)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    void * Entries[1];// Offset=0x8 Size=0x8
};
