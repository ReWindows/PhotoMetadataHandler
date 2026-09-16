#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 8 member(s).
class CPhotoPropertyItemList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearList@CPhotoPropertyItemList@@QEAAXXZ
    void ClearList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPhotoPropertyItemList@@QEAAIXZ
    unsigned int GetCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CPhotoPropertyItemList@@QEAAJPEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    long GetItem(_tagpropertykey const *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAtIndex@CPhotoPropertyItemList@@QEAAJIPEAUtagPROPVARIANT@@PEAU_tagpropertykey@@@Z
    long GetItemAtIndex(unsigned int, tagPROPVARIANT *, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemDirty@CPhotoPropertyItemList@@QEAA_NPEBU_tagpropertykey@@@Z
    bool IsItemDirty(_tagpropertykey const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalDeleteItem@CPhotoPropertyItemList@@AEAAJPEBU_tagpropertykey@@@Z
    long _InternalDeleteItem(_tagpropertykey const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalFindItem@CPhotoPropertyItemList@@AEAAPEAU_tagPhotoPropertyItem@1@PEBU_tagpropertykey@@@Z
    WindissectOpaque * _InternalFindItem(_tagpropertykey const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalUpdateOrAddItem@CPhotoPropertyItemList@@AEAAJPEBU_tagpropertykey@@PEBUtagPROPVARIANT@@_N2@Z
    long _InternalUpdateOrAddItem(_tagpropertykey const *, tagPROPVARIANT const *, bool, bool);
};
