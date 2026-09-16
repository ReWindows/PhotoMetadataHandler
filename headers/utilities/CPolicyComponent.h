#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 12 member(s).
class CPolicyComponent {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataByName@CPolicyComponent@@UEAAJPEAUIWICMetadataQueryReader@@PEBGPEAUtagPROPVARIANT@@@Z
    virtual long GetMetadataByName(IWICMetadataQueryReader *, unsigned short const *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPolicyComponent@@UEAAJPEAUIWICMetadataQueryReader@@@Z
    virtual long Initialize(IWICMetadataQueryReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMetadataByName@CPolicyComponent@@UEAAJPEAUIWICMetadataQueryReader@@PEBG@Z
    virtual long RemoveMetadataByName(IWICMetadataQueryReader *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMetadataByName@CPolicyComponent@@UEAAJPEAUIWICMetadataQueryReader@@PEBGPEBUtagPROPVARIANT@@@Z
    virtual long SetMetadataByName(IWICMetadataQueryReader *, unsigned short const *, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistry@CPolicyComponent@@SAJH@Z
    static long UpdateRegistry(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRuleReader@CPolicyComponent@@MEAAJKPEAPEAVCRuleReader@@@Z
    virtual long CreateRuleReader(unsigned long, CRuleReader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRuleWriter@CPolicyComponent@@MEAAJKPEAPEAVCRuleWriter@@@Z
    virtual long CreateRuleWriter(unsigned long, CRuleWriter * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitializeRuleReader@CPolicyComponent@@AEAAJPEBUKEY_LIST_ENTRY@@PEAUIWICMetadataQueryReader@@PEAPEAVCRuleReader@@@Z
    long CreateAndInitializeRuleReader(KEY_LIST_ENTRY const *, IWICMetadataQueryReader *, CRuleReader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitializeRuleWriter@CPolicyComponent@@AEAAJPEBGPEAUIWICMetadataQueryWriter@@PEBURULE_PATH_INFO@@IPEBURULE_LIST_INDEX_ENTRY@@IPEAV?$CSimpleArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAVCRuleWriter@@@Z
    long CreateAndInitializeRuleWriter(unsigned short const *, IWICMetadataQueryWriter *, RULE_PATH_INFO const *, unsigned int, RULE_LIST_INDEX_ENTRY const *, unsigned int, WindissectOpaque *, CRuleWriter * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteKeysAffectedByChecksum@CPolicyComponent@@AEAAJPEAUIWICMetadataQueryWriter@@PEBG1PEAV?$CSimpleArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@@Z
    long WriteKeysAffectedByChecksum(IWICMetadataQueryWriter *, unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForIndexEntry@CPolicyComponent@@AEAAJPEBURULE_LIST_INDEX_ENTRY@@IKKPEAU2@@Z
    long _SearchForIndexEntry(RULE_LIST_INDEX_ENTRY const *, unsigned int, unsigned long, unsigned long, RULE_LIST_INDEX_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SearchForKey@CPolicyComponent@@AEAAJPEBGPEAPEBUKEY_LIST_ENTRY@@@Z
    long _SearchForKey(unsigned short const *, KEY_LIST_ENTRY const * *);
};
