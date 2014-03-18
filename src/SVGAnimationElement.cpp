//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimationElement.cpp
// Purpose:     
// Author:      Alex Thuering
// Created:     2005/05/10
// RCS-ID:      $Id: SVGAnimationElement.cpp,v 1.4 2014-03-18 13:12:11 ntalex Exp $
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
//////////////////////////////////////////////////////////////////////////////

#include "SVGAnimationElement.h"
#include "SVGDocument.h"

double wxSVGAnimationElement::GetStartTime() {
  return m_begin;
}

double wxSVGAnimationElement::GetCurrentTime() {
	wxSVGDocument* doc = (wxSVGDocument*) GetOwnerDocument();
	return doc != NULL ? doc->GetCurrentTime() : 0;
}

double wxSVGAnimationElement::GetSimpleDuration() {
	return m_dur;
}

void wxSVGAnimationElement::ApplyAnimation() {
	if (GetDur() <= 0)
		return;
	if (GetTargetElement() == NULL)
		SetTargetElement((wxSVGElement*) GetParent());
	if (GetCurrentTime() >= GetStartTime() + GetDur())
		GetTargetElement()->SetAttribute(GetAttributeName(), GetTo().GetValueAsString());
	else if (GetCurrentTime() >= GetStartTime() && GetFrom().GetPropertyType() == wxSVG_ANIMATED_LENGTH
			&& GetTo().GetPropertyType() == wxSVG_ANIMATED_LENGTH) {
		wxSVGLength val(GetTo().GetLength().GetUnitType(), GetFrom().GetLength().GetValue()
				+ (GetTo().GetLength().GetValue() - GetFrom().GetLength().GetValue())*
				(GetCurrentTime() - GetStartTime())/GetDur());
		GetTargetElement()->SetAttribute(GetAttributeName(), val.GetValueAsString());
	}
}
