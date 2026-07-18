struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct NDIS_BIND_LINK_BASE// Size=0x60 (Id=228)
{
    union // Size=0x6c (Id=0)
    {
        void LinkToDriver(struct NDIS_BIND_DRIVER_BASE * );// Offset=0x0 Size=0x6c
        void NDIS_BIND_LINK_BASE(struct NDIS_BIND_LINK_BASE & );
        void NDIS_BIND_LINK_BASE();
        void ~NDIS_BIND_LINK_BASE();
        class Ndis::BindState BindState;// Offset=0x0 Size=0x50
        struct _LIST_ENTRY DriverLinkage;// Offset=0x50 Size=0x10
        struct NDIS_BIND_LINK_BASE & operator=(struct NDIS_BIND_LINK_BASE & );
        void * __vecDelDtor(unsigned int );
    };
};
