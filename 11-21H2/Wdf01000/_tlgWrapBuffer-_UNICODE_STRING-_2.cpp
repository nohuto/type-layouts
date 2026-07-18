struct _tlgWrapBuffer<_UNICODE_STRING>// Size=0x8 (Id=3512)
{
    union // Size=0x4 (Id=0)
    {
        const unsigned int DataDescCount=2;// Offset=0x0 Size=0x4
        const struct _UNICODE_STRING * Ptr;// Offset=0x0 Size=0x8
    };
    void _tlgWrapBuffer<_UNICODE_STRING>(struct _UNICODE_STRING * );
    void * Fill(struct _EVENT_DATA_DESCRIPTOR * );
};
