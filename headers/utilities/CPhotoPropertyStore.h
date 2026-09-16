#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 12 member(s).
class CPhotoPropertyStore {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPhotoPropertyStore@@QEAA@XZ
    CPhotoPropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CPhotoPropertyStore@@UEAAJXZ
    virtual long Commit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CPhotoPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPhotoPropertyStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CPhotoPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPhotoPropertyStore@@UEAAJPEAUIStream@@K@Z
    virtual long Initialize(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPhotoPropertyStore@@UEAAJPEBGK@Z
    virtual long Initialize(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPropertyWritable@CPhotoPropertyStore@@UEAAJAEBU_tagpropertykey@@@Z
    virtual long IsPropertyWritable(_tagpropertykey const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPhotoPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistry@CPhotoPropertyStore@@SAJH@Z
    static long UpdateRegistry(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPhotoPropertyStore@@QEAA@XZ
    ~CPhotoPropertyStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RealInitialize@CPhotoPropertyStore@@AEAAJXZ
    long _RealInitialize();
};
