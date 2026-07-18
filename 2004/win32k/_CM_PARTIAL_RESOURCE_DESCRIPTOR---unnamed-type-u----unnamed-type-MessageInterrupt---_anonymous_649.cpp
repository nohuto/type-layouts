union _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_649// Size=0xc (Id=649)
{
    struct <unnamed-type-Raw>// Size=0xc (Id=953)
    {
        unsigned short Group;// Offset=0x0 Size=0x2
        unsigned short MessageCount;// Offset=0x2 Size=0x2
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long Affinity;// Offset=0x8 Size=0x4
    };
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_650::<unnamed-type-Raw> Raw;// Offset=0x0 Size=0xc
    struct <unnamed-type-Translated>// Size=0xc (Id=959)
    {
        unsigned short Level;// Offset=0x0 Size=0x2
        unsigned short Group;// Offset=0x2 Size=0x2
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long Affinity;// Offset=0x8 Size=0x4
    };
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_651::<unnamed-type-Translated> Translated;// Offset=0x0 Size=0xc
};
