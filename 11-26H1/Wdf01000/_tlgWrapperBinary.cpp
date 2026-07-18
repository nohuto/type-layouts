struct _tlgWrapperBinary// Size=0x10 (Id=2878)
{
    union // Size=0x4 (Id=0)
    {
        const unsigned int DataDescCount=2;// Offset=0x0 Size=0x4
        const void * Ptr;// Offset=0x0 Size=0x8
    };
    const unsigned short Size;// Offset=0x8 Size=0x2
    void _tlgWrapperBinary(void * ,unsigned short );
    void * Fill(struct _EVENT_DATA_DESCRIPTOR * );
};
