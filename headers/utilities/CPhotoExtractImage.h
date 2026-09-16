#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 13 member(s).
class CPhotoExtractImage {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPhotoExtractImage@@QEAA@XZ
    CPhotoExtractImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Extract@CPhotoExtractImage@@UEAAJPEAPEAUHBITMAP__@@@Z
    virtual long Extract(HBITMAP__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CPhotoExtractImage@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFile@CPhotoExtractImage@@UEAAJPEAPEAG@Z
    virtual long GetCurFile(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocation@CPhotoExtractImage@@UEAAJPEAGKPEAKPEBUtagSIZE@@K1@Z
    virtual long GetLocation(unsigned short *, unsigned long, unsigned long *, tagSIZE const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPhotoExtractImage@@UEAAJPEAUIStream@@K@Z
    virtual long Initialize(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPhotoExtractImage@@UEAAJPEBGK@Z
    virtual long Initialize(unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CPhotoExtractImage@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CPhotoExtractImage@@UEAAJPEBGK@Z
    virtual long Load(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CPhotoExtractImage@@UEAAJPEBGH@Z
    virtual long Save(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveCompleted@CPhotoExtractImage@@UEAAJPEBG@Z
    virtual long SaveCompleted(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistry@CPhotoExtractImage@@SAJH@Z
    static long UpdateRegistry(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPhotoExtractImage@@QEAA@XZ
    ~CPhotoExtractImage();
};
