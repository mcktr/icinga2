/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012-2014 Icinga Development Team (http://www.icinga.org)    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#ifndef CHECKCOMMAND_H
#define CHECKCOMMAND_H

#include "icinga/checkcommand.th"
#include "icinga/service.h"

namespace icinga
{

/**
 * A command.
 *
 * @ingroup icinga
 */
class I2_ICINGA_API CheckCommand : public ObjectImpl<CheckCommand>
{
public:
	DECLARE_PTR_TYPEDEFS(CheckCommand);
	DECLARE_TYPENAME(CheckCommand);

	virtual void Execute(const Checkable::Ptr& checkable, const CheckResult::Ptr& cr);
};

}

#endif /* CHECKCOMMAND_H */
