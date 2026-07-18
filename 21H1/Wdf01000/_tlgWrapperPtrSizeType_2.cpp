struct _tlgWrapperPtrSizeType// Size=0x10 (Id=994)
{
    union // Size=0x4 (Id=0)
    {
        const unsigned int DataDescCount=1;// Offset=0x0 Size=0x4
        const void * Ptr;// Offset=0x0 Size=0x8
    };
    const unsigned long Size;// Offset=0x8 Size=0x4
    const unsigned long Reserved;// Offset=0xc Size=0x4
    void _tlgWrapperPtrSizeType(void * ,unsigned long ,unsigned long );
    void * Fill(struct _EVENT_DATA_DESCRIPTOR * );
};
