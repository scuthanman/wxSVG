//////////////////////////////////////////////////////////////////////////////
// Name:        SVGPointList.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by genList.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_POINT_LIST_H
#define WX_SVG_POINT_LIST_H

#include "SVGPoint.h"
#include "String.h"
#include <wx/dynarray.h>
WX_DECLARE_OBJARRAY(wxSVGPoint, wxSVGPointListBase);

class wxSVGPointList: public wxSVGPointListBase
{
  public:
    wxSVGPointList() {}
    
    wxString GetValueAsString() const;
    void SetValueAsString(const wxString& value);
};

#endif // WX_SVG_POINT_LIST_H
