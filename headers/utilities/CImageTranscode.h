#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 2 member(s).
class CImageTranscode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranscodeImage@CImageTranscode@@UEAAJPEAUIShellItem@@IIKPEAUIStream@@PEAI2@Z
    virtual long TranscodeImage(IShellItem *, unsigned int, unsigned int, unsigned long, IStream *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegistry@CImageTranscode@@SAJH@Z
    static long UpdateRegistry(int);
};
