struct _LIST_ENTRY// Size=0x10 (Id=122)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct FxCollectionInternal// Size=0x18 (Id=2788)
{
    union // Size=0xfc (Id=0)
    {
        unsigned long m_Count;// Offset=0x0 Size=0x4
        struct _LIST_ENTRY m_ListHead;// Offset=0x8 Size=0x10
        void FxCollectionInternal();
        void ~FxCollectionInternal();
        class FxCollectionEntry * FindEntry(unsigned long );// Offset=0x0 Size=0x2a
        class FxCollectionEntry * FindEntryByObject(class FxObject * );
        unsigned long Count();
        unsigned char Add(struct _FX_DRIVER_GLOBALS * ,class FxObject * );// Offset=0x0 Size=0xfc
        class FxObject * GetItem(unsigned long );// Offset=0x0 Size=0x2f
        class FxObject * GetFirstItem();
        class FxObject * GetLastItem();
        long Remove(unsigned long );// Offset=0x0 Size=0x29
        void CleanupEntry(class FxCollectionEntry * );// Offset=0x0 Size=0x43
        void CleanupEntryObject(class FxObject * );// Offset=0x0 Size=0x2c
        long RemoveEntry(class FxCollectionEntry * );// Offset=0x0 Size=0x31
        long RemoveItem(class FxObject * );
        class FxCollectionEntry * Start();
        class FxCollectionEntry * End();
        void Clear();// Offset=0x0 Size=0x2e
        class FxCollectionEntry * AllocateEntry(struct _FX_DRIVER_GLOBALS * );// Offset=0x0 Size=0x5f
        void AddEntry(class FxCollectionEntry * ,class FxObject * );
        void * __vecDelDtor(unsigned int );
    };
};
