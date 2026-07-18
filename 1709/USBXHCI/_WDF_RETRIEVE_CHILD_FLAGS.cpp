enum _WDF_RETRIEVE_CHILD_FLAGS
{
    WdfRetrieveUnspecified=0,
    WdfRetrievePresentChildren=1,
    WdfRetrieveMissingChildren=2,
    WdfRetrievePendingChildren=4,
    WdfRetrieveAddedChildren=5,
    WdfRetrieveAllChildren=7
};
