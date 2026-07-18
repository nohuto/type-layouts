struct _MI_LARGEPAGE_VAD_INFO// Size=0x28 (Id=2326)
{
    unsigned char LargeImageBias;// Offset=0x0 Size=0x1
    unsigned char Spare[3];// Offset=0x1 Size=0x3
    unsigned long long ActualImageViewSize;// Offset=0x8 Size=0x8
    unsigned long long CommittedPages;// Offset=0x10 Size=0x8
    struct _EPROCESS * OwningProcess;// Offset=0x18 Size=0x8
    struct _EPARTITION * ReferencedPartition;// Offset=0x20 Size=0x8
};
