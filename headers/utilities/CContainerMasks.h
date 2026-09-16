#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 3 member(s).
class CContainerMasks {
public:
    class StaticData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContainerMasksLoaded@CContainerMasks@@SAJXZ
    static long EnsureContainerMasksLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupContainerMask@CContainerMasks@@SAKAEBU_GUID@@@Z
    static unsigned long LookupContainerMask(_GUID const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildContainerMasks@CContainerMasks@@CAJPEAV?$CAtlMap@U_GUID@@KV?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@K@3@@ATL@@@Z
    static long BuildContainerMasks(WindissectOpaque *);
};
