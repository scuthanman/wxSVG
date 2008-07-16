//////////////////////////////////////////////////////////////////////////////
// Name:        SVGUINoteBookContent.h
// Purpose:     
// Author:      Laurent Bessard
// Created:     2008/03/09
// RCS-ID:      $Id: SVGUINoteBookContent.h,v 1.2 2008-07-02 14:18:35 etisserant Exp $
// Copyright:   (c) Laurent Bessard
// Licence:     wxWindows licence
//////////////////////////////////////////////////////////////////////////////

#ifndef SVGUI_NOTEBOOKCONTENT_H
#define SVGUI_NOTEBOOKCONTENT_H

#include <wxSVG/svg.h>
#include <wx/string.h>
#include <wxSVG/SVGElement.h>
#include <wxSVG/CSSValue.h>
#include <wx/wx.h>
#include "SVGUIContainer.h"

class SVGUINoteBookContent:
  public SVGUIContainer
{
  protected:
    wxSVGElement* m_TabElement;
    wxSVGElement* m_ContentElement;
    
  public:
    SVGUINoteBookContent(wxSVGDocument* doc);
    ~SVGUINoteBookContent();
    
    bool SetAttribute(const wxString& attrName, const wxString& attrValue);
    wxSVGElement* GetTabElement() {return m_TabElement;}
    wxSVGElement* GetContentElement() {return m_ContentElement;}
};

#endif //SVGUI_NOTEBOOKCONTENT_H