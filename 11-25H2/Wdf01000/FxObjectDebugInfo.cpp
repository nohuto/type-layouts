struct FxObjectDebugInfo// Size=0x4 (Id=1183)
{
    union // Size=0x2 (Id=0)
    {
        unsigned short ObjectType;// Offset=0x0 Size=0x2
        union <unnamed-type-u>// Size=0x2 (Id=47096)
        {
            unsigned short DebugFlags;// Offset=0x0 Size=0x2
            struct <unnamed-type-Bits>// Size=0x2 (Id=47098)
            {
                unsigned short TrackReferences:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            };
            struct FxObjectDebugInfo::<unnamed-type-u>::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x2
        };
    };
    union FxObjectDebugInfo::<unnamed-type-u> u;// Offset=0x2 Size=0x2
};
