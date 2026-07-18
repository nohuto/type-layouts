struct _LIST_ENTRY// Size=0x10 (Id=111)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct FxIoQueueNode// Size=0x18 (Id=437)
{
    struct _LIST_ENTRY m_ListEntry;// Offset=0x0 Size=0x10
    enum FxIoQueueNodeType m_Type;// Offset=0x10 Size=0x4
    void FxIoQueueNode(struct FxIoQueueNode & );
    void FxIoQueueNode();
    void FxIoQueueNode(enum FxIoQueueNodeType );
    void ~FxIoQueueNode();
    struct FxIoQueueNode & operator=(struct FxIoQueueNode & );
    struct FxIoQueueNode * _FromListEntry(struct _LIST_ENTRY * );
    unsigned char _IsValidNodeType(enum FxIoQueueNodeType );
    unsigned char IsNodeType(enum FxIoQueueNodeType );
    void * __vecDelDtor(unsigned int );
};
