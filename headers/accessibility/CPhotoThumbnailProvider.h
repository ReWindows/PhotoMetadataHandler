#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 8 member(s).
class CPhotoThumbnailProvider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPhotoThumbnailProvider@@QEAA@XZ
    CPhotoThumbnailProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CPhotoThumbnailProvider@@UEAAJIPEAPEAUHBITMAP__@@PEAW4WTS_ALPHATYPE@@@Z
    virtual long GetThumbnail(unsigned int, HBITMAP__* *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPhotoThumbnailProvider@@UEAAJPEAUIStream@@K@Z
    virtual long Initialize(IStream *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPhotoThumbnailProvider@@UEAAJPEBGK@Z
    virtual long Initialize(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistry@CPhotoThumbnailProvider@@SAJH@Z
    static long UpdateRegistry(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPhotoThumbnailProvider@@QEAA@XZ
    ~CPhotoThumbnailProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseSourceAsThumbnail@CPhotoThumbnailProvider@@AEAA_NPEAUIWICBitmapSource@@IIIPEAUIWICMetadataQueryReader@@@Z
    bool CanUseSourceAsThumbnail(IWICBitmapSource *, unsigned int, unsigned int, unsigned int, IWICMetadataQueryReader *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetThumbnailSourceForICO@CPhotoThumbnailProvider@@AEAAJIPEAPEAUIWICBitmapSource@@@Z
    long _GetThumbnailSourceForICO(unsigned int, IWICBitmapSource * *);
};
