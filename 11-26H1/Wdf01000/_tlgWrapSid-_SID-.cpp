struct _tlgWrapSid<_SID>// Size=0x8 (Id=4182)
{
    union // Size=0x4 (Id=0)
    {
        const unsigned int DataDescCount=1;// Offset=0x0 Size=0x4
        const struct _SID * Sid;// Offset=0x0 Size=0x8
    };
    void _tlgWrapSid<_SID>(struct _SID * );
    void * Fill(struct _EVENT_DATA_DESCRIPTOR * );
};
