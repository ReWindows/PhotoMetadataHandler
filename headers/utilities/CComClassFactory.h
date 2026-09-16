#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 2 member(s).
namespace ATL {
class CComClassFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CComClassFactory@ATL@@UEAAJH@Z
    virtual long LockServer(int);
};
} // namespace ATL
