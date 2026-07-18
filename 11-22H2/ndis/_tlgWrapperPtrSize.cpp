struct _tlgWrapperPtrSize// Size=0x10 (Id=283)
{
    union // Size=0x4 (Id=0)
    {
        const unsigned int DataDescCount;// Offset=0x0 Size=0x4
        const void * Ptr;// Offset=0x0 Size=0x8
    };
    const unsigned long Size;// Offset=0x8 Size=0x4
    void _tlgWrapperPtrSize(void * ,unsigned long );
    void * Fill(struct _EVENT_DATA_DESCRIPTOR * );
};
