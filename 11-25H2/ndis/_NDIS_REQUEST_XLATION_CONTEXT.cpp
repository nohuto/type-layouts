struct _NDIS_REQUEST_XLATION_CONTEXT// Size=0x40 (Id=872)
{
    unsigned long OldOid;// Offset=0x0 Size=0x4
    void * InfoBuf;// Offset=0x8 Size=0x8
    unsigned int InfoBufLength;// Offset=0x10 Size=0x4
    unsigned long long RcvErrorValue;// Offset=0x18 Size=0x8
    unsigned long long RcvNoBufferValue;// Offset=0x20 Size=0x8
    unsigned long long RcvDiscardsValue;// Offset=0x28 Size=0x8
    unsigned long long XmitErrorValue;// Offset=0x30 Size=0x8
    int Status;// Offset=0x38 Size=0x4
};
