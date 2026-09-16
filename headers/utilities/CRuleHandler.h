#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 4 member(s).
class CRuleHandler {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareChecksums@CRuleHandler@@KAJPEAUIWICMetadataQueryReader@@PEBURULE_PATH_INFO@@PEAH@Z
    static long CompareChecksums(IWICMetadataQueryReader *, RULE_PATH_INFO const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRuleHandler@@MEAAJPEBUKEY_LIST_ENTRY@@PEBUCAPABILITIES_LIST_ENTRY@@PEBURULE_PATH_INFO@@I@Z
    virtual long Initialize(KEY_LIST_ENTRY const *, CAPABILITIES_LIST_ENTRY const *, RULE_PATH_INFO const *, unsigned int);
};
