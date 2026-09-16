#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 18 member(s).
class ATL {
public:
    class CAtlBaseModule;
    class CAtlComModule;
    class CAtlModule;
    class CAtlStringMgr;
    class CAtlWinModule;
    class CComBSTR;
    class CComClassFactory;
    class CComCriticalSection;
    class CComModule;
    class CComObjectRootBase;
    class CComSafeDeleteCriticalSection;
    class CComVariant;
    class CExpansionVector;
    class CRegKey;
    class CRegObject;
    class CRegParser;
    class CStringData;
    class CWin32Heap;
    class Checked;
    class ModuleLockHelper;
    class _ATL_BASE_MODULE70;
    class _ATL_COM_MODULE70;
    class _ATL_MODULE70;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCallTermFunc@ATL@@YAXPEAU_ATL_MODULE70@1@@Z
    void AtlCallTermFunc(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComModuleGetClassObject@ATL@@YAJPEAU_ATL_COM_MODULE70@1@AEBU_GUID@@1PEAPEAX@Z
    long AtlComModuleGetClassObject(WindissectOpaque*, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z
    IUnknown * AtlComPtrAssign(IUnknown * *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlCrtErrorCheck@ATL@@YAHH@Z
    int AtlCrtErrorCheck(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHresultFromLastError@ATL@@YAJXZ
    long AtlHresultFromLastError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlHresultFromWin32@ATL@@YAJK@Z
    long AtlHresultFromWin32(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z
    long AtlInternalQueryInterface(void *, WindissectOpaque const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlRegisterClassCategoriesHelper@ATL@@YAJAEBU_GUID@@PEBU_ATL_CATMAP_ENTRY@1@H@Z
    long AtlRegisterClassCategoriesHelper(_GUID const &, WindissectOpaque const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlThrowImpl@ATL@@YAXJ@Z
    void AtlThrowImpl(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AtlWinModuleTerm@ATL@@YAJPEAU_ATL_WIN_MODULE70@1@PEAUHINSTANCE__@@@Z
    long AtlWinModuleTerm(WindissectOpaque*, HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z
    int InlineIsEqualUnknown(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z
    unsigned long SafeDecrementReferenceMultiThread(long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z
    unsigned long SafeIncrementReferenceMultiThread(long volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlGetStringResourceImage@ATL@@YAPEBUATLSTRINGRESOURCEIMAGE@1@PEAUHINSTANCE__@@PEAUHRSRC__@@I@Z
    WindissectOpaque const * _AtlGetStringResourceImage(HINSTANCE__*, HRSRC__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AtlRaiseException@ATL@@YAXKK@Z
    void _AtlRaiseException(unsigned long, unsigned long);
};
