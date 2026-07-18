struct _HAL_HV_DMA_DOMAIN_INFO// Size=0x8 (Id=309)
{
    unsigned long DomainId;// Offset=0x0 Size=0x4
    unsigned char IsStage1;// Offset=0x4 Size=0x1
};

struct _HAL_HV_DMA_CREATE_DOMAIN_INFO// Size=0xc (Id=342)
{
    struct _HAL_HV_DMA_DOMAIN_INFO DomainInfo;// Offset=0x0 Size=0x8
    unsigned char InheritPassthroughDomain;// Offset=0x8 Size=0x1
    unsigned char ForwardProgressRequired;// Offset=0x9 Size=0x1
};
