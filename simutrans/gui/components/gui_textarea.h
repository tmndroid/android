/*
 * Copyright (c) 1997 - 2001 Hansj�rg Malthaner
 *
 * This file is part of the Simutrans project under the artistic licence.
 * (see licence.txt)
 */

#ifndef gui_textarea_h
#define gui_textarea_h

#include "gui_komponente.h"

class cbuffer_t;

/**
 * Eine textanzeigekomponente
 *
 * @autor Hj. Malthaner
 */
class gui_textarea_t : public gui_komponente_t
{
private:
	/**
	* The text to display. May be multi-lined.
	* @autor Hj. Malthaner
	*/
	cbuffer_t* buf;

	// we cache the number of lines, to dynamically recalculate the size, if needed
	uint16	lines;

public:
	gui_textarea_t(cbuffer_t* buf_);

	/**
	 * recalc the current size, needed for speculative size calculations
	 */
	void recalc_size();

	/**
	* Zeichnet die Komponente
	* @author Hj. Malthaner
	*/
	virtual void zeichnen(koord offset);
};

#endif