#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 5 member(s).
class CBinaryRuleReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnRead@CBinaryRuleReader@@UEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnRead(int, tagPROPVARIANT *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertFromBlobToBuffer@CBinaryRuleReader@@CAJPEBUtagPROPVARIANT@@PEAU2@@Z
    static long ConvertFromBlobToBuffer(tagPROPVARIANT const *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertXMPGPSVersionToBuffer@CBinaryRuleReader@@CAJPEAUtagPROPVARIANT@@0@Z
    static long ConvertXMPGPSVersionToBuffer(tagPROPVARIANT *, tagPROPVARIANT *);
};
