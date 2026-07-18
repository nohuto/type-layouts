struct FxObjectDebugInfo// Size=0x4 (Id=454)
{
    union // Size=0x2 (Id=0)
    {
        unsigned short ObjectType;// Offset=0x0 Size=0x2
        union <unnamed-type-u>// Size=0x2 (Id=40682)
        {
            unsigned short DebugFlags;// Offset=0x0 Size=0x2
            struct <unnamed-type-Bits>// Size=0x2 (Id=40684)
            {
                unsigned short TrackReferences:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
                unsigned short TrackObjectCountForLeak:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            };
            struct FxObjectDebugInfo::<unnamed-type-u>::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x2
        };
    };
    union FxObjectDebugInfo::<unnamed-type-u> u;// Offset=0x2 Size=0x2
};
