//////////////////////////////////////////////////////////////////////////////
// Name:        SVGZoomAndPan.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ZOOM_AND_PAN_H
#define WX_SVG_ZOOM_AND_PAN_H

#include "String.h"


enum wxSVG_ZOOMANDPAN
{
  wxSVG_ZOOMANDPAN_UNKNOWN = 0,
  wxSVG_ZOOMANDPAN_DISABLE = 1,
  wxSVG_ZOOMANDPAN_MAGNIFY = 2
};

class wxSVGZoomAndPan
{
  protected:
    wxSVG_ZOOMANDPAN m_zoomAndPan;

  public:
    inline wxSVG_ZOOMANDPAN GetZoomAndPan() const { return m_zoomAndPan; }
    inline void SetZoomAndPan(const wxSVG_ZOOMANDPAN& n) { m_zoomAndPan = n; }

  public:
    wxSVGZoomAndPan(): m_zoomAndPan(wxSVG_ZOOMANDPAN(0)) {}
    virtual ~wxSVGZoomAndPan() {}
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_ZOOM_AND_PAN_H
