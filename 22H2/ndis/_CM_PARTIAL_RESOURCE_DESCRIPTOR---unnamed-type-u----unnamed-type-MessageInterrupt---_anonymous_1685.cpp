union _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_1685// Size=0x10 (Id=1685)
{
    struct <unnamed-type-Raw>// Size=0x10 (Id=2368)
    {
        unsigned short Group;// Offset=0x0 Size=0x2
        unsigned short MessageCount;// Offset=0x2 Size=0x2
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long long Affinity;// Offset=0x8 Size=0x8
    };
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_1686::<unnamed-type-Raw> Raw;// Offset=0x0 Size=0x10
    struct <unnamed-type-Translated>// Size=0x10 (Id=2374)
    {
        unsigned short Level;// Offset=0x0 Size=0x2
        unsigned short Group;// Offset=0x2 Size=0x2
        unsigned long Vector;// Offset=0x4 Size=0x4
        unsigned long long Affinity;// Offset=0x8 Size=0x8
    };
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-MessageInterrupt>::_anonymous_1687::<unnamed-type-Translated> Translated;// Offset=0x0 Size=0x10
};
