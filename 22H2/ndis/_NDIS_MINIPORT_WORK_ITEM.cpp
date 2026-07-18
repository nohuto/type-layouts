struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=33)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

enum _NDIS_WORK_ITEM_TYPE
{
    NdisWorkItemRequest=0,
    NdisWorkItemSend=1,
    NdisWorkItemReturnPackets=2,
    NdisWorkItemResetRequested=3,
    NdisWorkItemResetInProgress=4,
    NdisWorkItemReserved=5,
    NdisWorkItemMiniportCallback=6,
    NdisMaxWorkItems=7
};

struct _NDIS_MINIPORT_WORK_ITEM// Size=0x18 (Id=1338)
{
    struct _SINGLE_LIST_ENTRY Link;// Offset=0x0 Size=0x8
    enum _NDIS_WORK_ITEM_TYPE WorkItemType;// Offset=0x8 Size=0x4
    void * WorkItemContext;// Offset=0x10 Size=0x8
};
