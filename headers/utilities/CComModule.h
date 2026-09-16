#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 9 member(s).
namespace ATL {
class CComModule {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CComModule@ATL@@QEAAJPEAU_ATL_OBJMAP_ENTRY30@2@PEAUHINSTANCE__@@PEBU_GUID@@@Z
    long Init(WindissectOpaque*, HINSTANCE__*, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Term@CComModule@ATL@@QEAAXXZ
    void Term();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterServer@CComModule@ATL@@QEAAJHPEBU_GUID@@@Z
    long UnregisterServer(int, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceD@CComModule@ATL@@UEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceD(unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceD@CComModule@ATL@@UEAAJPEBGHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceD(unsigned short const *, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceS@CComModule@ATL@@UEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceS(unsigned int, int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistryFromResourceS@CComModule@ATL@@UEAAJPEBGHPEAU_ATL_REGMAP_ENTRY@2@@Z
    virtual long UpdateRegistryFromResourceS(unsigned short const *, int, WindissectOpaque *);
};
} // namespace ATL
