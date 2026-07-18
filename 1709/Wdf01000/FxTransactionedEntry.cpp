struct _LIST_ENTRY// Size=0x10 (Id=127)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct FxTransactionedEntry// Size=0x30 (Id=1027)
{
    void FxTransactionedEntry(class FxObject * );
    void SetTransactionedObject(class FxObject * );
    class FxObject * GetTransactionedObject();
    struct FxTransactionedEntry * _FromEntry(struct _LIST_ENTRY * );
    enum FxListTransactionAction GetTransactionAction();
    struct _LIST_ENTRY m_ListLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY m_TransactionLink;// Offset=0x10 Size=0x10
    enum FxListTransactionAction m_Transaction;// Offset=0x20 Size=0x4
    class FxObject * m_TransactionedObject;// Offset=0x28 Size=0x8
    void __dflt_ctor_closure();
};
