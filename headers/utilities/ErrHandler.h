#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 5 member(s).
namespace DIS11 {
class ErrHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?error@ErrHandler@DIS11@@UEAAJPEAUISAXLocator@@PEBGJ@Z
    virtual long error(ISAXLocator *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?fatalError@ErrHandler@DIS11@@UEAAJPEAUISAXLocator@@PEBGJ@Z
    virtual long fatalError(ISAXLocator *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ignorableWarning@ErrHandler@DIS11@@UEAAJPEAUISAXLocator@@PEBGJ@Z
    virtual long ignorableWarning(ISAXLocator *, unsigned short const *, long);
};
} // namespace DIS11
