struct _HALP_DMA_TRANSLATION_BUFFER_POSITION// Size=0x10 (Id=438)
{
    struct _HALP_DMA_TRANSLATION_BUFFER * Buffer;// Offset=0x0 Size=0x8
    unsigned long Offset;// Offset=0x8 Size=0x4
};

struct _unnamed_386// Size=0x20 (Id=386)
{
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ContiguousHint;// Offset=0x0 Size=0x10
    struct _HALP_DMA_TRANSLATION_BUFFER_POSITION ScatterHint;// Offset=0x10 Size=0x10
};
