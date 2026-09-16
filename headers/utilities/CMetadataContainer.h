#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 27 member(s).
class CMetadataContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CMetadataContainer@@QEAAJXZ
    long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoRemoveValue@CMetadataContainer@@QEAAJPEBU_tagpropertykey@@PEBUCAPABILITIES_LIST_ENTRY@@@Z
    long DoRemoveValue(_tagpropertykey const *, CAPABILITIES_LIST_ENTRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoSetValue@CMetadataContainer@@QEAAJPEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEBUCAPABILITIES_LIST_ENTRY@@@Z
    long DoSetValue(_tagpropertykey const *, tagPROPVARIANT const *, CAPABILITIES_LIST_ENTRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMetadataContainer@@QEAAJPEAUIStream@@KPEAUIWICBitmapDecoder@@@Z
    long Initialize(IStream *, unsigned long, IWICBitmapDecoder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadInMetadata@CMetadataContainer@@QEAAJXZ
    long ReadInMetadata();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchForKey@CMetadataContainer@@QEAAJPEBU_tagpropertykey@@PEAPEBUCAPABILITIES_LIST_ENTRY@@@Z
    long SearchForKey(_tagpropertykey const *, CAPABILITIES_LIST_ENTRY const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@CMetadataContainer@@QEAAJXZ
    long Uninitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMetadataContainer@@QEAA@XZ
    ~CMetadataContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPaddingForContainer@CMetadataContainer@@AEAAJPEAUIWICMetadataQueryWriter@@@Z
    long _AddPaddingForContainer(IWICMetadataQueryWriter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddReferencePKEYToList@CMetadataContainer@@AEAAXAEBU_tagpropertykey@@W4GPSCoordinateReferenceType@@@Z
    void _AddReferencePKEYToList(_tagpropertykey const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertRationalArray@CMetadataContainer@@AEAAJPEBUtagPROPVARIANT@@PEAU2@11@Z
    long _ConvertRationalArray(tagPROPVARIANT const *, tagPROPVARIANT *, tagPROPVARIANT *, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyFrameMetadataFromExistingFrame@CMetadataContainer@@AEAAJPEAUIWICBitmapFrameEncode@@PEAUIWICBitmapFrameDecode@@_N2@Z
    long _CopyFrameMetadataFromExistingFrame(IWICBitmapFrameEncode *, IWICBitmapFrameDecode *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoFullEncodeUsingTempStream@CMetadataContainer@@AEAAJPEAUIStream@@_N@Z
    long _DoFullEncodeUsingTempStream(IStream *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoRemoveValueRational@CMetadataContainer@@AEAAJPEBU_tagpropertykey@@PEBUCAPABILITIES_LIST_ENTRY@@@Z
    long _DoRemoveValueRational(_tagpropertykey const *, CAPABILITIES_LIST_ENTRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoSetValueRational@CMetadataContainer@@AEAAJPEBU_tagpropertykey@@PEBUtagPROPVARIANT@@PEBUCAPABILITIES_LIST_ENTRY@@@Z
    long _DoSetValueRational(_tagpropertykey const *, tagPROPVARIANT const *, CAPABILITIES_LIST_ENTRY const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EditMetadataInDecoder@CMetadataContainer@@AEAAJPEAUIWICBitmapFrameDecode@@_N@Z
    long _EditMetadataInDecoder(IWICBitmapFrameDecode *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EncodeFullImage@CMetadataContainer@@AEAAJPEAUIWICBitmapFrameDecode@@_N@Z
    long _EncodeFullImage(IWICBitmapFrameDecode *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FullEncodeUsingSafeCommit@CMetadataContainer@@AEAAJ_N@Z
    long _FullEncodeUsingSafeCommit(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FullEncodeUsingStreams@CMetadataContainer@@AEAAJ_N@Z
    long _FullEncodeUsingStreams(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeMetadataAndPaddingForFrame@CMetadataContainer@@AEAAJPEAUIWICMetadataQueryReader@@PEAUIWICMetadataQueryWriter@@_N2@Z
    long _InitializeMetadataAndPaddingForFrame(IWICMetadataQueryReader *, IWICMetadataQueryWriter *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessRationalType@CMetadataContainer@@AEAAJPEBUCAPABILITIES_LIST_ENTRY@@PEBUtagPROPVARIANT@@@Z
    long _ProcessRationalType(CAPABILITIES_LIST_ENTRY const *, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadMetadataFromImageFrame@CMetadataContainer@@AEAAJI@Z
    long _ReadMetadataFromImageFrame(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpContainerEncoder@CMetadataContainer@@AEAAJPEAUIWICBitmapEncoder@@PEAUIWICBitmapDecoder@@@Z
    long _SetUpContainerEncoder(IWICBitmapEncoder *, IWICBitmapDecoder *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetUpFrameEncoder@CMetadataContainer@@AEAAJPEAUIWICBitmapFrameEncode@@PEAUIWICBitmapFrameDecode@@PEAUIPropertyBag2@@I_N@Z
    long _SetUpFrameEncoder(IWICBitmapFrameEncode *, IWICBitmapFrameDecode *, IPropertyBag2*, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SynthesizeImagePKEYs@CMetadataContainer@@AEAAXXZ
    void _SynthesizeImagePKEYs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteOutDirtyItems@CMetadataContainer@@AEAAJPEAUIWICMetadataQueryWriter@@@Z
    long _WriteOutDirtyItems(IWICMetadataQueryWriter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteOutKey@CMetadataContainer@@AEAAJPEAUIWICMetadataQueryWriter@@PEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z
    long _WriteOutKey(IWICMetadataQueryWriter *, _tagpropertykey const *, tagPROPVARIANT const *);
};
