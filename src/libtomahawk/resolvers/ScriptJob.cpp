/* === This file is part of Tomahawk Player - <http://tomahawk-player.org> ===
 *
 *   Copyright 2014, Dominik Schmidt <domme@tomahawk-player.org>
 *
 *   Tomahawk is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Tomahawk is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Tomahawk. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptJob.h"
#include <QMetaObject>

using namespace Tomahawk;

ScriptJob::ScriptJob( ScriptObject* scriptObject, const QString& method, const QVariantMap& parameters )
    : QObject()
{
}


ScriptJob::~ScriptJob()
{
}


void
ScriptJob::start()
{

}


void
ScriptJob::reportResults( const QVariantMap& data )
{
    m_data = data;
    emit done( data );
}


void
ScriptJob::reportFailure()
{

}

